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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static int index_buf = 0;
static int cnt = 0;
static uint32_t choose_num = 0;

static uint32_t choose(int n) {
	return rand() % n;
}

static void gen(char c) {
	buf[index_buf++] = c; //生成字符
}

static void gen_num() {
	int num = choose(100);
	sprintf(&buf[index_buf++], "%d", num);
}

static void gen_rand_op() {
	char op[4] = {'+', '-', '*', '/'};
	int op_position = choose(4);
	buf[index_buf++] = op[op_position];
}

static void gen_rand_expr() {
  cnt ++;
  if (cnt > 20)
    choose_num = 0;
  else 
    choose_num = choose(4);
  //printf("choose_num = %d\n", choose_num);
  switch (choose_num) {
    case 0: gen_num(); 
            break;
    case 1: gen('('); gen_rand_expr(); gen(')'); 
            break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); 
            break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  //printf("loop = %d\n", loop);
  int i;
  for (i = 0; i < loop; i ++) {
    index_buf = 0;
    cnt = 0;
    for (int j = 0; j < 65536; j++)
      buf[j] = '\0';
    for (int k = 0; k < 65536+128; k++)
      code_buf[k] = '\0';
    //printf("[%d]Test: buf = %s\nindex_buf = %d\n", i, buf, index_buf);
    gen_rand_expr();
    if (index_buf > 65530)
      printf("oversize\n");
    //printf("[%d]Test2: buf = %s\n index_buf = %d\n", i, buf, index_buf);
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -Werror -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint32_t result = 0;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);
    
   // if (result >> 31) { //转换
   //   result = result - (1 << 31);
   //   result = (1 << 31) - result;
   //   printf("-%u %s\n", result, buf);
   // }
   // else {
   //   printf("%u %s\n", result, buf);
   // }

    printf("%u %s\n", result, buf);

  }
  return 0;
}
