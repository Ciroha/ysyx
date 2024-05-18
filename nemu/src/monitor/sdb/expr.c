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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

uint32_t eval(int p, int q);

enum { //枚举类型
  TK_NOTYPE = 256, 
  TK_EQ = 1, 
  TK_NUMBER = 2,
  TK_LEFT = 3, 
  TK_RIGHT = 4,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus 用到了转义字符，单个反斜杠将被视为转义字符的开始
  {"==", TK_EQ},        // equal
	{"-", '-'},
	{"\\b[0-9]+\\b", TK_NUMBER},
	{"\\*", '*'},		//乘法操作
	{"/", '/'},			//除法操作
	{"\\(", TK_LEFT},	//左括号
	{"\\)", TK_RIGHT},	//右括号
	
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
			case '+':
				tokens[nr_token++].type = '+';
				break;
			case '-':
				tokens[nr_token++].type = '-';
				break;
			case '*':
				tokens[nr_token++].type = '*';
				break;
			case '/':
				tokens[nr_token++].type = '/';
				break;
			case TK_LEFT:
				tokens[nr_token++].type = TK_LEFT;
				break;
			case TK_RIGHT:
				tokens[nr_token++].type = TK_RIGHT;
				break;
			case TK_NOTYPE:
				tokens[nr_token++].type = TK_NOTYPE;
				break;
			case TK_NUMBER:
				tokens[nr_token].type = TK_NUMBER;
				strncpy(tokens[nr_token].str, substr_start, substr_len);
				Log("number in token[%d]:%s, type = %d", nr_token, tokens[nr_token].str, tokens[nr_token].type);
				nr_token++;
				break;
			default: TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  //printf("nr_token:%d\n", nr_token);
	Log("nr_token = %d", nr_token);
  return eval(0, nr_token-1);
}

bool check_parentheses(int p, int q) {
	Log("check_parentheses");
	if (tokens[p].type == TK_LEFT && tokens[q].type == TK_RIGHT) {
		Log("p=%d,q=%d", p, q);
		int cnt = 0;
		for (int i = p; i <= q; i++) {
			if (tokens[i].type == TK_LEFT) cnt++;
			else if (tokens[i].type == TK_RIGHT) cnt--;
		}
		if (cnt == 0) return true;
	}
	return false;
}

uint32_t eval(int p, int q) {
if (p > q) {
    /* Bad expression */
	Log("p=%d,q=%d", p, q);
	assert(0); //报错
	return -1;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
	return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
	Log("parentheses detected! p = %d, q = %d", p , q);
    return eval(p + 1, q - 1);
  }
  else {
	  Log("in part 4");
	  int op = -1;
	  int op1 = -1;
	  int op2 = -1;
	  int flag = 0; //指示当前是否在括号内
    for (int i = p; i <= q; i++) {
		Log("token type = %d", tokens[i].type);
		if (tokens[i].type == TK_NUMBER) {
			//printf("number detected:%s\n", tokens[i].str);
			continue;
		}

		if (tokens[i].type == TK_NOTYPE) {
			continue;
		}
		
		if (tokens[i].type == TK_LEFT) {
			flag++;
		}else if (tokens[i].type == TK_RIGHT) {
			flag--; //在括号外
		}

		if (!flag && (tokens[i].type == '+' || tokens[i].type == '-')) { //在括号外且运算符为加减
			op1 = (op1 > i) ? op1 : i;
		}
		
		if (!flag && (tokens[i].type == '*' || tokens[i].type == '/')) { //在括号外且运算符为乘除
			op2 = (op2 > i) ? op2 : i;
		}

		op = (op1 == -1) ? op2 : op1;

	}
    uint32_t val1 = eval(p, op - 1);
    uint32_t val2 = eval(op + 1, q);
	int op_type = tokens[op].type;

    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
    }
  }
}
