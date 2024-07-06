module ysyx_23060332_idu (
    input wire [31:0] inst,

    output reg [4:0] rd,
    output reg [4:0] rs1,
    output reg [11:0] imm
    // output reg wen
);

wire    [6:0]   opcode_r=   inst[6:0];
wire    [4:0]   rd_r    =   inst[11:7];
wire    [2:0]   func3_r =   inst[14:12];
wire    [4:0]   rs1_r   =   inst[19:15];
wire    [11:0]  imm_r   =   inst[31:20];

import "DPI-C" function void npc_trap();

always @(*) begin
    if ((opcode_r == 7'b0010011) && (func3_r == 3'b000)) begin
        rd = rd_r;
        rs1 = rs1_r;
        imm = imm_r;
        // wen = 1'b1;
    end
    else if ((opcode_r == 7'b1110011) && (imm_r == 12'b000000000001)) begin
        npc_trap();
    end
    else begin
        rd = 0;
        rs1 = 0;
        imm = 0;
        // wen = 0;
    end
end
    
endmodule
