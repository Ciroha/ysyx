// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060332_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060332_top___024root.h"

void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__npc_trap_TOP();
void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();

VL_INLINE_OPT void Vysyx_23060332_top___024root___ico_sequent__TOP__0(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___ico_sequent__TOP__0\n"); );
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
    vlSelf->ysyx_23060332_top__DOT__mem_wdata = 0U;
    vlSelf->ysyx_23060332_top__DOT__mem_ren = 0U;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_h810d5fba__0 
        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x14U));
    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 0U;
    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr = 0U;
    vlSelf->ysyx_23060332_top__DOT__raddr1 = 0U;
    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
    vlSelf->ysyx_23060332_top__DOT__op1 = 0U;
    vlSelf->ysyx_23060332_top__DOT__op2 = 0U;
    vlSelf->ysyx_23060332_top__DOT__op1_jump = 0U;
    vlSelf->ysyx_23060332_top__DOT__op2_jump = 0U;
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
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wmask = 3U;
                                    vlSelf->ysyx_23060332_top__DOT__mem_wen = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                } else if ((0U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wmask = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__mem_wen = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
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
    if ((0x40U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                            vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                                = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 7U));
                            vlSelf->ysyx_23060332_top__DOT__op1 
                                = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                            vlSelf->ysyx_23060332_top__DOT__op2 = 4U;
                            vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                            vlSelf->ysyx_23060332_top__DOT__op2_jump 
                                = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->ysyx_23060332_top__DOT__inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                          >> 0x14U)))));
                        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                        }
                    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                        vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 7U));
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                        vlSelf->ysyx_23060332_top__DOT__op2 = 4U;
                        vlSelf->ysyx_23060332_top__DOT__op1_jump 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2_jump 
                            = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x14U));
                    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                        vlSelf->ysyx_23060332_top__DOT__op1_jump 
                            = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                        vlSelf->ysyx_23060332_top__DOT__op2_jump 
                            = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                        >> 7U))))));
                    } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    } else {
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                        vlSelf->ysyx_23060332_top__DOT__op1_jump 
                            = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                        vlSelf->ysyx_23060332_top__DOT__op2_jump 
                            = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                        >> 7U))))));
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                        vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 7U));
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = (0xfffff000U & vlSelf->ysyx_23060332_top__DOT__inst);
                        vlSelf->ysyx_23060332_top__DOT__op2 = 0U;
                    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0x14U));
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((((2U == (7U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xcU))) | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) 
                     | (0U == (7U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                     >> 0xcU))))) {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 0U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr = 0U;
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0x14U));
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 7U))));
                } else {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (0xfffff000U & vlSelf->ysyx_23060332_top__DOT__inst);
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                        vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 7U));
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2 
                            = vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_h810d5fba__0;
                    } else {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_h810d5fba__0;
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                } else {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                }
            } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                } else {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                }
            } else {
                vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                    = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                >> 7U));
                vlSelf->ysyx_23060332_top__DOT__raddr1 
                    = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                >> 0xfU));
                vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                vlSelf->ysyx_23060332_top__DOT__op1 
                    = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                vlSelf->ysyx_23060332_top__DOT__op2 
                    = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 0x14U));
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
    }
    vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen 
        = vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen;
    vlSelf->ysyx_23060332_top__DOT__mem_waddr = 0U;
    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
    vlSelf->ysyx_23060332_top__DOT__mem_raddr = 0U;
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
                                    vlSelf->ysyx_23060332_top__DOT__mem_waddr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1 
                                           + vlSelf->ysyx_23060332_top__DOT__op2);
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_waddr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1 
                                           + vlSelf->ysyx_23060332_top__DOT__op2);
                                } else if ((0U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_waddr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1 
                                           + vlSelf->ysyx_23060332_top__DOT__op2);
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
                                vlSelf->ysyx_23060332_top__DOT__mem_raddr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1 
                                       + vlSelf->ysyx_23060332_top__DOT__op2);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_23060332_top__DOT__mem_rdata = 0U;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 = 0U;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 = 0U;
    if ((0x40U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                       + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                            vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                            vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                = (0xfffffffeU & (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                                  + vlSelf->ysyx_23060332_top__DOT__op2_jump));
                        }
                    }
                } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                    if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                         >= vlSelf->ysyx_23060332_top__DOT__op2)) {
                                        vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                        vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                            = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                               + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                    } else {
                                        vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                        vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                    }
                                } else if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                            < vlSelf->ysyx_23060332_top__DOT__op2)) {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                           + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                } else {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                if (VL_GTES_III(32, vlSelf->ysyx_23060332_top__DOT__op1, vlSelf->ysyx_23060332_top__DOT__op2)) {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                           + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                } else {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                }
                            } else if (VL_LTS_III(32, vlSelf->ysyx_23060332_top__DOT__op1, vlSelf->ysyx_23060332_top__DOT__op2)) {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                       + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                            } else {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                            }
                        } else if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                             >> 0xdU)))) {
                            if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                     != vlSelf->ysyx_23060332_top__DOT__op2)) {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                           + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                } else {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                }
                            } else if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                        == vlSelf->ysyx_23060332_top__DOT__op2)) {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                       + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                            } else {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 3U)))) {
                if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                      >> 3U)))) {
            if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                    }
                }
            }
        }
    }
    if ((((0x80000000U <= vlSelf->ysyx_23060332_top__DOT__mem_raddr) 
          & (0x87ffffffU >= vlSelf->ysyx_23060332_top__DOT__mem_raddr)) 
         | ((0xa0000048U == vlSelf->ysyx_23060332_top__DOT__mem_raddr) 
            | (0xa000004cU == vlSelf->ysyx_23060332_top__DOT__mem_raddr)))) {
        if (vlSelf->ysyx_23060332_top__DOT__mem_ren) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(vlSelf->ysyx_23060332_top__DOT__mem_raddr, vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__34__Vfuncout);
            vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                = vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__34__Vfuncout;
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_23060332_top__DOT__mem_raddr), vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__35__Vfuncout);
            vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                = vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__35__Vfuncout;
            vlSelf->ysyx_23060332_top__DOT__mem_rdata 
                = ((2U & vlSelf->ysyx_23060332_top__DOT__mem_raddr)
                    ? ((1U & vlSelf->ysyx_23060332_top__DOT__mem_raddr)
                        ? ((vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                            << 8U) | (vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                                      >> 0x18U)) : 
                       ((vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                         << 0x10U) | (vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                                      >> 0x10U))) : 
                   ((1U & vlSelf->ysyx_23060332_top__DOT__mem_raddr)
                     ? ((vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                         << 0x18U) | (vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                                      >> 8U)) : vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1));
        }
    }
    vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata = 0U;
    if ((0x40U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1 
                                       + vlSelf->ysyx_23060332_top__DOT__op2);
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = (vlSelf->ysyx_23060332_top__DOT__op1 
                                   + vlSelf->ysyx_23060332_top__DOT__op2);
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 3U)))) {
                if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = (vlSelf->ysyx_23060332_top__DOT__op1 
                                   + vlSelf->ysyx_23060332_top__DOT__op2);
                        }
                    }
                } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                ? ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                           & vlSelf->ysyx_23060332_top__DOT__op2)
                                        : (vlSelf->ysyx_23060332_top__DOT__op1 
                                           | vlSelf->ysyx_23060332_top__DOT__op2))
                                    : ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? ((0x40000000U 
                                            & vlSelf->ysyx_23060332_top__DOT__inst)
                                            ? ((vlSelf->ysyx_23060332_top__DOT__op1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyx_23060332_top__DOT__op2)) 
                                               | ((- (IData)(
                                                             (vlSelf->ysyx_23060332_top__DOT__op1 
                                                              >> 0x1fU))) 
                                                  & (~ 
                                                     (0xffffffffU 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_23060332_top__DOT__op2)))))
                                            : (vlSelf->ysyx_23060332_top__DOT__op1 
                                               >> (0x1fU 
                                                   & vlSelf->ysyx_23060332_top__DOT__op2)))
                                        : (vlSelf->ysyx_23060332_top__DOT__op1 
                                           ^ vlSelf->ysyx_23060332_top__DOT__op2)))
                                : ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? ((vlSelf->ysyx_23060332_top__DOT__op1 
                                            < vlSelf->ysyx_23060332_top__DOT__op2)
                                            ? 1U : 0U)
                                        : (VL_LTS_III(32, vlSelf->ysyx_23060332_top__DOT__op1, vlSelf->ysyx_23060332_top__DOT__op2)
                                            ? 1U : 0U))
                                    : ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                           << (0x1fU 
                                               & vlSelf->ysyx_23060332_top__DOT__op2))
                                        : ((0x40000000U 
                                            & vlSelf->ysyx_23060332_top__DOT__inst)
                                            ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                               - vlSelf->ysyx_23060332_top__DOT__op2)
                                            : (vlSelf->ysyx_23060332_top__DOT__op1 
                                               + vlSelf->ysyx_23060332_top__DOT__op2)))));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                      >> 3U)))) {
            if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = (vlSelf->ysyx_23060332_top__DOT__op1 
                               + vlSelf->ysyx_23060332_top__DOT__op2);
                    }
                }
            } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1 
                                       & vlSelf->ysyx_23060332_top__DOT__op2);
                            }
                        } else {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? ((0x40000000U 
                                        & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? ((vlSelf->ysyx_23060332_top__DOT__op1 
                                            >> (0x1fU 
                                                & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   >> 0x14U))) 
                                           | ((- (IData)(
                                                         (vlSelf->ysyx_23060332_top__DOT__op1 
                                                          >> 0x1fU))) 
                                              & (~ 
                                                 (0xffffffffU 
                                                  >> 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0x14U))))))
                                        : (vlSelf->ysyx_23060332_top__DOT__op1 
                                           >> (0x1fU 
                                               & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                  >> 0x14U))))
                                    : (vlSelf->ysyx_23060332_top__DOT__op1 
                                       ^ vlSelf->ysyx_23060332_top__DOT__op2));
                        }
                    } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = ((vlSelf->ysyx_23060332_top__DOT__op1 
                                    < vlSelf->ysyx_23060332_top__DOT__op2)
                                    ? 1U : 0U);
                        }
                    } else {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                   << (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x14U)))
                                : (vlSelf->ysyx_23060332_top__DOT__op1 
                                   + vlSelf->ysyx_23060332_top__DOT__op2));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                      >> 0xdU)))) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? (0xffffU & vlSelf->ysyx_23060332_top__DOT__mem_rdata)
                                    : (0xffU & vlSelf->ysyx_23060332_top__DOT__mem_rdata));
                        }
                    } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                      >> 0xcU)))) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = vlSelf->ysyx_23060332_top__DOT__mem_rdata;
                        }
                    } else {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                ? (((- (IData)((1U 
                                                & (vlSelf->ysyx_23060332_top__DOT__mem_rdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->ysyx_23060332_top__DOT__mem_rdata))
                                : (((- (IData)((1U 
                                                & (vlSelf->ysyx_23060332_top__DOT__mem_rdata 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->ysyx_23060332_top__DOT__mem_rdata)));
                    }
                }
            }
        }
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

VL_INLINE_OPT void Vysyx_23060332_top___024root___act_sequent__TOP__0(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060332_top__DOT__reg_rdata1 = ((0U 
                                                   == (IData)(vlSelf->ysyx_23060332_top__DOT__raddr1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                                                  [vlSelf->ysyx_23060332_top__DOT__raddr1]);
}

VL_INLINE_OPT void Vysyx_23060332_top___024root___act_sequent__TOP__1(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_23060332_top__DOT__reg_rdata2 = ((0U 
                                                   == (IData)(vlSelf->ysyx_23060332_top__DOT__raddr2))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                                                  [vlSelf->ysyx_23060332_top__DOT__raddr2]);
}

VL_INLINE_OPT void Vysyx_23060332_top___024root___act_sequent__TOP__2(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_23060332_top__DOT__mem_wdata = 0U;
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
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                } else if ((0U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_23060332_top___024root___act_comb__TOP__0(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 0U;
    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr = 0U;
    vlSelf->ysyx_23060332_top__DOT__raddr1 = 0U;
    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
    vlSelf->ysyx_23060332_top__DOT__op1 = 0U;
    vlSelf->ysyx_23060332_top__DOT__op2 = 0U;
    vlSelf->ysyx_23060332_top__DOT__op1_jump = 0U;
    vlSelf->ysyx_23060332_top__DOT__op2_jump = 0U;
    if ((0x40U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                            vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                                = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 7U));
                            vlSelf->ysyx_23060332_top__DOT__op1 
                                = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                            vlSelf->ysyx_23060332_top__DOT__op2 = 4U;
                            vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                            vlSelf->ysyx_23060332_top__DOT__op2_jump 
                                = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->ysyx_23060332_top__DOT__inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                          >> 0x14U)))));
                        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                        }
                    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                        vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 7U));
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                        vlSelf->ysyx_23060332_top__DOT__op2 = 4U;
                        vlSelf->ysyx_23060332_top__DOT__op1_jump 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2_jump 
                            = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x14U));
                    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                        vlSelf->ysyx_23060332_top__DOT__op1_jump 
                            = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                        vlSelf->ysyx_23060332_top__DOT__op2_jump 
                            = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                        >> 7U))))));
                    } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    } else {
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                        vlSelf->ysyx_23060332_top__DOT__op1_jump 
                            = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                        vlSelf->ysyx_23060332_top__DOT__op2_jump 
                            = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                        >> 7U))))));
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                        vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 7U));
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = (0xfffff000U & vlSelf->ysyx_23060332_top__DOT__inst);
                        vlSelf->ysyx_23060332_top__DOT__op2 = 0U;
                    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0x14U));
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((((2U == (7U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xcU))) | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) 
                     | (0U == (7U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                     >> 0xcU))))) {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 0U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr = 0U;
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0x14U));
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_23060332_top__DOT__inst 
                                            >> 7U))));
                } else {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__inst_addr;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (0xfffff000U & vlSelf->ysyx_23060332_top__DOT__inst);
                } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                        vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 7U));
                        vlSelf->ysyx_23060332_top__DOT__raddr1 
                            = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0xfU));
                        vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                        vlSelf->ysyx_23060332_top__DOT__op1 
                            = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                        vlSelf->ysyx_23060332_top__DOT__op2 
                            = vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_h810d5fba__0;
                    } else {
                        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                    }
                } else {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_h810d5fba__0;
                }
            } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                } else {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                }
            } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
                } else {
                    vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                    vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 7U));
                    vlSelf->ysyx_23060332_top__DOT__raddr1 
                        = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xfU));
                    vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                    vlSelf->ysyx_23060332_top__DOT__op1 
                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                    vlSelf->ysyx_23060332_top__DOT__op2 
                        = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->ysyx_23060332_top__DOT__inst 
                                        >> 0x14U));
                }
            } else {
                vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen = 1U;
                vlSelf->ysyx_23060332_top__DOT__id_ex_waddr 
                    = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                >> 7U));
                vlSelf->ysyx_23060332_top__DOT__raddr1 
                    = (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                >> 0xfU));
                vlSelf->ysyx_23060332_top__DOT__raddr2 = 0U;
                vlSelf->ysyx_23060332_top__DOT__op1 
                    = vlSelf->ysyx_23060332_top__DOT__reg_rdata1;
                vlSelf->ysyx_23060332_top__DOT__op2 
                    = (((- (IData)((vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 0x14U));
            }
        } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
        }
    } else if ((0U != vlSelf->ysyx_23060332_top__DOT__inst)) {
        Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT__invalid_inst_TOP();
    }
    vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen 
        = vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen;
    vlSelf->ysyx_23060332_top__DOT__mem_waddr = 0U;
    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
    vlSelf->ysyx_23060332_top__DOT__mem_raddr = 0U;
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
                                    vlSelf->ysyx_23060332_top__DOT__mem_waddr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1 
                                           + vlSelf->ysyx_23060332_top__DOT__op2);
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_waddr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1 
                                           + vlSelf->ysyx_23060332_top__DOT__op2);
                                } else if ((0U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_waddr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1 
                                           + vlSelf->ysyx_23060332_top__DOT__op2);
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
                                vlSelf->ysyx_23060332_top__DOT__mem_raddr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1 
                                       + vlSelf->ysyx_23060332_top__DOT__op2);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_23060332_top__DOT__mem_rdata = 0U;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 = 0U;
    vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 = 0U;
    if ((0x40U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                       + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                            vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                            vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                = (0xfffffffeU & (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                                  + vlSelf->ysyx_23060332_top__DOT__op2_jump));
                        }
                    }
                } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                    if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                         >= vlSelf->ysyx_23060332_top__DOT__op2)) {
                                        vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                        vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                            = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                               + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                    } else {
                                        vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                        vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                    }
                                } else if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                            < vlSelf->ysyx_23060332_top__DOT__op2)) {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                           + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                } else {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                if (VL_GTES_III(32, vlSelf->ysyx_23060332_top__DOT__op1, vlSelf->ysyx_23060332_top__DOT__op2)) {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                           + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                } else {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                }
                            } else if (VL_LTS_III(32, vlSelf->ysyx_23060332_top__DOT__op1, vlSelf->ysyx_23060332_top__DOT__op2)) {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                       + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                            } else {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                            }
                        } else if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                             >> 0xdU)))) {
                            if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                     != vlSelf->ysyx_23060332_top__DOT__op2)) {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                        = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                           + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                                } else {
                                    vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                    vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                                }
                            } else if ((vlSelf->ysyx_23060332_top__DOT__op1 
                                        == vlSelf->ysyx_23060332_top__DOT__op2)) {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 1U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1_jump 
                                       + vlSelf->ysyx_23060332_top__DOT__op2_jump);
                            } else {
                                vlSelf->ysyx_23060332_top__DOT__jump_en = 0U;
                                vlSelf->ysyx_23060332_top__DOT__jump_addr = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 3U)))) {
                if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                      >> 3U)))) {
            if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen = 1U;
                    }
                }
            }
        }
    }
    if ((((0x80000000U <= vlSelf->ysyx_23060332_top__DOT__mem_raddr) 
          & (0x87ffffffU >= vlSelf->ysyx_23060332_top__DOT__mem_raddr)) 
         | ((0xa0000048U == vlSelf->ysyx_23060332_top__DOT__mem_raddr) 
            | (0xa000004cU == vlSelf->ysyx_23060332_top__DOT__mem_raddr)))) {
        if (vlSelf->ysyx_23060332_top__DOT__mem_ren) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(vlSelf->ysyx_23060332_top__DOT__mem_raddr, vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__34__Vfuncout);
            vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                = vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__34__Vfuncout;
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_pc_inst__DOT__pmem_read_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_23060332_top__DOT__mem_raddr), vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__35__Vfuncout);
            vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                = vlSelf->__Vfunc_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_read__35__Vfuncout;
            vlSelf->ysyx_23060332_top__DOT__mem_rdata 
                = ((2U & vlSelf->ysyx_23060332_top__DOT__mem_raddr)
                    ? ((1U & vlSelf->ysyx_23060332_top__DOT__mem_raddr)
                        ? ((vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                            << 8U) | (vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                                      >> 0x18U)) : 
                       ((vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                         << 0x10U) | (vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                                      >> 0x10U))) : 
                   ((1U & vlSelf->ysyx_23060332_top__DOT__mem_raddr)
                     ? ((vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2 
                         << 0x18U) | (vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1 
                                      >> 8U)) : vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1));
        }
    }
    vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata = 0U;
    if ((0x40U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1 
                                       + vlSelf->ysyx_23060332_top__DOT__op2);
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = (vlSelf->ysyx_23060332_top__DOT__op1 
                                   + vlSelf->ysyx_23060332_top__DOT__op2);
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                          >> 3U)))) {
                if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = (vlSelf->ysyx_23060332_top__DOT__op1 
                                   + vlSelf->ysyx_23060332_top__DOT__op2);
                        }
                    }
                } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                ? ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                           & vlSelf->ysyx_23060332_top__DOT__op2)
                                        : (vlSelf->ysyx_23060332_top__DOT__op1 
                                           | vlSelf->ysyx_23060332_top__DOT__op2))
                                    : ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? ((0x40000000U 
                                            & vlSelf->ysyx_23060332_top__DOT__inst)
                                            ? ((vlSelf->ysyx_23060332_top__DOT__op1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyx_23060332_top__DOT__op2)) 
                                               | ((- (IData)(
                                                             (vlSelf->ysyx_23060332_top__DOT__op1 
                                                              >> 0x1fU))) 
                                                  & (~ 
                                                     (0xffffffffU 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_23060332_top__DOT__op2)))))
                                            : (vlSelf->ysyx_23060332_top__DOT__op1 
                                               >> (0x1fU 
                                                   & vlSelf->ysyx_23060332_top__DOT__op2)))
                                        : (vlSelf->ysyx_23060332_top__DOT__op1 
                                           ^ vlSelf->ysyx_23060332_top__DOT__op2)))
                                : ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? ((vlSelf->ysyx_23060332_top__DOT__op1 
                                            < vlSelf->ysyx_23060332_top__DOT__op2)
                                            ? 1U : 0U)
                                        : (VL_LTS_III(32, vlSelf->ysyx_23060332_top__DOT__op1, vlSelf->ysyx_23060332_top__DOT__op2)
                                            ? 1U : 0U))
                                    : ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                           << (0x1fU 
                                               & vlSelf->ysyx_23060332_top__DOT__op2))
                                        : ((0x40000000U 
                                            & vlSelf->ysyx_23060332_top__DOT__inst)
                                            ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                               - vlSelf->ysyx_23060332_top__DOT__op2)
                                            : (vlSelf->ysyx_23060332_top__DOT__op1 
                                               + vlSelf->ysyx_23060332_top__DOT__op2)))));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ysyx_23060332_top__DOT__inst)) {
        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                      >> 3U)))) {
            if ((4U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = (vlSelf->ysyx_23060332_top__DOT__op1 
                               + vlSelf->ysyx_23060332_top__DOT__op2);
                    }
                }
            } else if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                                vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                    = (vlSelf->ysyx_23060332_top__DOT__op1 
                                       & vlSelf->ysyx_23060332_top__DOT__op2);
                            }
                        } else {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? ((0x40000000U 
                                        & vlSelf->ysyx_23060332_top__DOT__inst)
                                        ? ((vlSelf->ysyx_23060332_top__DOT__op1 
                                            >> (0x1fU 
                                                & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                   >> 0x14U))) 
                                           | ((- (IData)(
                                                         (vlSelf->ysyx_23060332_top__DOT__op1 
                                                          >> 0x1fU))) 
                                              & (~ 
                                                 (0xffffffffU 
                                                  >> 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0x14U))))))
                                        : (vlSelf->ysyx_23060332_top__DOT__op1 
                                           >> (0x1fU 
                                               & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                  >> 0x14U))))
                                    : (vlSelf->ysyx_23060332_top__DOT__op1 
                                       ^ vlSelf->ysyx_23060332_top__DOT__op2));
                        }
                    } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = ((vlSelf->ysyx_23060332_top__DOT__op1 
                                    < vlSelf->ysyx_23060332_top__DOT__op2)
                                    ? 1U : 0U);
                        }
                    } else {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                ? (vlSelf->ysyx_23060332_top__DOT__op1 
                                   << (0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                >> 0x14U)))
                                : (vlSelf->ysyx_23060332_top__DOT__op1 
                                   + vlSelf->ysyx_23060332_top__DOT__op2));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                      >> 2U)))) {
            if ((2U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                    if ((0x4000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                      >> 0xdU)))) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                    ? (0xffffU & vlSelf->ysyx_23060332_top__DOT__mem_rdata)
                                    : (0xffU & vlSelf->ysyx_23060332_top__DOT__mem_rdata));
                        }
                    } else if ((0x2000U & vlSelf->ysyx_23060332_top__DOT__inst)) {
                        if ((1U & (~ (vlSelf->ysyx_23060332_top__DOT__inst 
                                      >> 0xcU)))) {
                            vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                                = vlSelf->ysyx_23060332_top__DOT__mem_rdata;
                        }
                    } else {
                        vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata 
                            = ((0x1000U & vlSelf->ysyx_23060332_top__DOT__inst)
                                ? (((- (IData)((1U 
                                                & (vlSelf->ysyx_23060332_top__DOT__mem_rdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->ysyx_23060332_top__DOT__mem_rdata))
                                : (((- (IData)((1U 
                                                & (vlSelf->ysyx_23060332_top__DOT__mem_rdata 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->ysyx_23060332_top__DOT__mem_rdata)));
                    }
                }
            }
        }
    }
}

void Vysyx_23060332_top___024root___eval_act(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vysyx_23060332_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        Vysyx_23060332_top___024root___act_sequent__TOP__1(vlSelf);
        Vysyx_23060332_top___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U))) {
        Vysyx_23060332_top___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

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
    if (vlSelf->ysyx_23060332_top__DOT__mem_wen) {
        if ((2U & vlSelf->ysyx_23060332_top__DOT__mem_waddr)) {
            if ((1U & vlSelf->ysyx_23060332_top__DOT__mem_waddr)) {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(vlSelf->ysyx_23060332_top__DOT__mem_waddr, 
                                                                                (vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                                                                << 0x18U), 
                                                                                (8U 
                                                                                & ((IData)(vlSelf->ysyx_23060332_top__DOT__mem_wmask) 
                                                                                << 3U)));
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_23060332_top__DOT__mem_waddr), 
                                                                                (vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                                                                >> 8U), 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ysyx_23060332_top__DOT__mem_wmask) 
                                                                                >> 1U)));
            } else {
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(vlSelf->ysyx_23060332_top__DOT__mem_waddr, 
                                                                                (vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                                                                << 0x10U), 
                                                                                (0xcU 
                                                                                & ((IData)(vlSelf->ysyx_23060332_top__DOT__mem_wmask) 
                                                                                << 2U)));
                Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_23060332_top__DOT__mem_waddr), 
                                                                                (vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                                                                >> 0x10U), 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->ysyx_23060332_top__DOT__mem_wmask) 
                                                                                >> 2U)));
            }
        } else if ((1U & vlSelf->ysyx_23060332_top__DOT__mem_waddr)) {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(vlSelf->ysyx_23060332_top__DOT__mem_waddr, 
                                                                                (vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                                                                << 8U), 
                                                                                (0xeU 
                                                                                & ((IData)(vlSelf->ysyx_23060332_top__DOT__mem_wmask) 
                                                                                << 1U)));
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_23060332_top__DOT__mem_waddr), 
                                                                                (vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                                                                >> 0x18U), 
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_23060332_top__DOT__mem_wmask) 
                                                                                >> 3U)));
        } else {
            Vysyx_23060332_top___024root____Vdpiimwrap_ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__pmem_write_TOP(vlSelf->ysyx_23060332_top__DOT__mem_waddr, vlSelf->ysyx_23060332_top__DOT__mem_wdata, (IData)(vlSelf->ysyx_23060332_top__DOT__mem_wmask));
        }
    }
    __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i = 0x20U;
        vlSelf->ysyx_23060332_top__DOT__inst_addr = 0x80000000U;
        vlSelf->pc = 0x80000000U;
        __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v0 = 1U;
    } else {
        if (vlSelf->ysyx_23060332_top__DOT__jump_en) {
            vlSelf->ysyx_23060332_top__DOT__inst_addr 
                = vlSelf->ysyx_23060332_top__DOT__jump_addr;
            vlSelf->pc = vlSelf->ysyx_23060332_top__DOT__jump_addr;
        } else {
            vlSelf->ysyx_23060332_top__DOT__inst_addr 
                = ((IData)(4U) + vlSelf->ysyx_23060332_top__DOT__inst_addr);
            vlSelf->pc = ((IData)(4U) + vlSelf->pc);
        }
        if (((0U != (IData)(vlSelf->ysyx_23060332_top__DOT__id_ex_waddr)) 
             & (IData)(vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen))) {
            __Vdlyvval__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 
                = vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata;
            __Vdlyvset__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 = 1U;
            __Vdlyvdim0__ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs__v32 
                = vlSelf->ysyx_23060332_top__DOT__id_ex_waddr;
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

VL_INLINE_OPT void Vysyx_23060332_top___024root___nba_comb__TOP__1(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyx_23060332_top__DOT__reg_rdata2 = ((0U 
                                                   == (IData)(vlSelf->ysyx_23060332_top__DOT__raddr2))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                                                  [vlSelf->ysyx_23060332_top__DOT__raddr2]);
    vlSelf->ysyx_23060332_top__DOT__mem_wdata = 0U;
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
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                } else if ((0U == (7U 
                                                   & (vlSelf->ysyx_23060332_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060332_top__DOT__mem_wdata 
                                        = vlSelf->ysyx_23060332_top__DOT__reg_rdata2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vysyx_23060332_top___024root___eval_nba(Vysyx_23060332_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060332_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_23060332_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_23060332_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_23060332_top___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
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
    VlTriggerVec<3> __VpreTriggered;
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
                VL_FATAL_MT("/home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_top.v", 2, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_top.v", 2, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/ciroha/ysyx-workbench/npc/vsrc/ysyx_23060332_top.v", 2, "", "NBA region did not converge.");
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
