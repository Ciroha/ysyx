// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top__Syms.h"


void Vysyx_23060332_top___024root__trace_chg_sub_0(Vysyx_23060332_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060332_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060332_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060332_top___024root*>(voidSelf);
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060332_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060332_top___024root__trace_chg_sub_0(Vysyx_23060332_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060332_top__DOT__rs1),5);
        bufp->chgSData(oldp+1,(vlSelf->ysyx_23060332_top__DOT__imm),12);
        bufp->chgBit(oldp+2,(vlSelf->ysyx_23060332_top__DOT__wen));
        bufp->chgIData(oldp+3,((((- (IData)((1U & ((IData)(vlSelf->ysyx_23060332_top__DOT__imm) 
                                                   >> 0xbU)))) 
                                 << 0xcU) | (IData)(vlSelf->ysyx_23060332_top__DOT__imm))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i),32);
    }
    bufp->chgBit(oldp+37,(vlSelf->clk));
    bufp->chgBit(oldp+38,(vlSelf->rst));
    bufp->chgIData(oldp+39,(vlSelf->inst),32);
    bufp->chgIData(oldp+40,(vlSelf->pc),32);
    bufp->chgCData(oldp+41,(((IData)(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_hc926e799__0)
                              ? (0x1fU & (vlSelf->inst 
                                          >> 7U)) : 0U)),5);
    bufp->chgIData(oldp+42,(((0U == (IData)(vlSelf->ysyx_23060332_top__DOT__rs1))
                              ? 0U : vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                             [vlSelf->ysyx_23060332_top__DOT__rs1])),32);
    bufp->chgIData(oldp+43,(((IData)(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_hc926e799__0)
                              ? ((((- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_23060332_top__DOT__imm) 
                                                >> 0xbU)))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_23060332_top__DOT__imm)) 
                                 + ((0U == (IData)(vlSelf->ysyx_23060332_top__DOT__rs1))
                                     ? 0U : vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                                    [vlSelf->ysyx_23060332_top__DOT__rs1]))
                              : 0U)),32);
    bufp->chgCData(oldp+44,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+45,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+46,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+47,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgSData(oldp+48,((vlSelf->inst >> 0x14U)),12);
}

void Vysyx_23060332_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060332_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060332_top___024root*>(voidSelf);
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
