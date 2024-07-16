#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top.h"
#include "stdlib.h"
#include "stdint.h"
#include "Vysyx_23060332_top__Dpi.h"
#include "svdpi.h"

static Vysyx_23060332_top dut;
VerilatedContext* contextp = NULL;                                                                                        
VerilatedVcdC* tfp = NULL;

static const uint32_t img[] = {
	0b00000000010100000000000010010011, //addi x1 x0 5 0x80000000
	0b00000000000100000000000100010011, //addi x2 x0 1 0x80000004
	0b00000000001000000000000100010011, //addi x2 x0 2 0x80000008
	0b00000000010100001000000100010011, //addi x2 x1 5 0x8000000c
	0b00000000000100000000000001110011,
};

uint32_t *init_mem(size_t size) {
	uint32_t* memory = (uint32_t*)malloc(size * sizeof(uint32_t));
	memcpy(memory,img,sizeof(img));
	if(memory == NULL) {exit(0);}
	return memory;
}

uint32_t guest_to_host(uint32_t addr){return addr-0x80000000;}
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr){
	uint32_t paddr = guest_to_host(vaddr);
	return memory[paddr/4];
}

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

int main(){
	uint32_t *memory;
	memory = init_mem(10);

	Verilated::traceEverOn(true);
	contextp = new VerilatedContext;	
	tfp = new VerilatedVcdC;
	dut.trace(tfp, 5);
	tfp->open("builds/waveform.vcd");
	
	reset(10);
	for (int i = 0; i < 10; i++){
		dut.clk=0;dut.eval();		
		tfp->dump(contextp -> time());
		contextp -> timeInc(1);
		dut.inst = pmem_read(memory,dut.pc);
		dut.clk=1;dut.eval();		
		tfp->dump(contextp -> time());
		contextp -> timeInc(1);
	}
	tfp -> close();
}