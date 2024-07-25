#include <common.h>
#include <cpu.h>
#include <memory.h>
#include <ftrace.h>

#define MAX_INST_TO_PRINT 10
#define MAX_IRINGBUF 16
#define FMT_WORD "0x%08" "x"

Vysyx_23060332_top cpu;
static bool g_print_step = false;
static bool npc_status = true;
static uint8_t opcode;
uint32_t pc, snpc, dnpc, inst_temp;
CPU_state sim_cpu;


void wave_dump();
void close_wave();
uint32_t isa_reg_str2val(const char *s, bool *success);
void isa_reg_display();
void reg_read();
void open_wave();
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void difftest_step();
int status_check();

void single_cycle() {
    cpu.clk = 0; cpu.eval(); wave_dump();
    cpu.clk = 1; cpu.eval(); wave_dump();
    // cpu.inst = pmem_read(cpu.pc);
}

void reset(int n) {
    cpu.rst = 1;
    while (n-- > 0) single_cycle();
    cpu.rst = 0;
}

void ftrace(int type, uint32_t pc, uint32_t dnpc, uint32_t inst){
  uint32_t i = inst;
  int rs1 = BITS(i, 19, 15);
  int rd = BITS(i, 11, 7);
  int imm = BITS(i, 31, 20);
  char *prev_fname = find_func(pc);
  char *now_fname = find_func(dnpc); 
  if(type == JAL) ftrace_write(CALL, now_fname, dnpc, pc);
  else if(type == JALR){
    if(rs1 == 1 && imm == 0 && rd == 0)
      ftrace_write(RET, prev_fname, dnpc, pc);
    else
      ftrace_write(CALL, now_fname, dnpc, pc);
  }
}

void trace_and_difftest() {
    //difftest
    difftest_step();

    //ftrace
    opcode = BITS(inst_temp, 6, 0);
    if (opcode == 0b1101111)
        ftrace(JAL, pc, dnpc, inst_temp);
    else if (opcode == 0b1100111)
        ftrace(JALR, pc, dnpc, inst_temp);
}

void disassemble_display() {
    char buf[128] = {0};
    char *p = buf;
    p += snprintf(p, sizeof(buf), FMT_WORD ":", pc);
    int ilen = 4;
    uint8_t *inst = (uint8_t *)&inst_temp;
    for (int i = ilen - 1; i >= 0; i--) {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
        
    disassemble(p, buf + sizeof(buf) - p, pc, (uint8_t *)&inst_temp, 4);
    if (g_print_step)
        puts(buf);
}

static void execute(uint32_t n) {
    for (; n > 0; n --) {
        status_check();
        pc = cpu.pc;
        sim_cpu.pc = cpu.pc;
        snpc = cpu.pc + 4;
        // inst_temp = cpu.inst;
        inst_temp = pmem_read(cpu.pc);
        disassemble_display();

        single_cycle();

        dnpc = cpu.pc;
        trace_and_difftest();
        reg_read();
    }
}


void cpu_exec(uint64_t n) {
    g_print_step = (n < MAX_INST_TO_PRINT);
    execute(n);
    // close_wave();
}

int status_check() {
    if (npc_status) return 0;
    else return 1;
}

extern "C" void halt_return() {
    npc_status = false;
    return;
}

extern "C" void npc_trap(){
	bool reg_success = false;
    wave_dump();
	close_wave();
    reg_read();
    isa_reg_display();
	uint32_t reg_val = isa_reg_str2val("a0", &reg_success);
	if (reg_success && (reg_val == 0)) {
		Log(ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) " at pc = %#x\n", cpu.pc);
	}else{
		Log(ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED) " at pc = %#x\n", cpu.pc);
	}
	exit(0);
}