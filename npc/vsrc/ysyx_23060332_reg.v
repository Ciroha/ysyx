//Reg Module which can support two read and one write
`include "ysyx_23060332_define.v"
module ysyx_23060332_reg (
    input wire clk,
    input wire rst,

    //from idu
    input wire [`RegAddrBus]    raddr1,
    input wire [`RegAddrBus]    raddr2,

    //from exu
    input wire [`RegAddrBus]    waddr,
    input wire [`RegDataBus]    wdata,
    input wire                  reg_wen,

    //to idu
    output reg [`RegDataBus]    rdata1,
    output reg [`RegDataBus]    rdata2

);

reg [31:0] regs [0:31];
integer i;

// import "DPI-C" function void reg_read(input int i, input int regs_i);

always @(posedge clk) begin
    if (rst) begin
        for (i = 0; i < 32; i++) begin
            regs[i] <= 32'b0;
        end
    end
    else begin
        if (reg_wen) begin
            regs[waddr] <= wdata;
        end
    end
    // for (i = 0; i < 32; i++) begin
    //     reg_read(i, regs[i]);
    // end
end

always @(*) begin
    for (i = 0; i < 32; i++) begin
        reg_read(i, regs[i]);
    end
end

//reg1
always @(*) begin
    rdata1 = 32'b0;
    if (raddr1 == 5'd0) begin
        rdata1 = 32'b0;
    end
    else begin
        rdata1 = regs[raddr1];
    end
end

//reg2
always @(*) begin
    rdata2 = 32'b0;
    if (raddr2 == 5'd0) begin
        rdata2 = 32'b0;
    end
    else begin
        rdata2 = regs[raddr2];
    end
end
    
endmodule
