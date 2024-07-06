// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060332_top.h for the primary calling header

#include "verilated.h"

#include "Vysyx_23060332_top___024root.h"

VL_INLINE_OPT void Vysyx_23060332_top___024root___ico_sequent__TOP__0(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_hc926e799__0 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
    if (vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_hc926e799__0) {
        vlSelf->ysyx_23060332_top__DOT__wen = 1U;
        vlSelf->ysyx_23060332_top__DOT__rs1 = (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU));
        vlSelf->ysyx_23060332_top__DOT__imm = (vlSelf->inst 
                                               >> 0x14U);
        vlSelf->ysyx_23060332_top__DOT__wdata = (((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_23060332_top__DOT__imm) 
                                                                  >> 0xbU)))) 
                                                   << 0xcU) 
                                                  | (IData)(vlSelf->ysyx_23060332_top__DOT__imm)) 
                                                 + 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_23060332_top__DOT__rs1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                                                  [vlSelf->ysyx_23060332_top__DOT__rs1]));
    } else {
        vlSelf->ysyx_23060332_top__DOT__wen = 0U;
        vlSelf->ysyx_23060332_top__DOT__rs1 = 0U;
        vlSelf->ysyx_23060332_top__DOT__imm = 0U;
        vlSelf->ysyx_23060332_top__DOT__wdata = 0U;
    }
}

void Vysyx_23060332_top___024root___eval_ico(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060332_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_23060332_top___024root___eval_act(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_23060332_top___024root___nba_sequent__TOP__0(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v0;
    __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32;
    __Vdlyvdim0__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32;
    __Vdlyvval__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32;
    __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i = 0x20U;
        vlSelf->pc = 0x80000000U;
        __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v0 = 1U;
    } else {
        vlSelf->pc = ((IData)(4U) + vlSelf->pc);
        if (vlSelf->ysyx_23060332_top__DOT__wen) {
            __Vdlyvval__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 
                = vlSelf->ysyx_23060332_top__DOT__wdata;
            __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 = 1U;
            __Vdlyvdim0__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 
                = ((IData)(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_hc926e799__0)
                    ? (0x1fU & (vlSelf->inst >> 7U))
                    : 0U);
        }
    }
    if (__Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v0) {
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[1U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[2U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[3U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[4U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[5U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[6U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[7U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[8U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[9U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0xaU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0xbU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0xcU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0xdU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0xeU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0xfU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x10U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x11U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x12U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x13U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x14U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x15U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x16U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x17U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x18U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x19U] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32) {
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[__Vdlyvdim0__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32] 
            = __Vdlyvval__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32;
    }
}

VL_INLINE_OPT void Vysyx_23060332_top___024root___nba_sequent__TOP__1(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_23060332_top__DOT__wdata = ((IData)(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_hc926e799__0)
                                              ? (((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_23060332_top__DOT__imm) 
                                                                  >> 0xbU)))) 
                                                   << 0xcU) 
                                                  | (IData)(vlSelf->ysyx_23060332_top__DOT__imm)) 
                                                 + 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_23060332_top__DOT__rs1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                                                  [vlSelf->ysyx_23060332_top__DOT__rs1]))
                                              : 0U);
}

void Vysyx_23060332_top___024root___eval_nba(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060332_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_23060332_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_23060332_top___024root___eval_triggers__ico(Vysyx_23060332_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__ico(Vysyx_23060332_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060332_top___024root___eval_triggers__act(Vysyx_23060332_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__act(Vysyx_23060332_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__nba(Vysyx_23060332_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060332_top___024root___eval(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060332_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060332_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060332_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060332_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060332_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060332_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060332_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060332_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060332_top___024root___eval_debug_assertions(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
