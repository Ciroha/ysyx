#include "stdint.h"
#include "stdlib.h"
#include "getopt.h"
#include "stdio.h"
#include "string.h"
#include "assert.h"
#include "stdbool.h"
#include "common.h"

#include <Vysyx_23060332_top.h>
#include "Vysyx_23060332_top___024root.h"

extern Vysyx_23060332_top cpu;

extern uint32_t gpr[32];
extern CPU_state sim_cpu;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
    for (int i = 0; i < 32; i++)
        printf("regs %s -> %x\n", regs[i], gpr[i]);
}

uint32_t isa_reg_str2val(const char *s, bool *success) {
    for (int i = 0; i < 32; i++) {
        if (strcmp(s, regs[i]) == 0) {
            printf("Success! result = %d\n", gpr[i]);
            *success = true;
            return gpr[i];
        }
    }
    *success = false;
    printf("Read fail!\n");
    return 0;
}

// extern "C" void reg_read(int i, uint32_t regs_i) {
//     gpr[i] = regs_i;
// }

void reg_read() {
    for (int i = 0; i < 32; i ++) {
        gpr[i] = cpu.rootp -> ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[i];
        sim_cpu -> gpr[i] = cpu.rootp -> ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[i];
    }
}