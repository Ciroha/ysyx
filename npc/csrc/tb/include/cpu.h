#include "common.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

extern Vysyx_23060332_top cpu;

void single_cycle();
void reset(int n);
static void execute(uint32_t n);
void cpu_exec(uint64_t n);