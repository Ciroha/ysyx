`include "ysyx_23060332_define.v"
module ysyx_23060332_top (
    input clk,
    input rst,
    // input [`InstBus]        inst,
    // input [`InstAddrBus]    pc_i,

    output [`InstAddrBus]   pc
);

//pc
wire [`InstAddrBus] jump_addr;
wire                jump_en;

//id
wire [`InstAddrBus] inst_addr;
/* verilator lint_off UNOPTFLAT */
wire [`RegDataBus]  reg_rdata1;
/* verilator lint_on UNOPTFLAT */
wire [`RegDataBus]  reg_rdata2;
wire [`InstBus]     inst;

//ex
wire [`RegDataBus]  op1;
wire [`RegDataBus]  op2;
wire [`RegDataBus]  op1_jump;
wire [`RegDataBus]  op2_jump;
wire                id_ex_reg_wen;
wire [`RegAddrBus]  id_ex_waddr;
wire [`InstBus]     id_ex_inst;
wire [`RegDataBus]  id_ex_reg_rdata1;
wire [`RegDataBus]  id_ex_reg_rdata2;

//reg
/* verilator lint_off UNOPTFLAT */
wire [`RegAddrBus]  raddr1;
/* verilator lint_on UNOPTFLAT */
wire [`RegAddrBus]  raddr2;
wire [`RegAddrBus]  ex_reg_waddr;
wire [`RegDataBus]  ex_reg_wdata;
wire                ex_reg_reg_wen;

//mem
wire                mem_wen;
wire [`MemAddrBus]  mem_waddr;
wire [`MemDataBus]  mem_wdata;
wire [7:0]          mem_wmask;
wire [`MemAddrBus]  mem_raddr;
wire [`MemDataBus]  mem_rdata;



ysyx_23060332_pc  ysyx_23060332_pc_inst (
    .clk(clk),
    .rst(rst),
    .jump_addr(jump_addr),
    .jump_en(jump_en),
    .pc(pc),
    .inst_o(inst),
    .inst_addr(inst_addr)
  );

  ysyx_23060332_idu  ysyx_23060332_idu_inst (
    .inst_i(inst),
    .inst_addr(inst_addr),
    .reg_rdata1_i(reg_rdata1),
    .reg_rdata2_i(reg_rdata2),
    .op1(op1),
    .op2(op2),
    .op1_jump(op1_jump),
    .op2_jump(op2_jump),
    .reg_rdata1_o(id_ex_reg_rdata1),
    .reg_rdata2_o(id_ex_reg_rdata2),
    .reg_wen(id_ex_reg_wen),
    .waddr(id_ex_waddr),
    .inst_o(id_ex_inst),
    .raddr1(raddr1),
    .raddr2(raddr2)
  );

  ysyx_23060332_exu  ysyx_23060332_exu_inst (
    .op1(op1),
    .op2(op2),
    .op1_jump(op1_jump),
    .op2_jump(op2_jump),
    .reg_rdata1_i(id_ex_reg_rdata1),
    .reg_rdata2_i(id_ex_reg_rdata2),
    .reg_wen_i(id_ex_reg_wen),
    .waddr_i(id_ex_waddr),
    .inst_i(id_ex_inst),
    .mem_rdata(mem_rdata),
    .jump_addr(jump_addr),
    .jump_en(jump_en),
    .mem_wen(mem_wen),
    .mem_waddr(mem_waddr),
    .mem_wdata(mem_wdata),
    .mem_wmask(mem_wmask),
    .mem_raddr(mem_raddr),
    .waddr_o(ex_reg_waddr),
    .wdata(ex_reg_wdata),
    .reg_wen_o(ex_reg_reg_wen)
  );

  ysyx_23060332_reg  ysyx_23060332_reg_inst (
    .clk(clk),
    .rst(rst),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .waddr(ex_reg_waddr),
    .wdata(ex_reg_wdata),
    .reg_wen(ex_reg_reg_wen),
    .reg_rdata1(reg_rdata1),
    .reg_rdata2(reg_rdata2)
  );

  ysyx_23060332_mem  ysyx_23060332_mem_inst (
    .clk(clk),
    .mem_wen(mem_wen),
    .mem_waddr(mem_waddr),
    .mem_wdata(mem_wdata),
    .mem_wmask(mem_wmask),
    .mem_rdata(mem_rdata),
    .mem_raddr(mem_raddr)
  );
    
endmodule
