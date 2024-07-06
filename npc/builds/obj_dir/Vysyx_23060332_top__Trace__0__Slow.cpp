// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060332_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060332_top___024root__trace_init_sub__TOP__0(Vysyx_23060332_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060332_top ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 11,0);
    tracep->declBus(c+43,"rdata", false,-1, 31,0);
    tracep->declBus(c+44,"wdata", false,-1, 31,0);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->pushNamePrefix("ysyx_23060332_alu_inst ");
    tracep->declBus(c+43,"rdata", false,-1, 31,0);
    tracep->declBus(c+3,"imm", false,-1, 11,0);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+44,"wdata", false,-1, 31,0);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->declBus(c+45,"opcode_r", false,-1, 6,0);
    tracep->declBus(c+46,"func3_r", false,-1, 2,0);
    tracep->declBus(c+5,"rs1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060332_idu_inst ");
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 11,0);
    tracep->declBus(c+45,"opcode_r", false,-1, 6,0);
    tracep->declBus(c+47,"rd_r", false,-1, 4,0);
    tracep->declBus(c+46,"func3_r", false,-1, 2,0);
    tracep->declBus(c+48,"rs1_r", false,-1, 4,0);
    tracep->declBus(c+49,"imm_r", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060332_pc_inst ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060332_reg_inst ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->declBus(c+44,"wdata", false,-1, 31,0);
    tracep->declBus(c+43,"rdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+38,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060332_top___024root__trace_init_top(Vysyx_23060332_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060332_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060332_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060332_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060332_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060332_top___024root__trace_register(Vysyx_23060332_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060332_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060332_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060332_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060332_top___024root__trace_full_sub_0(Vysyx_23060332_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060332_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060332_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060332_top___024root*>(voidSelf);
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060332_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060332_top___024root__trace_full_sub_0(Vysyx_23060332_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060332_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060332_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060332_top__DOT__rs1),5);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060332_top__DOT__rd),5);
    bufp->fullSData(oldp+3,(vlSelf->ysyx_23060332_top__DOT__imm),12);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_23060332_top__DOT__wen));
    bufp->fullIData(oldp+5,((((- (IData)((1U & ((IData)(vlSelf->ysyx_23060332_top__DOT__imm) 
                                                >> 0xbU)))) 
                              << 0xcU) | (IData)(vlSelf->ysyx_23060332_top__DOT__imm))),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i),32);
    bufp->fullBit(oldp+39,(vlSelf->clk));
    bufp->fullBit(oldp+40,(vlSelf->rst));
    bufp->fullIData(oldp+41,(vlSelf->inst),32);
    bufp->fullIData(oldp+42,(vlSelf->pc),32);
    bufp->fullIData(oldp+43,(((0U == (IData)(vlSelf->ysyx_23060332_top__DOT__rs1))
                               ? 0U : vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                              [vlSelf->ysyx_23060332_top__DOT__rs1])),32);
    bufp->fullIData(oldp+44,(((IData)(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_idu_inst__DOT____VdfgExtracted_hc926e799__0)
                               ? ((((- (IData)((1U 
                                                & ((IData)(vlSelf->ysyx_23060332_top__DOT__imm) 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (IData)(vlSelf->ysyx_23060332_top__DOT__imm)) 
                                  + ((0U == (IData)(vlSelf->ysyx_23060332_top__DOT__rs1))
                                      ? 0U : vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                                     [vlSelf->ysyx_23060332_top__DOT__rs1]))
                               : 0U)),32);
    bufp->fullCData(oldp+45,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+46,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullSData(oldp+49,((vlSelf->inst >> 0x14U)),12);
}
