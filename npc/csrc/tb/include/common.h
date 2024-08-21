#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

#include <macro.h>

#include <assert.h>
#include <stdlib.h>
#include <debug.h>
#include <../../include/generated/autoconf.h>

#define word_t uint32_t
#define vaddr_t uint32_t

#define RESET_VECTOR 0x80000000

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

extern CPU_state sim_cpu;

#endif