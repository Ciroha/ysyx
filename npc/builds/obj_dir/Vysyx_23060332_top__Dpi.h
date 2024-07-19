// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_23060332_TOP__DPI_H_
#define VERILATED_VYSYX_23060332_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_idu.v:32:30
    extern void npc_trap();
    // DPI import at /home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_reg.v:25:30
    extern void reg_read(int regs_i);

#ifdef __cplusplus
}
#endif

#endif  // guard
