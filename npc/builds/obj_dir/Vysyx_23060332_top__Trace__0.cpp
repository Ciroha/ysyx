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
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060332_top__DOT__jump_addr),32);
        bufp->chgBit(oldp+1,(vlSelf->ysyx_23060332_top__DOT__jump_en));
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060332_top__DOT__csr_id_rdata_csr),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_23060332_top__DOT__op1),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060332_top__DOT__op2),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060332_top__DOT__op1_jump),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_23060332_top__DOT__op2_jump),32);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen));
        bufp->chgCData(oldp+8,(vlSelf->ysyx_23060332_top__DOT__id_ex_waddr),5);
        bufp->chgSData(oldp+9,(vlSelf->ysyx_23060332_top__DOT__id_ex_waddr_csr),12);
        bufp->chgBit(oldp+10,(vlSelf->ysyx_23060332_top__DOT__id_ex_reg_csr_wen));
        bufp->chgCData(oldp+11,(vlSelf->ysyx_23060332_top__DOT__raddr1),5);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_23060332_top__DOT__raddr2),5);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata),32);
        bufp->chgBit(oldp+14,(vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen));
        bufp->chgSData(oldp+15,(vlSelf->ysyx_23060332_top__DOT__raddr_csr),12);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060332_top__DOT__wdata_csr),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060332_top__DOT__mem_waddr),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060332_top__DOT__mem_raddr),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060332_top__DOT__mem_rdata),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_exu_inst__DOT__temp),32);
        bufp->chgBit(oldp+21,((((0x80000000U <= vlSelf->ysyx_23060332_top__DOT__mem_raddr) 
                                & (0x87ffffffU >= vlSelf->ysyx_23060332_top__DOT__mem_raddr)) 
                               | ((0xa0000048U == vlSelf->ysyx_23060332_top__DOT__mem_raddr) 
                                  | (0xa000004cU == vlSelf->ysyx_23060332_top__DOT__mem_raddr)))));
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp1),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_mem_inst__DOT__temp2),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060332_top__DOT__inst),32);
        bufp->chgBit(oldp+25,(vlSelf->ysyx_23060332_top__DOT__irq));
        bufp->chgCData(oldp+26,(vlSelf->ysyx_23060332_top__DOT__irq_no),8);
        bufp->chgBit(oldp+27,(vlSelf->ysyx_23060332_top__DOT__mem_wen));
        bufp->chgCData(oldp+28,(vlSelf->ysyx_23060332_top__DOT__mem_wmask),8);
        bufp->chgBit(oldp+29,(vlSelf->ysyx_23060332_top__DOT__mem_ren));
        bufp->chgCData(oldp+30,((0x7fU & vlSelf->ysyx_23060332_top__DOT__inst)),7);
        bufp->chgCData(oldp+31,((7U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgSData(oldp+32,((vlSelf->ysyx_23060332_top__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+36,(vlSelf->ysyx_23060332_top__DOT__inst_addr),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_csr_inst__DOT__csr
                                [2U]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_csr_inst__DOT__csr[0]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_csr_inst__DOT__csr[1]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_csr_inst__DOT__csr[2]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_csr_inst__DOT__csr[3]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_csr_inst__DOT__i),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i),32);
    }
    bufp->chgBit(oldp+76,(vlSelf->clk));
    bufp->chgBit(oldp+77,(vlSelf->rst));
    bufp->chgIData(oldp+78,(vlSelf->pc),32);
    bufp->chgIData(oldp+79,(vlSelf->ysyx_23060332_top__DOT__reg_rdata1),32);
    bufp->chgIData(oldp+80,(vlSelf->ysyx_23060332_top__DOT__reg_rdata2),32);
    bufp->chgIData(oldp+81,(vlSelf->ysyx_23060332_top__DOT__mem_wdata),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
