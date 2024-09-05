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
    input wire [`CsrAddrBus]    waddr_csr_i,
    input wire [`RegDataBus]    rdata_csr,
    input wire                  reg_csr_wen_i,

    //From mem
    input wire [`MemDataBus]    mem_rdata,

    //From csr
    input wire [`RegDataBus]    mtvec,

    //To pc
    output reg [`InstAddrBus]   jump_addr,
    output reg                  jump_en,

    //To mem
    output reg                  mem_wen,
    output reg [`MemAddrBus]    mem_waddr,
    output reg [`MemDataBus]    mem_wdata,
    output reg [7:0]            mem_wmask,
    output reg [`MemAddrBus]    mem_raddr,
    output reg                  mem_ren,
    // output reg                  valid,

    //To csr
    output reg                  irq,
    output reg [7:0]            irq_no,
    output reg [`CsrAddrBus]    waddr_csr_o,
    // output reg [`RegDataBus]    rdata_csr_o,
    output reg [`RegDataBus]    wdata_csr,
    output reg                  reg_csr_wen_o,

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
wire    [11:0]  func12  =   inst_i[31:20];
reg     [`RegDataBus]   temp;

always @(*) begin
    //初始化
    jump_en = `JumpDisable;
    jump_addr = `ZeroWord;
    mem_ren = `ReadDisable;
    reg_wen_o = reg_wen_i;
    waddr_o = waddr_i;
    waddr_csr_o = waddr_csr_i;
    // rdata_csr_o = rdata_csr_i;
    reg_csr_wen_o = reg_csr_wen_i;
    wdata = `ZeroWord;
    wdata_csr = `ZeroWord;
    mem_wen = `WriteDisable;
    mem_waddr = `ZeroWord;
    mem_wdata = `ZeroWord;
    mem_wmask = 8'b0;
    mem_raddr = `ZeroWord;
    irq = `IrqDisable;
    irq_no = 8'b0;
    // valid = `ReadDisable;
    case (opcode)
        `INST_TYPE_I: begin
            case (func3)
                `INST_ADDI: begin
                    wdata = op1 + op2;
                end

                `INST_SLTIU: begin
                    wdata = (op1 < op2) ? 32'h1: 32'h0;
                end

                `INST_XORI: begin
                    wdata = op1 ^ op2;
                end

                `INST_ORI: begin
                    wdata = op1 | op2;
                end

                `INST_ANDI: begin
                    wdata = op1 & op2;
                end

                `INST_SLLI: begin
                    wdata = op1 << inst_i[24:20];
                end

                `INST_SRLI_SRAI: begin
                    if (inst_i[30] == 1'b1) begin
                        wdata = (op1 >> inst_i[24:20]) | ({32{op1[31]}} & ~(32'hffffffff >> inst_i[24:20]));
                    end
                    else begin
                        wdata = op1 >> inst_i[24:20];
                    end
                end
                default: ;
            endcase
        end

        `INST_TYPE_S: begin
            case (func3)
                `INST_SW: begin
                    mem_wen = `WriteEnable;
                    mem_waddr = op1 + op2;
                    mem_wdata = reg_rdata2_i;
                    mem_wmask = 8'b00001111;
                end
                `INST_SH: begin
                    mem_wen = `WriteEnable;
                    mem_waddr = op1 + op2;
                    mem_wdata = reg_rdata2_i;
                    mem_wmask = 8'b00000011;
                end
                `INST_SB: begin
                    mem_wen = `WriteEnable;
                    mem_waddr = op1 + op2;
                    mem_wdata = reg_rdata2_i;
                    mem_wmask = 8'b00000001;
                end
                default: ;
            endcase
        end

        `INST_TYPE_L: begin
            mem_ren = `ReadEnable;
            mem_raddr = op1 + op2;
            case (func3)
                `INST_LW: begin
                    wdata = mem_rdata;
                end 
                `INST_LH: begin
                    wdata = {{16{mem_rdata[15]}}, {mem_rdata[15:0]}};
                end
                `INST_LB: begin
                    wdata = {{24{mem_rdata[7]}}, {mem_rdata[7:0]}};
                end
                `INST_LBU: begin
                    wdata = {{24'h0}, {mem_rdata[7:0]}};
                end
                `INST_LHU: begin
                    wdata = {{16'h0}, {mem_rdata[15:0]}};
                end
                default: ;
            endcase
        end

        `INST_TYPE_R: begin
            case (func3)
                `INST_ADD_SUB:begin
                    if (inst_i[30] == 0) begin
                        wdata = op1 + op2;
                    end
                    else begin
                        wdata = op1 - op2;
                    end
                end 
                `INST_SLL: begin
                    wdata = op1 << op2[4:0];
                end
                `INST_SLT: begin
                    wdata = ($signed(op1) < $signed(op2)) ? 32'h1: 32'h0;
                end
                `INST_SLTU: begin
                    wdata = (op1 < op2) ? 32'h1: 32'h0;
                end
                `INST_SRL_SRA: begin
                    if (inst_i[30]) begin
                        wdata = (op1 >> op2[4:0]) | ({32{op1[31]}} & ~(32'hffffffff >> op2[4:0]));
                    end
                    else begin
                        wdata = op1 >> op2[4:0];
                    end
                end
                `INST_OR: begin
                    wdata = op1 | op2;
                end
                `INST_XOR:begin
                    wdata = op1 ^ op2;
                end
                `INST_AND: begin
                    wdata = op1 & op2;
                end
                default: ;
            endcase
        end

        `INST_TYPE_B: begin
            case (func3)
                `INST_BEQ: begin
                    jump_en = (op1 == op2) ? `JumpEnable : `JumpDisable;
                    jump_addr = (op1 == op2) ? (op1_jump + op2_jump) : `ZeroWord;
                end
                `INST_BNE: begin
                    jump_en = (op1 != op2) ? `JumpEnable : `JumpDisable;
                    jump_addr = (op1 != op2) ? (op1_jump + op2_jump) : `ZeroWord;                    
                end
                `INST_BLT: begin
                    jump_en = ($signed(op1) < $signed(op2)) ? `JumpEnable : `JumpDisable;
                    jump_addr = ($signed(op1) < $signed(op2)) ? (op1_jump + op2_jump) : `ZeroWord;                    
                end
                `INST_BGE: begin
                    jump_en = ($signed(op1) >= $signed(op2)) ? `JumpEnable : `JumpDisable;
                    jump_addr = ($signed(op1) >= $signed(op2)) ? (op1_jump + op2_jump) : `ZeroWord;
                end
                `INST_BLTU: begin
                    jump_en = (op1 < op2) ? `JumpEnable : `JumpDisable;
                    jump_addr = (op1 < op2) ? (op1_jump + op2_jump) : `ZeroWord;                    
                end                
                `INST_BGEU: begin
                    jump_en = (op1 >= op2) ? `JumpEnable : `JumpDisable;
                    jump_addr = (op1 >= op2) ? (op1_jump + op2_jump) : `ZeroWord;
                end
                default: ;
            endcase
        end

        `INST_TYPE_CSR: begin
            case (func3)
                `INST_ECALL_MRET: begin
                    case (func12)
                        `INST_ECALL: begin
                            irq = `IrqEnable;
                            irq_no = 8'd11;
                            jump_en = `JumpEnable;
                            jump_addr = mtvec;
                        end 
                        `INST_MRET: begin
                            jump_en = `JumpEnable;
                            jump_addr = rdata_csr;
                        end
                        default: ;
                    endcase
                end
                `INST_CSRRW: begin
                    temp = rdata_csr;
                    wdata_csr = reg_rdata1_i;
                    wdata = temp;
                end
                `INST_CSRRS: begin
                    temp = rdata_csr;
                    wdata_csr = reg_rdata1_i | temp;
                    wdata = temp;
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
