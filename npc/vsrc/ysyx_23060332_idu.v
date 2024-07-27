`include "ysyx_23060332_define.v"

module ysyx_23060332_idu (
    input wire [`InstBus]       inst_i,
    input wire [`InstAddrBus]   inst_addr,

    //From reg
    input wire [`RegDataBus]    reg_rdata1_i,
    input wire [`RegDataBus]    reg_rdata2_i,

    //To EXU
    output reg [`RegDataBus]    op1,
    output reg [`RegDataBus]    op2,
    output reg [`RegDataBus]    op1_jump,
    output reg [`RegDataBus]    op2_jump,
    output reg [`RegDataBus]    reg_rdata1_o,
    output reg [`RegDataBus]    reg_rdata2_o,
    output reg                  reg_wen,
    output reg [`RegAddrBus]    waddr,
    output reg [`InstBus]       inst_o,

    //To reg
    output reg [`RegAddrBus]    raddr1,
    output reg [`RegAddrBus]    raddr2
);

wire    [6:0]   opcode  =   inst_i[6:0];
wire    [4:0]   rd      =   inst_i[11:7];
wire    [2:0]   func3   =   inst_i[14:12];
wire    [4:0]   rs1     =   inst_i[19:15];
wire    [4:0]   rs2     =   inst_i[24:20];
wire    [11:0]  imm     =   inst_i[31:20];

import "DPI-C" function void npc_trap();
import "DPI-C" function void invalid_inst();

always @(*) begin
    if (inst_i == `INST_EBREAK) begin
        npc_trap();
    end
end

always @(*) begin
    //初始化
    inst_o = inst_i;
    reg_rdata1_o = reg_rdata1_i;
    reg_rdata2_o = reg_rdata2_i;
    reg_wen = `WriteDisable;
    waddr = `ZeroReg;
    raddr1 = `ZeroReg;
    raddr2 = `ZeroReg;
    op1 = `ZeroWord;
    op2 = `ZeroWord;
    op1_jump = `ZeroWord;
    op2_jump = `ZeroWord;

    case (opcode)
        `INST_TYPE_I: begin
            case (func3)
                `INST_ADDI, `INST_SLTIU: begin
                    reg_wen = `WriteEnable;
                    waddr = rd;
                    raddr1 = rs1;
                    raddr2 = `ZeroReg;
                    op1 = reg_rdata1_i;
                    op2 = {{20{imm[11]}}, {imm}};
                end 
                default: invalid_inst();
            endcase
        end

        `INST_TYPE_S: begin
            case (func3)
                `INST_SW, `INST_SH, `INST_SB: begin
                    reg_wen = `WriteDisable;
                    waddr = `ZeroReg;
                    raddr1 = rs1;
                    raddr2 = rs2;
                    op1 = reg_rdata1_i;
                    op2 = {{20{inst_i[31]}}, {inst_i[31:25]}, {inst_i[11:7]}};
                end
                default: invalid_inst();
            endcase
        end

        `INST_TYPE_L: begin
            case (func3)
                `INST_LW: begin
                    reg_wen = `WriteEnable;
                    waddr = rd;
                    raddr1 = rs1;
                    raddr2 = `ZeroReg;
                    op1 = reg_rdata1_i;
                    op2 = {{20{inst_i[31]}}, {imm}};
                end 
                default: invalid_inst();
            endcase
        end

        `INST_TYPE_R: begin
            case (func3)
                `INST_ADD_SUB: begin
                    reg_wen = `WriteEnable;
                    waddr = rd;
                    raddr1 = rs1;
                    raddr2 = rs2;
                    op1 = reg_rdata1_i;
                    op2 = reg_rdata2_i;
                end 
                default: invalid_inst();
            endcase
        end

        `INST_TYPE_B: begin
            case (func3)
                `INST_BEQ, `INST_BNE: begin
                    raddr1 = rs1;
                    raddr2 = rs2;
                    op1 = reg_rdata1_i;
                    op2 = reg_rdata2_i;
                    op1_jump = inst_addr;
                    op2_jump = {{19{inst_i[31]}},{inst_i[31]},{inst_i[7]},{inst_i[30:25]},{inst_i[11:8]},1'b0};
                end
                default: invalid_inst();
            endcase
        end

        `INST_LUI: begin
            reg_wen = `WriteEnable;
            waddr = rd;
            op1 = {{inst_i[31:12]}, {12'b0}};
            op2 = `ZeroWord;
        end

        `INST_AUIPC: begin
            reg_wen = `WriteEnable;
            waddr = rd;
            op1 = inst_addr;
            op2 = {{inst_i[31:12]}, {12'b0}};
        end

        `INST_JAL: begin
            reg_wen = `WriteEnable;
            waddr = rd;
            op1 = inst_addr;
            op2 = 32'd4;
            op1_jump = inst_addr;
            op2_jump = {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};
        end

        `INST_JALR: begin
            reg_wen = `WriteEnable;
            waddr = rd;
            raddr1 = rs1;
            raddr2 = `ZeroReg;
            op1 = inst_addr;
            op2 = 32'd4;
            op1_jump = reg_rdata1_i;
            op2_jump = {{20{inst_i[31]}}, inst_i[31:20]};
        end

        default: begin
            if (inst_i != `INST_NOP) begin
                invalid_inst();
            end
        end
    endcase
end
    
endmodule
