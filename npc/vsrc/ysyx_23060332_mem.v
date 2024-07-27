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
wire valid;
assign valid = (mem_raddr >= 32'h80000000) && (mem_raddr <= 32'h87ffffff);
reg [31:0] temp1, temp2;

always @(*) begin 
    mem_rdata = `ZeroWord;
    temp1 = `ZeroWord;
    temp2 = `ZeroWord;
    if (valid) begin
        if (mem_ren) begin
            temp1 = pmem_read(mem_raddr);
            temp2 = pmem_read(mem_raddr+4);
            case (mem_raddr[1:0])
                2'b00: mem_rdata = temp1;
                2'b01: mem_rdata = {{temp2[7:0]},{temp1[31:8]}};
                2'b10: mem_rdata = {{temp2[15:0]},{temp1[31:16]}};
                2'b11: mem_rdata = {{temp2[23:0]},{temp1[31:24]}};
                default: ;
            endcase
        end
    end
    // if (valid) begin
    //     if (mem_ren) begin
    //         mem_rdata = pmem_read(mem_raddr);
    //     end
    // end
end

always @(posedge clk) begin
    // rdata = pmem_read(mem_raddr);
    if (mem_wen) begin // 有写请求时
        case (mem_waddr[1:0])
            2'b00: pmem_write(mem_waddr, mem_wdata, mem_wmask);
            2'b01: begin
                pmem_write(mem_waddr, mem_wdata << 2, (mem_wmask & 8'b11111110));
                pmem_write(mem_waddr + 4, mem_wdata >> 6, (mem_wmask & 8'b11110001));
            end
            2'b10: begin
                pmem_write(mem_waddr, mem_wdata << 4, (mem_wmask & 8'b11111100));
                pmem_write(mem_waddr + 4, mem_wdata >> 4, (mem_wmask & 8'b11110011));
            end
            2'b11: begin
                pmem_write(mem_waddr, mem_wdata << 6, (mem_wmask & 8'b11111000));
                pmem_write(mem_waddr + 4, mem_wdata >> 2, (mem_wmask & 8'b11110111));
            end
            default: ;
        endcase
    end
end

endmodule