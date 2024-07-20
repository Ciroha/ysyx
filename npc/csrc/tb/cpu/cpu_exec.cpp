#include <common.h>
#include <cpu.h>
#include <memory.h>

void wave_dump();

void single_cycle() {
    cpu.clk = 0; cpu.eval();
    cpu.clk = 1; cpu.eval();
}

void reset(int n) {
    cpu.rst = 1;
    while (n-- > 0) single_cycle();
    cpu.rst = 0;
}

static void execute(uint32_t n) {
    for (; n > 0; n --) {
        cpu.inst = pmem_read(cpu.pc);
        single_cycle();
        wave_dump();
    }
}


void cpu_exec(uint64_t n) {
    execute(n);
}