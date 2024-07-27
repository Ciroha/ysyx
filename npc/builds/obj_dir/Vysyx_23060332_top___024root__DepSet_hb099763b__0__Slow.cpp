// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060332_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060332_top___024root.h"

VL_ATTR_COLD void Vysyx_23060332_top___024root___eval_static(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060332_top___024root___eval_initial(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr1 
        = vlSelf->ysyx_23060332_top__DOT__raddr1;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr2 
        = vlSelf->ysyx_23060332_top__DOT__raddr2;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_23060332_top___024root___eval_final(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060332_top___024root___eval_triggers__stl(Vysyx_23060332_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__stl(Vysyx_23060332_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___eval_stl(Vysyx_23060332_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060332_top___024root___eval_settle(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060332_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060332_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060332_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__stl(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ysyx_23060332_top.raddr1)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] ysyx_23060332_top.raddr2)\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__npc_trap_TOP();

VL_ATTR_COLD void Vysyx_23060332_top___024root___stl_sequent__TOP__0(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_23060332_top__DOT__inst = 0U;
    } else {
        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read__0__Vfuncout);
        vlSelf->ysyx_23060332_top__DOT__inst = vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read__0__Vfuncout;
    }
    if ((0x100073U == vlSelf->ysyx_23060332_top__DOT__inst)) {
        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__npc_trap_TOP();
    }
    vlSelf->ysyx_23060332_top__DOT__mem_wmask = 0U;
    vlSelf->ysyx_23060332_top__DOT__mem_wen = 0U;
    vlSelf->ysyx_23060332_top__DOT__mem_ren = 0U;
    if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                  >> 6U)))) {
        if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                if ((2U == (7U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wmask = 0xfU;
                                    vlSelf->ysyx_23060332_top__DOT__mem_wen = 1U;
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wmask = 3U;
                                    vlSelf->ysyx_23060332_top__DOT__mem_wen = 1U;
                                } else if ((0U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wmask = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__mem_wen = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                vlSelf->ysyx_23060332_top__DOT__mem_ren = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_h810d5fba__0 
        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x14U));
}

void Vysyx_23060332_top___024root___act_sequent__TOP__0(Vysyx_23060332_top___024root* vlSelf);
void Vysyx_23060332_top___024root___act_sequent__TOP__1(Vysyx_23060332_top___024root* vlSelf);
void Vysyx_23060332_top___024root___act_sequent__TOP__2(Vysyx_23060332_top___024root* vlSelf);
void Vysyx_23060332_top___024root___act_comb__TOP__0(Vysyx_23060332_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060332_top___024root___eval_stl(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_stl\n"); );
    // Body
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vysyx_23060332_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        Vysyx_23060332_top___024root___act_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060332_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        Vysyx_23060332_top___024root___act_sequent__TOP__2(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
         | vlSelf->__VstlTriggered.at(2U))) {
        Vysyx_23060332_top___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__ico(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__act(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ysyx_23060332_top.raddr1)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] ysyx_23060332_top.raddr2)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060332_top___024root___dump_triggers__nba(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ysyx_23060332_top.raddr1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] ysyx_23060332_top.raddr2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060332_top___024root___ctor_var_reset(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->pc = 0;
    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0;
    vlSelf->ysyx_23060332_top__DOT__jump_en = 0;
    vlSelf->ysyx_23060332_top__DOT__inst_addr = 0;
    vlSelf->ysyx_23060332_top__DOT__reg_rdata1 = 0;
    vlSelf->ysyx_23060332_top__DOT__reg_rdata2 = 0;
    vlSelf->ysyx_23060332_top__DOT__inst = 0;
    vlSelf->ysyx_23060332_top__DOT__op1 = 0;
    vlSelf->ysyx_23060332_top__DOT__op2 = 0;
    vlSelf->ysyx_23060332_top__DOT__op1_jump = 0;
    vlSelf->ysyx_23060332_top__DOT__op2_jump = 0;
    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 0;
    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr = 0;
    vlSelf->ysyx_23060332_top__DOT__raddr1 = 0;
    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0;
    vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata = 0;
    vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 0;
    vlSelf->ysyx_23060332_top__DOT__mem_wen = 0;
    vlSelf->ysyx_23060332_top__DOT__mem_waddr = 0;
    vlSelf->ysyx_23060332_top__DOT__mem_wdata = 0;
    vlSelf->ysyx_23060332_top__DOT__mem_wmask = 0;
    vlSelf->ysyx_23060332_top__DOT__mem_raddr = 0;
    vlSelf->ysyx_23060332_top__DOT__mem_rdata = 0;
    vlSelf->ysyx_23060332_top__DOT__mem_ren = 0;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_h810d5fba__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[__Vi0] = 0;
    }
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i = 0;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 = 0;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 = 0;
    vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__38__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__39__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr1 = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060332_top__DOT__raddr2 = 0;
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
