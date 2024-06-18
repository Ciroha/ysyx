/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
word_t paddr_read(paddr_t addr, int len);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args) {
  int steps = 0; //变量定义
  if (args == NULL)
    steps = 1; //如果没有接参数，就将步数设置为1
  else
	steps = atoi(args); //将char型转换成int 
  cpu_exec(steps);
  return 0;
}

static int cmd_info(char *args) {
	if (args == NULL)
		printf("No args.\n");
	else if (strcmp(args, "r") == 0)
		isa_reg_display();
//	else if (strcmp(args, "w") == 0)
//		sda_watchpoint_display();
	else
		printf("Usage:info r or info w!\n");
	return 0;
}

static int cmd_x(char *args) {
	if (args == NULL)
		printf("No args.\n");
	else {
		char *n = strtok(args, " ");
		char *addr = strtok(NULL, " "); //zi fu fen ge
		int len = 0;
		paddr_t baseaddr = 0;
		sscanf(n, "%d", &len);
		sscanf(addr, "%x", &baseaddr);
		for (int i = 0; i < len ;i++)
		{
			printf("%x\n", paddr_read(baseaddr,4));
			baseaddr = baseaddr + 4;
		}
		}
	return 0;
}

static int cmd_p(char *args) {
	bool success;
	word_t res = expr(args, &success);
	printf("The result is: %u\n", res);
	return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "single step", cmd_si },
  { "info", "program information", cmd_info},
  { "x", "scan memory", cmd_x},
  { "p", "Expression evaluation", cmd_p},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void expr_test() {
  Log("expr_test!");
  FILE *fp = fopen("/home/ciroha/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  if (fp == NULL) perror("test error");
  
  word_t correct_res;
  char *tmp = NULL;
  bool success = false;
  size_t len = 0;
  ssize_t read;

  while (1) {
    if (fscanf(fp, "%u", &correct_res) == -1) break;
    //Log("testing! correct_res = %u, tmp = %s", correct_res, tmp);
    read = getline(&tmp, &len, fp);
    tmp[read-1] = '\0'; //将结束字符串设为空
    Log("testing! correct_res = %u, tmp = %s", correct_res, tmp);
    word_t res = expr(tmp, &success);
    Log("res = %u", res);
    //assert(success);
    if (res != correct_res) {
      puts(tmp);
      printf("expected: %u , got: %u\n", correct_res, res);
      //assert(0);
    }
    else {
      Log("Test pass with %u", res);
    }

  }

  fclose(fp);
  if(tmp) free(tmp);

  Log("expr test pass");
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  expr_test();
  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
