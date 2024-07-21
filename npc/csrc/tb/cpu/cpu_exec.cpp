#include <common.h>
#include <cpu.h>
#include <memory.h>

Vysyx_23060332_top cpu;

void wave_dump();
void close_wave();
uint32_t isa_reg_str2val(const char *s, bool *success);

void single_cycle() {
    cpu.clk = 0; cpu.eval(); wave_dump();
    cpu.clk = 1; cpu.inst = pmem_read(cpu.pc); cpu.eval(); wave_dump();
}

void reset(int n) {
    cpu.rst = 1;
    while (n-- > 0) single_cycle();
    cpu.rst = 0;
}

static void execute(uint32_t n) {
    for (; n > 0; n --) {
        single_cycle();
        // wave_dump();
    }
}


void cpu_exec(uint64_t n) {
    execute(n);
}

extern "C" void npc_trap(){
	bool reg_success = false;
    wave_dump();
	close_wave();
	// printf("trap in %#x",dut.pc);
	uint32_t reg_val = isa_reg_str2val("a0", &reg_success);
	if (reg_success && (reg_val == 0)) {
		printf("HIT GOOD TRAP at pc = %#x\n", cpu.pc);
	}else{
		printf("HIT BAD TRAP at pc = %#x\n", cpu.pc);
	}
	exit(0);
}