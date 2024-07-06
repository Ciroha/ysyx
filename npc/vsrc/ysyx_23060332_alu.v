module ysyx_23060332_alu (
    input wire [31:0] rdata,
    input wire [11:0] imm,
    input wire [31:0] inst,

    output reg [31:0] wdata,
    output reg wen
);

wire    [6:0]   opcode_r=   inst[6:0];
wire    [2:0]   func3_r =   inst[14:12];

wire [31:0] rs1;
assign rs1 = {{20{imm[11]}}, imm[11:0]};

always @(*) begin
    if ((opcode_r == 7'b0010011) && (func3_r == 3'b000)) begin
        wdata = rs1 + rdata;
        wen = 1'b1;
    end
    else begin
        wdata = 0;
        wen = 0;
    end
end


endmodule
