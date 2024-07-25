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
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"rst", false,-1);
    tracep->declBus(c+63,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060332_top ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"rst", false,-1);
    tracep->declBus(c+63,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+15,"jump_en", false,-1);
    tracep->declBus(c+27,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+64,"reg_rdata1", false,-1, 31,0);
    tracep->declBus(c+65,"reg_rdata2", false,-1, 31,0);
    tracep->declBus(c+16,"inst", false,-1, 31,0);
    tracep->declBus(c+2,"op1", false,-1, 31,0);
    tracep->declBus(c+3,"op2", false,-1, 31,0);
    tracep->declBus(c+4,"op1_jump", false,-1, 31,0);
    tracep->declBus(c+5,"op2_jump", false,-1, 31,0);
    tracep->declBit(c+6,"id_ex_reg_wen", false,-1);
    tracep->declBus(c+7,"id_ex_waddr", false,-1, 4,0);
    tracep->declBus(c+16,"id_ex_inst", false,-1, 31,0);
    tracep->declBus(c+64,"id_ex_reg_rdata1", false,-1, 31,0);
    tracep->declBus(c+65,"id_ex_reg_rdata2", false,-1, 31,0);
    tracep->declBus(c+8,"raddr1", false,-1, 4,0);
    tracep->declBus(c+9,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"ex_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+10,"ex_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+17,"ex_reg_reg_wen", false,-1);
    tracep->declBit(c+18,"mem_wen", false,-1);
    tracep->declBus(c+11,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+12,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+13,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+14,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+20,"mem_ren", false,-1);
    tracep->pushNamePrefix("ysyx_23060332_exu_inst ");
    tracep->declBus(c+2,"op1", false,-1, 31,0);
    tracep->declBus(c+3,"op2", false,-1, 31,0);
    tracep->declBus(c+4,"op1_jump", false,-1, 31,0);
    tracep->declBus(c+5,"op2_jump", false,-1, 31,0);
    tracep->declBus(c+64,"reg_rdata1_i", false,-1, 31,0);
    tracep->declBus(c+65,"reg_rdata2_i", false,-1, 31,0);
    tracep->declBit(c+6,"reg_wen_i", false,-1);
    tracep->declBus(c+7,"waddr_i", false,-1, 4,0);
    tracep->declBus(c+16,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+1,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+15,"jump_en", false,-1);
    tracep->declBit(c+18,"mem_wen", false,-1);
    tracep->declBus(c+11,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+12,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+13,"mem_raddr", false,-1, 31,0);
    tracep->declBit(c+20,"mem_ren", false,-1);
    tracep->declBus(c+7,"waddr_o", false,-1, 4,0);
    tracep->declBus(c+10,"wdata", false,-1, 31,0);
    tracep->declBit(c+17,"reg_wen_o", false,-1);
    tracep->declBus(c+21,"opcode", false,-1, 6,0);
    tracep->declBus(c+22,"func3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060332_idu_inst ");
    tracep->declBus(c+16,"inst_i", false,-1, 31,0);
    tracep->declBus(c+27,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+64,"reg_rdata1_i", false,-1, 31,0);
    tracep->declBus(c+65,"reg_rdata2_i", false,-1, 31,0);
    tracep->declBus(c+2,"op1", false,-1, 31,0);
    tracep->declBus(c+3,"op2", false,-1, 31,0);
    tracep->declBus(c+4,"op1_jump", false,-1, 31,0);
    tracep->declBus(c+5,"op2_jump", false,-1, 31,0);
    tracep->declBus(c+64,"reg_rdata1_o", false,-1, 31,0);
    tracep->declBus(c+65,"reg_rdata2_o", false,-1, 31,0);
    tracep->declBit(c+6,"reg_wen", false,-1);
    tracep->declBus(c+7,"waddr", false,-1, 4,0);
    tracep->declBus(c+16,"inst_o", false,-1, 31,0);
    tracep->declBus(c+8,"raddr1", false,-1, 4,0);
    tracep->declBus(c+9,"raddr2", false,-1, 4,0);
    tracep->declBus(c+21,"opcode", false,-1, 6,0);
    tracep->declBus(c+23,"rd", false,-1, 4,0);
    tracep->declBus(c+22,"func3", false,-1, 2,0);
    tracep->declBus(c+24,"rs1", false,-1, 4,0);
    tracep->declBus(c+25,"rs2", false,-1, 4,0);
    tracep->declBus(c+26,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060332_mem_inst ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+18,"mem_wen", false,-1);
    tracep->declBus(c+11,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+12,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+13,"mem_raddr", false,-1, 31,0);
    tracep->declBit(c+20,"mem_ren", false,-1);
    tracep->declBus(c+14,"mem_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060332_pc_inst ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"rst", false,-1);
    tracep->declBus(c+1,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+15,"jump_en", false,-1);
    tracep->declBus(c+63,"pc", false,-1, 31,0);
    tracep->declBus(c+16,"inst_o", false,-1, 31,0);
    tracep->declBus(c+27,"inst_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060332_reg_inst ");
    tracep->declBit(c+61,"clk", false,-1);
    tracep->declBit(c+62,"rst", false,-1);
    tracep->declBus(c+8,"raddr1", false,-1, 4,0);
    tracep->declBus(c+9,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"waddr", false,-1, 4,0);
    tracep->declBus(c+10,"wdata", false,-1, 31,0);
    tracep->declBit(c+17,"reg_wen", false,-1);
    tracep->declBus(c+64,"reg_rdata1", false,-1, 31,0);
    tracep->declBus(c+65,"reg_rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+28+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+60,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060332_top__DOT__jump_addr),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060332_top__DOT__op1),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060332_top__DOT__op2),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060332_top__DOT__op1_jump),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060332_top__DOT__op2_jump),32);
    bufp->fullBit(oldp+6,(vlSelf->ysyx_23060332_top__DOT__id_ex_reg_wen));
    bufp->fullCData(oldp+7,(vlSelf->ysyx_23060332_top__DOT__id_ex_waddr),5);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_23060332_top__DOT__raddr1),5);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_23060332_top__DOT__raddr2),5);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060332_top__DOT__ex_reg_wdata),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060332_top__DOT__mem_waddr),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060332_top__DOT__mem_wdata),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060332_top__DOT__mem_raddr),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060332_top__DOT__mem_rdata),32);
    bufp->fullBit(oldp+15,(vlSelf->ysyx_23060332_top__DOT__jump_en));
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060332_top__DOT__inst),32);
    bufp->fullBit(oldp+17,(vlSelf->ysyx_23060332_top__DOT__ex_reg_reg_wen));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_23060332_top__DOT__mem_wen));
    bufp->fullCData(oldp+19,(vlSelf->ysyx_23060332_top__DOT__mem_wmask),8);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_23060332_top__DOT__mem_ren));
    bufp->fullCData(oldp+21,((0x7fU & vlSelf->ysyx_23060332_top__DOT__inst)),7);
    bufp->fullCData(oldp+22,((7U & (vlSelf->ysyx_23060332_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->ysyx_23060332_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullSData(oldp+26,((vlSelf->ysyx_23060332_top__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060332_top__DOT__inst_addr),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__i),32);
    bufp->fullBit(oldp+61,(vlSelf->clk));
    bufp->fullBit(oldp+62,(vlSelf->rst));
    bufp->fullIData(oldp+63,(vlSelf->pc),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060332_top__DOT__reg_rdata1),32);
    bufp->fullIData(oldp+65,(((0U == (IData)(vlSelf->ysyx_23060332_top__DOT__raddr2))
                               ? 0U : vlSelf->ysyx_23060332_top__DOT__ysyx_23060332_reg_inst__DOT__regs
                              [vlSelf->ysyx_23060332_top__DOT__raddr2])),32);
}
