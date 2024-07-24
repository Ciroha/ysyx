`include "ysyx_23060332_define.v"
module ysyx_23060332_exu (
    //From idu
    input wire [`RegDataBus]    op1,
    input wire [`RegDataBus]    op2,
    input wire [`RegDataBus]    op1_jump,
    input wire [`RegDataBus]    op2_jump,
    input wire [`RegDataBus]    reg_rdata1_i,
    input wire [`RegDataBus]    reg_rdata2_i,

    input wire                  reg_wen_i,
    input wire [`RegAddrBus]    waddr_i,
    input wire [`InstBus]       inst_i,

    //From mem
    input wire [`MemDataBus]    mem_rdata,

    //To pc
    output reg [`InstAddrBus]   jump_addr,
    output reg                  jump_en,

    //To mem
    output reg                  mem_wen,
    output reg [`MemAddrBus]    mem_waddr,
    output reg [`MemDataBus]    mem_wdata,
    output reg [7:0]            mem_wmask,
    output reg [`MemAddrBus]    mem_raddr,

    //To reg
    output reg [`RegAddrBus]    waddr_o,
    output reg [`RegDataBus]    wdata,
    output reg                  reg_wen_o
);

wire    [6:0]   opcode  =   inst_i[6:0];
// wire    [4:0]   rd      =   inst_i[11:7];
wire    [2:0]   func3   =   inst_i[14:12];
// wire    [4:0]   rs1     =   inst_i[19:15];
// wire    [4:0]   rs2     =   inst_i[24:20];
// wire    [11:0]  imm     =   inst_i[31:20];

always @(*) begin
    //初始化
    jump_en = `JumpDisable;
    jump_addr = `ZeroWord;
    reg_wen_o = `WriteDisable;
    waddr_o = waddr_i;
    wdata = `ZeroWord;
    mem_wen = `WriteDisable;
    mem_waddr = `ZeroWord;
    mem_wdata = `ZeroWord;
    mem_wmask = 8'b0;
    mem_raddr = `ZeroWord;
    case (opcode)
        `INST_TYPE_I: begin
            case (func3)
                `INST_ADDI: begin
                    reg_wen_o = `WriteEnable;
                    wdata = op1 + op2;
                end
                default: ;
            endcase
        end

        `INST_TYPE_S: begin
            case (func3)
                `INST_SW: begin
                    mem_wdata = reg_rdata2_i;
                    mem_waddr = op1 + op2;
                    mem_wmask = 8'b00001111;
                    mem_wen = `WriteEnable;
                end
                default: ;
            endcase
        end

        `INST_LUI, `INST_AUIPC: begin
            reg_wen_o = `WriteEnable;
            wdata = op1 + op2;
        end

        `INST_JAL: begin
            reg_wen_o = `WriteEnable;
            wdata = op1 + op2;
            jump_en = `JumpEnable;
            jump_addr = op1_jump + op2_jump;
        end

        `INST_JALR: begin
            reg_wen_o = `WriteEnable;
            wdata = op1 + op2;
            jump_en = `JumpEnable;
            jump_addr = (op1_jump + op2_jump) & ~(32'b1);
        end

        default: ;
    endcase
end


endmodule
