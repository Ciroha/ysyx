#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top.h"
#include "stdlib.h"
#include "stdint.h"
#include "Vysyx_23060332_top__Dpi.h"
#include "svdpi.h"

#include <getopt.h>

uint32_t *guest_to_host(uint32_t *memory, uint32_t addr){return memory + (addr-0x80000000)/4;}

static Vysyx_23060332_top dut;
VerilatedContext* contextp = NULL;                                                                                        
VerilatedVcdC* tfp = NULL;
static char *img_file = NULL;
static uint32_t *pmem = NULL;

static uint32_t img[] = {
	// 0b00000000010100000000000010010011, //addi x1 x0 5 0x80000000
	// 0b00000000000100000000000100010011, //addi x2 x0 1 0x80000004
	// 0b00000000001000000000000100010011, //addi x2 x0 2 0x80000008
	// 0b00000000010100001000000100010011, //addi x2 x1 5 0x8000000c
	// 0b00000000000000000001000110010111,	//auipc x3, 1  0x80000010
	// 0b10000000000000000000001000110111,	//lui x4, 0x80000
	// 0b00000000000000100000001001100111, //jalr x4, 0(x4)
	// 0b00000000000100000000000001110011,	//ebreak
	0x00000413,
	0x00009117,
	0xffc10113,
	0x00c000ef,
	0x00000513,
	0x00008067,
	0xff410113,
	0x00000517,
	0x01450513,
	0x00112423,
	0xfe9ff0ef,
	0x0000006f,
};



static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"help"     , no_argument      , NULL, 'h'},
		{0          , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-h", table, NULL)) != -1) {
		switch (o) {
			case 1: printf("case 1"); img_file = optarg; return 0;
			default:
				printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                printf("\t-b,--batch              run with batch mode\n");
                printf("\t-l,--log=FILE           output log to FILE\n");
                printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
                printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
                printf("\t-f,--ftrace=FILE        parse the elf file\n");
                printf("\n");
                exit(0);
		}
	}
	return 0;
}

static size_t load_img(){
	printf("image file is %s\n", img_file);
	if (img_file == NULL) {
		printf("No image is given. Use the default build-in image.\n");
    	return 4096; // built-in image size
	}

	FILE *fp = fopen(img_file, "rb");
	assert(fp);

	fseek(fp, 0, SEEK_END);
	size_t size = ftell(fp);

	printf("The image is %s, size = %ld\n", img_file, size);

	fseek(fp, 0 , SEEK_SET);
	int ret = fread(guest_to_host(NULL, 0x80000000), size, 1, fp);
	assert(ret == 1);

	fclose(fp);
	return size;
}

uint32_t *init_mem(size_t size) {
	uint32_t* memory = (uint32_t*)malloc(size * sizeof(uint32_t));
	memcpy(memory,img,sizeof(img));
	if(memory == NULL) {exit(0);}
	return memory;
}

// uint32_t *guest_to_host(uint32_t *memory, uint32_t addr){return memory + (addr-0x80000000)/4;}
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr){
	uint32_t *paddr = guest_to_host(memory, vaddr);
	return *paddr;
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

int main(int argc, char *argv[]){
	printf("Parsing arguments!\n");
	parse_args(argc, argv);
	printf("image file is %s\n", img_file);
	uint32_t *memory = NULL;
	size_t size = load_img();
	memory = init_mem(size);

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