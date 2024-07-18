#include <stdint.h>
#include <stdlib.h>

uint32_t *guest_to_host(uint32_t addr);
uint32_t *init_mem(size_t size);
uint32_t pmem_read(uint32_t vaddr);