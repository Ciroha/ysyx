#include <common.h>

#include <readline/readline.h>
#include <readline/history.h>
#include <cpu.h>
#include "memory.h"

static char* rl_gets() {
    static char *line_read = NULL;

    if (line_read) {
        free(line_read);
        line_read = NULL;
    }

    line_read = readline("(npc) ");

    if (line_read && *line_read) {
        add_history(line_read);
    }

    return line_read;
}

void isa_reg_display();

static int cmd_help(char *args);

static int cmd_c(char *args) {
    cpu_exec(-1);
    return 0;
}

static int cmd_q(char *args) {
    return -1;
}

static int cmd_si(char *args) {
    int steps = 0;
    if (args == NULL) {
        steps = 1;
    }
    else {
        steps = atoi(args);
    }
    cpu_exec(steps);
    return 0;
}

static int cmd_info(char *args) {
    if (args == NULL) {
        printf("No rags.\n");
    } else if (strcmp(args, "r") == 0) {
        isa_reg_display();
    } else {
        printf("Usage: info r!\n");
    }
    return 0;
}

static int cmd_x(char *args) {
    if (args == NULL)
        printf("No args!\n");
    else {
        char *n = strtok(args, " ");
        char *addr = strtok(NULL, " ");
        int len = 0;
        uint32_t baseaddr = 0;
        sscanf(n, "%d", &len);
        sscanf(addr, "%x", &baseaddr);
        for (int i = 0; i < len; i++) {
            printf("%#010x\n", pmem_read(baseaddr));
            baseaddr += 4;
        }
    }
    return 0;
}

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table [] = {
    { "help", "Display information about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NPC", cmd_q },
    { "si", "single step", cmd_si },
    { "info", "program information", cmd_info},
    { "x", "scan memory", cmd_x},
//   { "p", "Expression evaluation", cmd_p},
//   { "w", "set watchpoint", cmd_w},
//   { "d", "delete watchpoint", cmd_d},
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
        return 0;
    }
    else {
        for (i = 0; i < NR_CMD; i ++) {
            if (strcmp(arg, cmd_table[i].name) == 0) {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
    }
    printf("Unknown command '%s'\n", arg);
    return 0;
}

void sdb_mainloop() {
#ifdef CONFIG_BATCHMODE
    cmd_c(NULL);
    return;
#endif

    for (char *str; (str = rl_gets()) != NULL; ) {
        char *str_end = str + strlen(str);

        char *cmd = strtok(str, " ");
        if (cmd == NULL) {continue;}

        char *args = cmd + strlen(cmd) + 1;
        if (args >= str_end) {
            args = NULL;
        }

        int i;
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(cmd, cmd_table[i].name) == 0) {
                if (cmd_table[i].handler(args) < 0) {return;}
                break;
            }
        }

        if (i == NR_CMD) {printf("Unknown command '%s'\n", cmd); }
    }

}