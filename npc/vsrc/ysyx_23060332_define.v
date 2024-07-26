//Global
`define InstBus     31:0
`define InstAddrBus 31:0
`define RegDataBus  31:0
`define RegAddrBus  4:0
`define MemDataBus  31:0
`define MemAddrBus  31:0
`define ZeroReg     5'b0
`define ZeroWord    32'h0
`define ReadDisable     1'b0
`define ReadEnable      1'b1  

//Reg
`define WriteDisable    1'b0
`define WriteEnable     1'b1  

//Pc
`define JumpDisable     1'b0
`define JumpEnable      1'b1

//R-Type
`define INST_TYPE_R 7'b0110011
`define INST_ADD_SUB    3'b000
`define INST_SLL    3'b001
`define INST_SLT    3'b010
`define INST_SLTU   3'b011

//I-Type Load
`define INST_TYPE_L 7'b0000011
`define INST_LB     3'b000
`define INST_LH     3'b001
`define INST_LW     3'b010

//I-Type Imm
`define INST_TYPE_I 7'b0010011
`define INST_ADDI   3'b000
`define INST_SLTI   3'b010
`define INST_SLTIU  3'b011
`define INST_XORI   3'b100
`define INST_ORI    3'b110
`define INST_ANDI   3'b111

//S-Type
`define INST_TYPE_S 7'b0100011
`define INST_SW     3'b010

//B-Type
`define INST_TYPE_B 7'b1100011
`define INST_BEQ    3'b000

//J-Type


//Other
`define INST_LUI    7'b0110111
`define INST_AUIPC  7'b0010111
`define INST_JAL    7'b1101111
`define INST_JALR   7'b1100111
`define INST_EBREAK 32'h00100073
`define INST_NOP    32'h0