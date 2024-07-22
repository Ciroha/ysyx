#include <common.h>
#include <cpu.h>
#include <memory.h>

#define MAX_INST_TO_PRINT 10
#define MAX_IRINGBUF 16
#define FMT_WORD "0x%08" "x"
#define ANSI_FG_RED "\33[1;31m"
#define ANSI_NONE "\33[0m"

Vysyx_23060332_top cpu;
static bool g_print_step = false;
typedef struct{
  uint32_t pc;
  uint32_t inst;
}Iring;

Iring iringbuf[MAX_IRINGBUF];
int ringcount = 0;
bool full = false;

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

// void display_ringbuf() {
//   if (!full && !ringcount) return;
//   int end = ringcount;
//   int i = full ? ringcount : 0;

//   void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
//   char buf[2048];
//   char *p;
//   do {
//     p = buf;
//     p += sprintf(buf, "%s" FMT_WORD ": %08x ", (i+1)%MAX_IRINGBUF==end?" --> ":"     ", iringbuf[i].pc, iringbuf[i].inst);
//     disassemble(p, buf+sizeof(buf)-p, iringbuf[i].pc, (uint8_t *)&iringbuf[i].inst, 4);

//     if ((i+1)%MAX_IRINGBUF==end) printf(ANSI_FG_RED);
//     puts(buf);
//   } while ((i = (i+1)%MAX_IRINGBUF) != end);
//   puts(ANSI_NONE);
// }

static void execute(uint32_t n) {
    for (; n > 0; n --) {
        single_cycle();
        // char buf[128];
        // char *p = buf;
        // p += sprintf(buf, "%s" "0x%08" "x" ": %08x ", "     ", cpu.pc, cpu.inst);
        // int ilen = 4;
        // uint8_t *inst = (uint8_t *)&cpu.inst;
        // for (int i = ilen - 1; i >= 0; i--) {
        //     p += snprintf(p, 4, "%02x", inst[i]);
        // }
        // int ilen_max = 4;
        // int space_len = ilen_max - ilen;
        // if (space_len < 0) space_len = 0;
        // space_len = space_len * 3 + 1;
        // memset(p, ' ', space_len);
        // p += space_len;
        // disassemble(p, buf + sizeof(buf) - p, cpu.pc, (uint8_t *)&cpu.inst, 4);
        // if (g_print_step)
        //     puts(buf);
        // wave_dump();
        // iringbuf[ringcount].pc = cpu.pc;
        // iringbuf[ringcount].inst = cpu.inst;
        // ringcount = (ringcount + 1) % MAX_IRINGBUF;
        // full = full || ringcount == 0;
    }
    // display_ringbuf();
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