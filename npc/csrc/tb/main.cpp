#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top.h"
#include "stdlib.h"
#include "stdint.h"
#include "Vysyx_23060332_top__Dpi.h"
#include "svdpi.h"

#include <getopt.h>
#include </home/ciroha/ysyx-workbench/npc/csrc/tb/include/monitor.h>

extern "C" {
    static int parse_args(int argc, char *argv[]);
    static size_t load_img(uint32_t *memory);
}
uint32_t *init_mem(size_t size);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);
uint32_t *init_mem(size_t size);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);


static Vysyx_23060332_top dut;
VerilatedContext* contextp = NULL;                                                                                        
VerilatedVcdC* tfp = NULL;

void single_cycle(){
	dut.clk=0;dut.eval();		
	tfp->dump(contextp -> time());
	contextp -> timeInc(1);
	dut.clk=1;dut.eval();		
	tfp->dump(contextp -> time());
	contextp -> timeInc(1);
}

static void reset(int n) {
	dut.rst = 1;
 	while (n -- > 0) single_cycle();
	dut.rst = 0;
}

extern "C" void npc_trap(){
	tfp->dump(contextp -> time());
	contextp -> timeInc(1);
	tfp -> close();
	printf("trap in %#x",dut.pc);
	exit(0);
}

int main(int argc, char *argv[]){
	printf("Parsing arguments!\n");
	parse_args(argc, argv);
	// printf("image file is %s\n", img_file);
	uint32_t *memory = NULL;
	memory = init_mem(50);
	size_t size = load_img(memory);

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
		dut.inst = pmem_read(memory, dut.pc);
		dut.clk=1;dut.eval();		
		tfp->dump(contextp -> time());
		contextp -> timeInc(1);
	}
	tfp -> close();
}