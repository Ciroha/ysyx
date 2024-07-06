module ysyx_23060332_reg (
    input wire clk,
    input wire rst,

    input wire [4:0] rs1,
    input wire [4:0] rd,

    input wire wen,
    input wire [31:0] wdata,

    output reg [31:0] rdata

);

reg [31:0] regs [0:31];
integer i;

always @(posedge clk) begin
    if (rst) begin
        for (i = 0; i < 32; i++) begin
            regs[i] <= 32'b0;
        end
    end
    else begin
        if (wen) begin
            regs[rd] <= wdata;
        end
    end
end

always @(*) begin
    if (rs1 == 5'd0) begin
        rdata = 32'b0;
    end
    else begin
        rdata = regs[rs1];
    end
end
    
endmodule
