module ysyx_23060332_top (
    input clk,
    input rst,
    input [31:0] inst,

    output [31:0] pc
);

wire [4:0] rs1;
wire [4:0] rd;
wire [11:0] imm;
wire [31:0] rdata;
wire [31:0] wdata;
wire wen;

ysyx_23060332_pc  ysyx_23060332_pc_inst (
    .clk(clk),
    .rst(rst),
    .pc(pc)
);

ysyx_23060332_idu  ysyx_23060332_idu_inst (
    .inst(inst),
    .rd(rd),
    .rs1(rs1),
    .imm(imm)
);

ysyx_23060332_alu  ysyx_23060332_alu_inst (
    .rdata(rdata),
    .imm(imm),
    .inst(inst),
    .wdata(wdata),
    .wen(wen)
);

ysyx_23060332_reg  ysyx_23060332_reg_inst (
    .clk(clk),
    .rst(rst),
    .rs1(rs1),
    .rd(rd),
    .wen(wen),
    .wdata(wdata),
    .rdata(rdata)
);

    
endmodule
