#include <common.h>
#include <cpu.h>
#include <memory.h>

#define MAX_INST_TO_PRINT 10

Vysyx_23060332_top cpu;
static bool g_print_step = false;

void wave_dump();
void close_wave();
uint32_t isa_reg_str2val(const char *s, bool *success);
void isa_reg_display();
void open_wave();
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

void single_cycle() {
    cpu.clk = 0; cpu.eval(); wave_dump();
    cpu.clk = 1; cpu.eval(); cpu.inst = pmem_read(cpu.pc); wave_dump();
}

void reset(int n) {
    cpu.rst = 1;
    while (n-- > 0) single_cycle();
    cpu.rst = 0;
}

static void execute(uint32_t n) {
    for (; n > 0; n --) {
        single_cycle();
        char buf[128] = {0};
        char *p = buf;
        p += snprintf(p, 128, "%#x:", cpu.pc);
        int ilen = 4;
        uint8_t *inst = (uint8_t *)&cpu.inst;
        for (int i = ilen - 1; i >= 0; i--) {
            p += snprintf(p, 4, "%02x", inst[i]);
        }
        memset(p, ' ', 1);
        p += 1;
        // disassemble(p, p + sizeof(buf) - buf, cpu.pc, (uint8_t *)&cpu.inst, 4);
        // if (g_print_step)
        //     puts(buf);
        // wave_dump();
    }
}


void cpu_exec(uint64_t n) {
    g_print_step = (n < MAX_INST_TO_PRINT);
    execute(n);
    // close_wave();
}

extern "C" void npc_trap(){
	bool reg_success = false;
    wave_dump();
	close_wave();
	// printf("trap in %#x",dut.pc);
    isa_reg_display();
	uint32_t reg_val = isa_reg_str2val("a0", &reg_success);
	if (reg_success && (reg_val == 0)) {
		printf("HIT GOOD TRAP at pc = %#x\n", cpu.pc);
	}else{
		printf("HIT BAD TRAP at pc = %#x\n", cpu.pc);
	}
	exit(0);
}