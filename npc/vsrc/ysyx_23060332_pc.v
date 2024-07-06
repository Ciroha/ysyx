module ysyx_23060332_pc (
    input wire clk,
    input wire rst,

    output reg [31:0] pc
);

always @(posedge clk) begin
    if (rst) begin
        pc <= 32'h80000000;
    end
    else begin
        pc <= pc + 4;
    end
end
    
endmodule
