`include "ysyx_23060332_define.v"

module ysyx_23060332_mem (
    input clk,
    input wire                  mem_wen,
    input wire [`MemAddrBus]    mem_waddr,
    input wire [`MemDataBus]    mem_wdata,
    input wire [7:0]            mem_wmask,
    input wire [`MemAddrBus]    mem_raddr,
    input wire                  mem_ren,
    // input                       valid,

    output reg [`MemDataBus]    mem_rdata
);

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

// reg [31:0] rdata;
// assign mem_rdata = rdata;
// assign valid = 

always @(*) begin 
    mem_rdata = `ZeroWord;
    // if (valid) begin
        if (mem_ren) begin
            mem_rdata = pmem_read(mem_raddr);
        end
    // end
end

always @(posedge clk) begin
    // rdata = pmem_read(mem_raddr);
    if (mem_wen) begin // 有写请求时
        pmem_write(mem_waddr, mem_wdata, mem_wmask);
    end
end

endmodule