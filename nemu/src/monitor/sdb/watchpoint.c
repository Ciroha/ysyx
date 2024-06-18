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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expr[100];
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
/*static WP* new_wp() {  //ret为当前值，head指向链表的头部，free指向自由链表的头部
  assert(free_);  //确保剩余的不为空
  WP* ret = free_;
  free_ = free_->next;  //使链表指向下一个对象
  ret->next = head;
  head = ret; //head指向最近分配的对象
  return ret;
}

static void free_wp(WP *wp) {
  WP* h = head;
  if (h == wp) head = NULL;
  else {
    while (h && h->next != wp) h = h->next;
    assert(h);
    h->next = wp->next;
  }
  wp->next = free_;
  free_ = wp; //加入空闲链表
}*/

void sda_watchpoint_display() {
  WP* h = head;
  if (!h) {
    printf("No watchpoints!\n");
    return;
  }
  printf("%-8s%-8s\n", "Num", "Expr");
  while (h) {
    printf("%-8d%-8s\n", h->NO, h->expr);
    h = h->next;
  }
}
