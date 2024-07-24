#include "memory.h"
#include "common.h"
#include "host.h"

static uint32_t *memory = NULL;

static uint32_t img[] = {
	0b00000000010100000000000010010011, //addi x1 x0 5 0x80000000
	0b00000000000100000000000100010011, //addi x2 x0 1 0x80000004
	0b00000000001000000000000100010011, //addi x2 x0 2 0x80000008
	0b00000000010100001000000100010011, //addi x2 x1 5 0x8000000c
	0b00000000000100000000000001110011,	//ebreak
};

static uint8_t pmem[MSIZE] PG_ALIGN = {};

// uint32_t *guest_to_host(uint32_t addr){return memory + (addr-0x80000000)/4;}
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MBASE; }

void init_mem(size_t size) {
	memory = (uint32_t*)malloc(size * sizeof(uint32_t));
	memcpy(memory,img,sizeof(img));
	if(memory == NULL) {exit(0);}
}

extern "C" int pmem_read(int raddr){
	int ret = host_read(guest_to_host(raddr), 4);
	return ret;
}
