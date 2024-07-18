#ifndef __MEMORY_H__
#define __MEMORY_H__
#include </home/ciroha/ysyx-workbench/npc/csrc/tb/include/common.h>

uint32_t *guest_to_host(uint32_t addr);
uint32_t *init_mem(size_t size);
uint32_t pmem_read(uint32_t vaddr);

#endif