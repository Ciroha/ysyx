#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top.h"
#include "stdlib.h"
#include "stdint.h"
#include "Vysyx_23060332_top__Dpi.h"
#include "svdpi.h"

#include <getopt.h>
#include </home/ciroha/ysyx-workbench/npc/csrc/tb/include/memory.h>

uint32_t isa_reg_str2val(const char *s, bool *success);

static Vysyx_23060332_top dut;
VerilatedContext* contextp = NULL;                                                                                        
VerilatedVcdC* tfp = NULL;

uint32_t* init_monitor(int argc, char *argv[]);

void single_cycle(){
	dut.clk=0;dut.eval();		
	tfp->dump(contextp -> time());
	contextp -> timeInc(1);
	dut.clk=1;dut.inst = pmem_read(dut.pc);dut.eval();
	tfp->dump(contextp -> time());
	contextp -> timeInc(1);
}

static void reset(int n) {
	dut.rst = 1;
 	while (n -- > 0) single_cycle();
	dut.rst = 0;
}

extern "C" void npc_trap(){
	bool reg_success = false;
	tfp->dump(contextp -> time());
	contextp -> timeInc(1);
	tfp -> close();
	// printf("trap in %#x",dut.pc);
	uint32_t reg_val = isa_reg_str2val("a0", &reg_success);
	if (reg_success && (reg_val == 0)) {
		printf("HIT GOOD TRAP at pc = %#x\n", dut.pc);
	}else{
		printf("HIT BAD TRAP at pc = %#x\n", dut.pc);
	}
	exit(0);
}

int main(int argc, char *argv[]){
	init_monitor(argc, argv);

	Verilated::traceEverOn(true);
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	dut.trace(tfp, 5);
	tfp->open("builds/waveform.vcd");
	
	reset(10);

	for (int i = 0; i < 40; i++){
		dut.clk=0;dut.eval();
		tfp->dump(contextp -> time());
		contextp -> timeInc(1);
		dut.inst = pmem_read(dut.pc);
		dut.clk=1;dut.eval();
		tfp->dump(contextp -> time());
		contextp -> timeInc(1);
	}
	tfp -> close();
}