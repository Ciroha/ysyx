//csr寄存器有mstatus,mcause,mtvec,mepc
//分别是     0       1      2     3
`include "ysyx_23060332_define.v"
module ysyx_23060332_csr (
    input wire clk,
    input wire rst,

    //form pc
    input wire [`InstAddrBus]   pc,

    //From idu
    input wire [`CsrAddrBus]    raddr_csr,

    //from exu
    input wire                  irq,
    input wire [7:0]            irq_no,
    input wire [`CsrAddrBus]    waddr_csr,
    input wire [`RegDataBus]    wdata_csr,
    input wire                  reg_csr_wen,

    //To idu
    output reg [`RegDataBus]    rdata_csr,

    //to exu
    output wire [`RegDataBus]   mtvec
);

reg [`RegDataBus] csr [3:0];
integer i;

always @(posedge clk) begin
    if (rst) begin
        csr[0] <= 32'h1800;
        for (i = 1; i < 4; i++) begin
            csr[i] <= 32'b0;
        end
    end
    else if (irq) begin
        csr[3] <= pc;
        csr[1] <= {24'b0, irq_no};
    end
    else if (reg_csr_wen) begin
        case (waddr_csr)
            `Csr_Mstatus: begin
                csr[0] <= wdata_csr;
            end
            `Csr_Mcause: begin
                csr[1] <= wdata_csr;
            end
            `Csr_Mtvec: begin
                csr[2] <= wdata_csr;
            end
            `Csr_Mepc: begin
                csr[3] <= wdata_csr;
            end
            default: ;
        endcase
    end
end

always @(*) begin
    case (raddr_csr)
        `Csr_Mstatus: begin
            rdata_csr = csr[0];
        end
        `Csr_Mcause: begin
            rdata_csr = csr[1];
        end
        `Csr_Mtvec: begin
            rdata_csr = csr[2];
        end
        `Csr_Mepc: begin
            rdata_csr = csr[3];
        end
        default: rdata_csr = `ZeroWord;
    endcase
end


assign mtvec = csr[2];
    
endmodule