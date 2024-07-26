// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060332_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060332_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060332_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060332_top__Syms;

class Vysyx_23060332_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ ysyx_23060332_top__DOT__jump_en;
    CData/*0:0*/ ysyx_23060332_top__DOT__id_ex_reg_wen;
    CData/*4:0*/ ysyx_23060332_top__DOT__id_ex_waddr;
    CData/*4:0*/ ysyx_23060332_top__DOT__raddr1;
    CData/*4:0*/ ysyx_23060332_top__DOT__raddr2;
    CData/*0:0*/ ysyx_23060332_top__DOT__ex_reg_reg_wen;
    CData/*0:0*/ ysyx_23060332_top__DOT__mem_wen;
    CData/*7:0*/ ysyx_23060332_top__DOT__mem_wmask;
    CData/*0:0*/ ysyx_23060332_top__DOT__mem_ren;
    CData/*4:0*/ __Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr1;
    CData/*4:0*/ __Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr2;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_23060332_top__DOT__jump_addr;
    IData/*31:0*/ ysyx_23060332_top__DOT__inst_addr;
    IData/*31:0*/ ysyx_23060332_top__DOT__reg_rdata1;
    IData/*31:0*/ ysyx_23060332_top__DOT__reg_rdata2;
    IData/*31:0*/ ysyx_23060332_top__DOT__inst;
    IData/*31:0*/ ysyx_23060332_top__DOT__op1;
    IData/*31:0*/ ysyx_23060332_top__DOT__op2;
    IData/*31:0*/ ysyx_23060332_top__DOT__op1_jump;
    IData/*31:0*/ ysyx_23060332_top__DOT__op2_jump;
    IData/*31:0*/ ysyx_23060332_top__DOT__ex_reg_wdata;
    IData/*31:0*/ ysyx_23060332_top__DOT__mem_waddr;
    IData/*31:0*/ ysyx_23060332_top__DOT__mem_wdata;
    IData/*31:0*/ ysyx_23060332_top__DOT__mem_raddr;
    IData/*31:0*/ ysyx_23060332_top__DOT__mem_rdata;
    IData/*31:0*/ ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i;
    IData/*31:0*/ __Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__66__Vfuncout;
    IData/*31:0*/ __Vtrigrprev__TOP__ysyx_23060332_top__DOT__mem_rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs;
    VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    VlTriggerVec<4> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060332_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060332_top___024root(Vysyx_23060332_top__Syms* symsp, const char* v__name);
    ~Vysyx_23060332_top___024root();
    VL_UNCOPYABLE(Vysyx_23060332_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
