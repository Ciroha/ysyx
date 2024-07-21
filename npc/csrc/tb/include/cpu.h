#include <common.h>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top.h"

extern Vysyx_23060332_top cpu;

void single_cycle();
void reset(int n);
static void execute(uint32_t n);
void cpu_exec(uint64_t n);