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
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_23060332_top__DOT__jump_addr;
    IData/*31:0*/ ysyx_23060332_top__DOT__inst_addr;
    IData/*31:0*/ ysyx_23060332_top__DOT__rdata1;
    IData/*31:0*/ ysyx_23060332_top__DOT__op1;
    IData/*31:0*/ ysyx_23060332_top__DOT__op2;
    IData/*31:0*/ ysyx_23060332_top__DOT__op1_jump;
    IData/*31:0*/ ysyx_23060332_top__DOT__op2_jump;
    IData/*31:0*/ ysyx_23060332_top__DOT__ex_reg_wdata;
    IData/*31:0*/ ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
