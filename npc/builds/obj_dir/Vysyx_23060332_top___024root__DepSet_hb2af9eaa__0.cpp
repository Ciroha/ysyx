// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060332_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060332_top__Syms.h"
#include "Vysyx_23060332_top___024root.h"

extern "C" int pmem_read(int raddr);

VL_INLINE_OPT void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void npc_trap();

VL_INLINE_OPT void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__npc_trap_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__npc_trap_TOP\n"); );
    // Body
    npc_trap();
}

extern "C" void halt(int code);

VL_INLINE_OPT void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__halt_TOP(IData/*31:0*/ code) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__halt_TOP\n"); );
    // Body
    int code__Vcvt;
    for (size_t code__Vidx = 0; code__Vidx < 1; ++code__Vidx) code__Vcvt = code;
    halt(code__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__ico(Vysyx_23060332_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060332_top___024root___eval_triggers__ico(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060332_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__act(Vysyx_23060332_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060332_top___024root___eval_triggers__act(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->ysyx_23060332_top__DOT__raddr1) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr1));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->ysyx_23060332_top__DOT__raddr2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr2));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr1 
        = vlSelf->ysyx_23060332_top__DOT__raddr1;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr2 
        = vlSelf->ysyx_23060332_top__DOT__raddr2;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060332_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
