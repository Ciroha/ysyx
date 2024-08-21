#include <common.h>
#include <cpu.h>
#include <memory.h>
#include <ftrace.h>

#define MAX_INST_TO_PRINT 10
#define MAX_IRINGBUF 16
#define FMT_WORD "0x%08" "x"

Vysyx_23060332_top cpu;
static bool g_print_step = false;
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
#ifdef CONFIG_FTRACE
  if(type == JAL) ftrace_write(CALL, now_fname, dnpc, pc);
  else if(type == JALR){
    if(rs1 == 1 && imm == 0 && rd == 0)
      ftrace_write(RET, prev_fname, dnpc, pc);
    else
      ftrace_write(CALL, now_fname, dnpc, pc);
  }
#endif
}

void trace_and_difftest() {
    //difftest
#ifdef CONFIG_DIFFTEST
    difftest_step();
#endif

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

extern "C" void invalid_inst() {
    uint32_t temp[2];
    vaddr_t pc = cpu.pc;
    temp[0] = pmem_read(pc);
    temp[1] = pmem_read(pc+4);

    uint8_t *p = (uint8_t *)temp;
    printf("invalid opcode(PC = " FMT_WORD "):\n"
        "\t%02x %02x %02x %02x %02x %02x %02x %02x ...\n"
        "\t%08x %08x...\n",
        cpu.pc, p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7], temp[0], temp[1]);

    printf("There are two cases which will trigger this unexpected exception:\n"
        "1. The instruction at PC = " FMT_WORD " is not implemented.\n"
        "2. Something is implemented incorrectly.\n", cpu.pc);
    printf("Find this PC(" FMT_WORD ") in the disassembling result to distinguish which case it is.\n\n", cpu.pc);
    printf(ANSI_FMT("If it is the first case, see\n%s\nfor more details.\n\n"
        "If it is the second case, remember:\n"
        "* The machine is always right!\n"
        "* Every line of untested code is always wrong!\n\n", ANSI_FG_RED), "RISC_V MANNUL");

    exit(1);
}

extern "C" void npc_trap(){
	bool reg_success = false;
    wave_dump();
	close_wave();
    reg_read();
	uint32_t reg_val = isa_reg_str2val("a0", &reg_success);
	if (reg_success && (reg_val == 0)) {
		Log(ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) " at pc = %#x\n", cpu.pc);
	}else{
        isa_reg_display();
		Log(ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED) " at pc = %#x\n", cpu.pc);
	}
	exit(0);
}