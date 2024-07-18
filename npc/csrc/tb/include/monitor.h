#ifndef __MONITOR_H__
#define __MONITOR_H__

#include "stdint.h"
#include "stdlib.h"
#include "getopt.h"
#include "stdio.h"
#include "string.h"
#include "assert.h"

uint32_t *guest_to_host(uint32_t *memory, uint32_t addr);
static int parse_args(int argc, char *argv[]);
static size_t load_img(uint32_t *memory);
uint32_t *init_mem(size_t size);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);

#endif