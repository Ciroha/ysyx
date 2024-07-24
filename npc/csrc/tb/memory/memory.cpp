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
	int temp = raddr & ~0x3u;
	int ret = host_read(guest_to_host(temp), 4);
	return ret;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  	// 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  	// `wmask`中每比特表示`wdata`中1个字节的掩码,
  	// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
	int temp = waddr & ~0x3u;
	for (int i = 0; i < 4; i++) {
		if (wmask & (1 << i)) {
			host_write(guest_to_host(temp), 1, wdata);
		}
		temp++;
	}
}
