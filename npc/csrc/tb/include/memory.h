#ifndef __MONITOR_H__
#define __MONITOR_H__

#include "stdint.h"
#include "stdlib.h"
#include "getopt.h"
#include "stdio.h"
#include "string.h"
#include "assert.h"

uint8_t* guest_to_host(uint32_t paddr);
uint32_t host_to_guest(uint8_t *haddr);
void init_mem(size_t size);
extern "C" int pmem_read(int raddr);

#endif