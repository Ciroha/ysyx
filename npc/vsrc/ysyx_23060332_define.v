//Global
`define InstBus     31:0
`define InstAddrBus 31:0
`define RegDataBus  31:0
`define RegAddrBus  4:0
`define ZeroReg     5'b0
`define ZeroWord    32'h0

//Reg
`define WriteDisable    1'b0
`define WriteEnable     1'b1  

//Pc
`define JumpDisable     1'b0
`define JumpEnable      1'b1

//R-Type
`define INST_TYPE_R 7'b0110011

//I-Type Load
`define INST_TYPE_L 7'b0000011

//I-Type Imm
`define INST_TYPE_I 7'b0010011
`define INST_ADDI   3'b000

//S-Type
`define INST_TYPE_S 7'b0100011
`define INST_SW     3'b010

//B-Type
`define INST_TYPE_B 7'b1100011

//J-Type


//Other
`define INST_LUI    7'b0110111
`define INST_AUIPC  7'b0010111
`define INST_JAL    7'b1101111
`define INST_JALR   7'b1100111
`define INST_EBREAK 32'h00100073
`define INST_NOP    32'h0