#ifndef MONITOR_H_
#define MONITOR_H

#include "stdint.h"
#include "stdlib.h"
#include "getopt.h"
#include "stdio.h"
#include "string.h"
#include "assert.h"

static uint32_t img[] = {
	0b00000000010100000000000010010011, //addi x1 x0 5 0x80000000
	0b00000000000100000000000100010011, //addi x2 x0 1 0x80000004
	0b00000000001000000000000100010011, //addi x2 x0 2 0x80000008
	0b00000000010100001000000100010011, //addi x2 x1 5 0x8000000c
	0b00000000000100000000000001110011,	//ebreak
};

static int parse_args(int argc, char *argv[]);
static size_t load_img(uint32_t *memory);
uint32_t *init_mem(size_t size);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);
uint32_t *init_mem(size_t size);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);

#endif