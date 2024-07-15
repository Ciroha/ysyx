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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

#define reg_num 32

const char *regs1[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc){
    bool flag = true;
    if(ref_r->pc != pc)
        flag = false;
    for(int i = 0; i < reg_num; i++){
        if(ref_r->gpr[i] != cpu.gpr[i])
            flag = false;
    }
    if(flag == false){
        printf("ref-pc=%x,dut-pc=%x\n",ref_r->pc, pc);
        for(int i = 0; i < reg_num; i++){
            printf("reg-%3s     %d\n",regs1[i],ref_r->gpr[i]);
        }
    }
    return flag;
}

void isa_difftest_attach() {
}
