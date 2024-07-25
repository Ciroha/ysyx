`include "ysyx_23060332_define.v"
module ysyx_23060332_pc (
    input wire clk,
    input wire rst,

    //From exu
    input wire [`InstAddrBus]   jump_addr,
    input wire                  jump_en,

    output reg [`InstAddrBus]   pc,
    output reg [`InstBus]       inst_o,
    output reg [`InstAddrBus]   inst_addr
);

import "DPI-C" function int pmem_read(input int raddr);

always @(*) begin
    if (reset) begin
        inst_o = `ZeroWord;
    end
    else begin
        inst_o = pmem_read(pc);
    end
end

always @(posedge clk) begin
    if (rst) begin
        pc <= 32'h80000000;
        inst_addr <= 32'h80000000;
    end
    else if (jump_en == `JumpEnable) begin
        pc <= jump_addr;
        inst_addr <= jump_addr;
    end
    else begin
        pc <= pc + 4;
        inst_addr <= inst_addr + 4;
    end
end
    
endmodule
