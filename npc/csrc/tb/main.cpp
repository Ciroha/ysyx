#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top.h"
#include "stdlib.h"
#include "stdint.h"
#include "Vysyx_23060332_top__Dpi.h"
#include "svdpi.h"

#include <getopt.h>
#include <memory.h>
#include "cpu.h"

uint32_t isa_reg_str2val(const char *s, bool *success);
extern "C" void init_disasm(const char *triple);

static Vysyx_23060332_top dut;

uint32_t* init_monitor(int argc, char *argv[]);
void sdb_mainloop();
void init_wave();
void open_wave();
void close_wave();

int main(int argc, char *argv[]){
	init_monitor(argc, argv);
	init_disasm("riscv32");
	Log("Test0");
	init_wave();
	Log("Test1");
	open_wave();
	reset(5);
	Log("Test2");
	sdb_mainloop();
	Log("Test3");
	close_wave();
}