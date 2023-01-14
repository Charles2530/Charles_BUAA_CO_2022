#Verilog流水线CPU设计文档

###一、 CPU设计方案综述

####（一） 总体设计概述

使用Verilog开发一个简单的流水线CPU，总体概述如下：

1. 此CPU为32位CPU

2. 此CPU为流水线设计

3. 此CPU支持的指令集为：

   mips-c指令集所有指令

4. add, sub不支持溢出

####（二） 关键模块定义

![img](./image/simple_cpu.png)

## 主代码mips

```verilog
`timescale 1ns / 1ps
`include "macro.v"
module mips(input clk,
            input reset,
            input interrupt,
            input [31:0] i_inst_rdata,//IM_RD
            input [31:0] m_data_rdata,//DM_RD

            output [31:0] macroscopic_pc,//PC
            output [31:0] i_inst_addr,//IM_Address
            output [31:0] m_data_addr,//DM_Address
            output [31:0] m_data_wdata,//DM_WD
            output [3:0] m_data_byteen,//DM_en
            output [31:0] m_int_addr,//Int_Address
            output [3:0] m_int_byteen,//Int_en
            output [31:0] m_inst_addr,//M_PC
            output w_grf_we,//Grf_en
            output [4:0] w_grf_addr,//Grf_Address
            output [31:0] w_grf_wdata,//Grf_WD
            output [31:0] w_inst_addr//W_PC
            );
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////cpu
    wire inter_T0,inter_T1;
    //Bridge
    wire [31:0] WD_out,RD_out;
    wire [31:0] Address_out;
    wire [3:0] DM_en;
    wire T0_WE,T1_WE;
    //TC
    wire [31:2] TC_Addr;
    wire [31:0] T0_RD,T1_RD;
    assign TC_Addr=Address_out[31:2];
    //interrupt
    //cpu
    cpu cpu (
    .clk(clk), //
    .reset(reset),// 
    .interrupt(interrupt), //
    .inter_T0(inter_T0), //
    .inter_T1(inter_T1), //

    .i_inst_rdata(i_inst_rdata),// 
    .Rdata(RD_out), //dm_read_data

    .macroscopic_pc(macroscopic_pc),//
    .i_inst_addr(i_inst_addr),// 
    .m_data_addr(m_data_addr), //
    .m_data_wdata(m_data_wdata), //dm_write_data
    .Byteen(m_data_byteen),// 
    .m_int_addr(m_int_addr),//Int_Address
    .m_int_byteen(m_int_byteen),//Int_en
    .m_inst_addr(m_inst_addr), 
    .w_grf_we(w_grf_we), //
    .w_grf_addr(w_grf_addr), //
    .w_grf_wdata(w_grf_wdata), //
    .w_inst_addr(w_inst_addr)//
    );

    //Bridge
    Bridge bridge (
    .Address_in(m_int_addr), 
    .WD_in(m_data_wdata), 
    .byteen(m_data_byteen), 
    .DM_RD(m_data_rdata), //
    .T0_RD(T0_RD), 
    .T1_RD(T1_RD),

    .DM_WE(DM_en),
    .T0_WE(T0_WE), 
    .T1_WE(T1_WE), 
    .Address_out(Address_out), 
    .WD_out(WD_out), //DM
    .RD_out(RD_out)
    );


    ////T0
    TC T0 (
    .clk(clk), 
    .reset(reset), 
    .Addr(TC_Addr), 
    .WE(T0_WE), 
    .Din(WD_out), 

    .Dout(T0_RD), 
    .IRQ(inter_T0)
    );

    ////T1
    TC T1 (
    .clk(clk), 
    .reset(reset), 
    .Addr(TC_Addr), 
    .WE(T1_WE), 
    .Din(WD_out), 

    .Dout(T1_RD), 
    .IRQ(inter_T1)
    );

endmodule
```



##宏的定义

```verilog
`timescale 1ns / 1ps
//alu
`define _ADD    12'b000000000001
`define _SUB    12'b000000000010
`define _AND    12'b000000000100
`define _OR     12'b000000001000
`define _XOR    12'b000000010000
`define _NOR    12'b000000100000
`define _SLL    12'b000001000000
`define _SRA    12'b000010000000
`define _SRL    12'b000100000000
`define _SLT    12'b001000000000
`define _SLTU   12'b010000000000
`define _ALUNew 12'b100000000000
//ifu
`define PC_Initial 32'h0000_3000
//ext
`define Zero_Ext 3'b001
`define Sign_Ext 3'b010
`define Lui_Ext  3'b100
//NPC
`define PC4_NPC         5'b00001
`define B_transfer_NPC  5'b00010
`define J_transfer_NPC  5'b00100
`define Jr_NPC          5'b01000
`define NEW_NPC         5'b10000
//Controller_for_Reg
`define ALUop_Initial       7'b0000001
`define AluSrc1_Initial     4'b0001
`define AluSrc2_Initial     4'b0001
`define WhichtoReg_Initial  8'b00000001
`define RegDst_Initial      4'b0001
`define DM_type_Initial     6'b000001
//DM
`define Word_DM           6'b000001
`define Half_DM           6'b000010
`define Byte_DM           6'b000100
`define Unsigned_Half_DM  6'b001000
`define Unsigned_Byte_DM  6'b010000
//B_transfer
`define nop_B_trans   4'b0000
`define beq_B_trans   4'b0001
`define bgez_B_trans  4'b0010
`define bgtz_B_trans  4'b0011
`define blez_B_trans  4'b0100
`define bltz_B_trans  4'b0101
`define bne_B_trans   4'b0110
//MD_Unit
`define nop_MDU   4'b0000
`define mult_MDU  4'b0001
`define multu_MDU 4'b0010
`define div_MDU   4'b0011
`define divu_MDU  4'b0100
`define mfhi_MDU  4'b0101
`define mflo_MDU  4'b0110
`define mthi_MDU  4'b0111
`define mtlo_MDU  4'b1000
//TC
`define IDLE 2'b00
`define LOAD 2'b01
`define CNT  2'b10
`define INT  2'b11
`define ctrl   mem[0]
`define preset mem[1]
`define count  mem[2]
//CP0
`define IM      SR[15:10]
`define EXL     SR[1]
`define IE      SR[0]
`define BD      Cause[31]
`define IP      Cause[15:10]
`define ExcCode Cause[6:2]
`define SR_Address    5'd12
`define Cause_Address 5'd13
`define EPC_Address   5'd14
//Bridge
`define Data_Begin    32'h0000_0000
`define Data_End      32'h0000_2fff
`define Text_Begin    32'h0000_3000
`define Text_End      32'h0000_6fff
`define Error_Entry   32'h0000_4180
`define T0_Begin      32'h0000_7f00
`define T0_End        32'h0000_7f0b
`define T1_Begin      32'h0000_7f10
`define T1_End        32'h0000_7f1b
`define Echo_Begin    32'h0000_7f20
`define Echo_End      32'h0000_7f23
//Error_Stream
`define Error_Int     5'd0
`define Error_AdEL    5'd4
`define Error_AdES    5'd5
`define Error_Syscall 5'd8
`define Error_RI      5'd10
`define Error_Ov      5'd12
```

## CPU模块

```verilog
`timescale 1ns / 1ps
`include "macro.v"
module cpu( input clk,
            input reset,
            input interrupt,
            input inter_T0,
            input inter_T1,

            input [31:0] i_inst_rdata,
            input [31:0] Rdata,

            output [31:0] macroscopic_pc,
            output [31:0] i_inst_addr,
            output [31:0] m_data_addr,
            output [31:0] m_data_wdata,
            output [3:0] Byteen,
            output [31:0] m_int_addr,//Int_Address
            output [3:0] m_int_byteen,//Int_en
            output [31:0] m_inst_addr,
            output w_grf_we,
            output [4:0] w_grf_addr,
            output [31:0] w_grf_wdata,
            output [31:0] w_inst_addr
            // output visited
            );
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //datapath_for_wire_and_reg
    //datapath
    wire stall;
    //IFU
    wire en_PC;
	 wire [31:0] pc_in;
    wire [31:0] npc;
    wire [31:0] F_Instr;
    wire [31:0] F_PC;
    wire [31:0] F_PC_origin;
    
    //IF_ID
    wire [31:0] D_Instr;
    wire [31:0] D_PC;
    wire F_reg_clr;
    wire [4:0] f_ExcCode_in;
    wire [4:0] d_ExcCode_in;
    wire f_BD,d_BD;
    wire f_syscall;
    ///////////////////////////////////////////////////
    //Grf
    wire [4:0]  d_rs;
    wire [4:0]  d_rt;
    wire [4:0]  d_A3;
    wire [31:0] d_RD1;
    wire [31:0] d_RD2;
    //EXT
    wire [2:0] d_SignExt;
    //NPC
    wire [31:0] ra;
    wire [31:0] d_imm32;
    wire [25:0] d_J_address;
    wire [4:0]  d_branch;
    wire [31:0] D_PC8;
    wire d_ALU_change;
    //B_transfer
    wire [31:0] d_b_transfer1;
    wire [31:0] d_b_transfer2;
    wire [3:0] d_B_change;
    //Controller
    wire d_Wegrf_origin;
    wire [5:0] d_opcode;
    wire [5:0] d_func;
    wire [4:0] d_rd;
    wire [4:0] d_shamt;
    wire [15:0] d_imm16;
    wire [11:0] d_ALUop;
    wire d_Wegrf;
    wire d_WeDm;
    wire [3:0] d_AluSrc1;
    wire [3:0] d_AluSrc2;
    wire [7:0] d_WhichtoReg;
    wire [3:0] d_RegDst;
    wire [5:0] d_DM_type;
    wire d_check_new;
    wire d_excRI;
    wire d_mfc0,d_mtc0,d_eret,d_syscall;
    //ID_EX
    wire [4:0]  e_branch;
    wire [4:0] d_ExcCode_fixed;
    wire [4:0] e_ExcCode_in;
    wire [1:0] d_Tnew;
    wire [31:0] e_RD1;
    wire [31:0] e_RD2;
    wire [4:0] e_shamt;
    wire [4:0] e_rs,e_rt,e_rd;
    wire [4:0]  e_A3;
    wire [31:0] e_imm32;
    wire [31:0] E_PC;
    wire [31:0] E_PC8;
    wire [1:0] e_Tnew;
    wire e_Wegrf;
    wire e_WeDm;
    wire [11:0] e_ALUop;
    wire [3:0] e_AluSrc1;
    wire [3:0] e_AluSrc2;
    wire [7:0] e_WhichtoReg;
    wire [3:0] e_RegDst;
    wire [5:0] e_DM_type;
    wire e_check_new;
    wire e_ALU_change;
    wire e_BD;
    wire d_mdu_en;
    wire e_mfc0,e_mtc0,e_eret,e_syscall;
    ///////////////////////////////////////////////////
    //ALU
    wire [31:0] e_A;
    wire [31:0] e_B;
    wire [31:0] res;
    //MD_Unit
    wire [3:0] d_MDop,e_MDop;
    wire [31:0] HI,LO;
    wire [31:0] mdu_out;
    wire mdu_en,busy;
    //EX_MEM
    wire [4:0]  m_branch;
    wire [4:0] e_ExcCode_fixed;
    wire [4:0] m_ExcCode_in;
    wire [31:0] e_res;
    wire [31:0] m_RD2;
    wire [31:0] m_res;
    wire [4:0]  m_A3;
    wire [4:0] m_rd;
    wire [4:0] m_rt;
    wire [31:0] M_PC;
    wire [31:0] M_PC8;
    wire [1:0] m_Tnew;
    wire m_Wegrf;
    wire m_Wegrf_origin;
    wire m_WeDm;
    wire m_WeDm_origin;
    wire [7:0] m_WhichtoReg;
    wire [3:0] m_RegDst;
    wire [5:0] m_DM_type;
    wire m_check_new;
    wire [31:0] m_imm32;
    wire m_ALU_change;
    wire m_mfc0,m_mtc0,m_eret,m_syscall;
    wire m_BD;
    //////////////////////////////////////////////////////
    //DM
    wire [31:0] m_Address;
    wire [31:0] m_RD;
    wire [1:0] low2;
    wire [3:0] data_byteen ;
    wire [31:0] DM_input,DM_output;
    //CP0
    wire CP0_WE;
    wire [4:0] CP0_Address;
    wire [31:0] CP0_WD;
    wire BD_in;
    wire [31:0] VPC;
    wire [4:0] m_ExcCode_fixed;
    wire [7:2] HWInt;
    wire EXLClr;
    wire req;
    wire [31:0] EPC;
    wire [31:0] CP0_D_out;
    //MEM_WB
    wire [1:0] w_Tnew;
    wire [4:0]  w_A3;
    wire [31:0] w_res;
    wire [31:0] w_RD;
    wire [31:0] W_PC;
    wire [31:0] W_PC8;
    wire w_Wegrf;
    wire [7:0] w_WhichtoReg;
    wire [3:0] w_RegDst;
    wire [31:0] w_imm32;
    wire w_ALU_change;
    wire [4:0] m_A3_origin;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //main_part
    wire [1:0] D_Tuse_rs,D_Tuse_rt;
    wire [2:0] d_SelB_D1,d_SelB_D2;
    wire [2:0] d_SelALU_A,d_SelALU_B;
    wire d_SelDM;
    wire is_nop;
    wire [1:0] d_SelJr;
    wire [31:0] e_A_f,e_B_f;
    wire [31:0] M_WD_f;//DM
    wire [31:0] ED,MD,WD;
    //HazardUnit
    assign  is_nop=(D_Instr==0);
    HazardUnit hzu(
    .D_A1(d_rs),
    .D_A2(d_rt),
    .E_A1(e_rs),
    .E_A2(e_rt),
    .M_A2(m_rt),
    .E_A3(e_A3),
    .M_A3(m_A3),
    .W_A3(w_A3),
    .E_Wegrf(e_Wegrf),
    .M_Wegrf(m_Wegrf),
    .W_Wegrf(w_Wegrf),
    .D_check_new(d_check_new),
    .E_check_new(e_check_new),
    .M_check_new(m_check_new),
    
    
    .D_Tuse_rs(D_Tuse_rs),
    .D_Tuse_rt(D_Tuse_rt),
    .E_Tnew(e_Tnew),
    .M_Tnew(m_Tnew),
    .W_Tnew(w_Tnew),
    .E_WhichtoReg(e_WhichtoReg),
    .M_WhichtoReg(m_WhichtoReg),
    .start(mdu_en),
    .busy(busy),
    .MDU_en(d_mdu_en),
    .Is_nop(is_nop),

    .D_eret(d_eret),
    .E_mtc0(e_mtc0),
    .M_mtc0(m_mtc0),
    
    .SelB_D1(d_SelB_D1),
    .SelB_D2(d_SelB_D2),
    .SelALU_A(d_SelALU_A),
    .SelALU_B(d_SelALU_B),
    .SelDM(d_SelDM),
    .stall(stall)
    );
    //////////////////////////////////////////////F//////////////////////////////////////////////////////////////////////////////////////////
	 assign pc_in=(d_eret)?EPC+4:
                (req)?`Error_Entry:
                npc;
    // assign en_PC=~stall||m_eret||req;
    assign en_PC=~stall||req;
    //IFU
    PC pc(
    .clk(clk),
    .reset(reset),
    .NPC(pc_in),
    .en(en_PC),
    
    .PC(F_PC_origin)
    );
    wire F_error_range;
    assign F_Instr=(F_error_range)?0:i_inst_rdata;
    /////////////////////EXCEPTION/////////////////////////
    assign f_syscall=(F_Instr[31:26] == 6'b000000)&&(F_Instr[5:0] == 6'b001100);
    assign F_error_range=((F_PC<`Text_Begin)||(F_PC>`Text_End)||(|F_PC[1:0]))&&(!d_eret);
    assign f_ExcCode_in=(F_error_range)?`Error_AdEL:
                        (f_syscall)?`Error_Syscall:
                        5'd0;
    assign f_BD=(d_branch!=5'd1);
    ///////////////////////////////////////////////////////
    //IF_ID
    // assign F_reg_clr=d_check_new&&~d_ALU_change&&~stall;
    assign F_reg_clr=1'b0;
    assign F_PC=(d_eret)?EPC:F_PC_origin;
    IF F_reg(
    .clk(clk),
    .reset(reset),
    .en(en_PC),
    .clr(F_reg_clr),
    .req(req),
    .F_Instr(F_Instr),
    .F_PC(F_PC),
    .F_ExcCode(f_ExcCode_in),
    .F_BD(f_BD),
    
    .D_Instr(D_Instr),
    .D_PC(D_PC),
    .D_ExcCode(d_ExcCode_in),
    .D_BD(d_BD)
    );
    //////////////////////////////////////////////D//////////////////////////////////////////////////////////////////////////////////////////
    //Grf
    GRF grf(
    .A1(d_rs),
    .A2(d_rt),
    .A3(w_A3),
    .WD(WD),
    .clk(clk),
    .reset(reset),
    .WE(w_Wegrf),
    .WPC(W_PC),
    
    .RD1(d_RD1),
    .RD2(d_RD2)
    );
    //EXT
    EXT ext(
    .imm16(d_imm16),
    .sign(d_SignExt),
    
    .imm32(d_imm32)
    );
    //NPC
    assign ra = d_b_transfer1;
    //
    NPC Npc(
    .F_PC(F_PC),
    .D_PC(D_PC),
    .offset(d_imm32),
    .imm26(d_J_address),
    .ra(ra),
    .rt(d_b_transfer2),
    .branch(d_branch),
    .ALU_change(d_ALU_change),
    
    .npc(npc),
    .PC8(D_PC8)
    );
    //B_transfer
    assign d_b_transfer1 =  (d_SelB_D1 == 3'b000)?d_RD1:
                            (d_SelB_D1 == 3'b001)?WD:
                            (d_SelB_D1 == 3'b010)?MD:
                            ED;
    assign d_b_transfer2 =  (d_SelB_D2 == 3'b000)?d_RD2:
                            (d_SelB_D2 == 3'b001)?WD:
                            (d_SelB_D2 == 3'b010)?MD:
                            ED;
    B_transfer b_trans(
    .A(d_b_transfer1),
    .B(d_b_transfer2),
    .Type(d_B_change),
    
    .ALU_change(d_ALU_change)
    );
    //controller
    assign 	d_opcode    = D_Instr[31:26];
    assign 	d_rs        = D_Instr[25:21];
    assign 	d_rt        = D_Instr[20:16];
    assign 	d_rd        = D_Instr[15:11];
    assign 	d_shamt     = D_Instr[10:6];
    assign 	d_func      = D_Instr[5:0];
    assign 	d_imm16     = D_Instr[15:0];
    assign 	d_J_address = D_Instr[25:0];
    Controller controller(
    .op(d_opcode),
    .func(d_func),
    .rs(d_rs),
    .rt(d_rt),
    
    .ALUop(d_ALUop),
    .Wegrf(d_Wegrf),
    .WeDm(d_WeDm),
    .branch(d_branch),
    .AluSrc1(d_AluSrc1),
    .AluSrc2(d_AluSrc2),
    .WhichtoReg(d_WhichtoReg),
    .RegDst(d_RegDst),
    .SignExt(d_SignExt),
    .B_change(d_B_change),
    .DM_type(d_DM_type),
    .MDop(d_MDop),
    .check_new(d_check_new),
    .excRI(d_excRI),
    
    .D_Tuse_rs(D_Tuse_rs),
    .D_Tuse_rt(D_Tuse_rt),
    .D_Tnew(d_Tnew),

    .mfc0(d_mfc0),
    .mtc0(d_mtc0),
    .eret(d_eret),
    .syscall(d_syscall)
    );

    // assign d_Wegrf=d_check_new&&(d_branch!=`PC4_NPC)?(d_ALU_change?1'b1:1'b0):d_Wegrf_origin;
    assign d_Wegrf=d_Wegrf_origin;
    //submit for branch
    //////////////////////////////EXCEPTION/////////////////////////////////
    assign d_ExcCode_fixed= (d_excRI)?`Error_RI:
                            d_ExcCode_in;
    ////////////////////////////////////////////////////////////////////////
    //ID_EX
    ID D_reg(
    .clk(clk),
    .reset(reset),
    .clr(stall),
    .req(req),
    .D_RD1(d_b_transfer1),
    .D_RD2(d_b_transfer2),
    .D_instr_s(d_shamt),
    .D_A1(d_rs),
    .D_A2(d_rt),
    .D_A3(d_rd),
    .D_imm32(d_imm32),
    .D_PC(D_PC),
    .D_PC8(D_PC8),
    .D_Tnew(d_Tnew),
    .D_Wegrf(d_Wegrf),
    .D_WeDm(d_WeDm),
    .D_ALUop(d_ALUop),
    .D_AluSrc1(d_AluSrc1),
    .D_AluSrc2(d_AluSrc2),
    .D_WhichtoReg(d_WhichtoReg),
    .D_RegDst(d_RegDst),
    .D_DM_type(d_DM_type),
    .D_ALU_change(d_ALU_change),
    .D_MDop(d_MDop),
    .D_check_new(d_check_new),
    .D_branch(d_branch),
    .D_ExcCode(d_ExcCode_fixed),
    .D_BD(d_BD),
    .D_mfc0(d_mfc0),
    .D_mtc0(d_mtc0),
    .D_eret(d_eret),
    .D_syscall(d_syscall),
    
    .E_RD1(e_RD1),
    .E_RD2(e_RD2),
    .E_instr_s(e_shamt),
    .E_A1(e_rs),
    .E_A2(e_rt),
    .E_A3(e_rd),
    .E_imm32(e_imm32),
    .E_PC(E_PC),
    .E_PC8(E_PC8),
    .E_Tnew(e_Tnew),
    .E_Wegrf(e_Wegrf),
    .E_WeDm(e_WeDm),
    .E_ALUop(e_ALUop),
    .E_AluSrc1(e_AluSrc1),
    .E_AluSrc2(e_AluSrc2),
    .E_WhichtoReg(e_WhichtoReg),
    .E_RegDst(e_RegDst),
    .E_DM_type(e_DM_type),
    .E_ALU_change(e_ALU_change),
    .E_MDop(e_MDop),
    .E_check_new(e_check_new),
    .E_branch(e_branch),
    .E_ExcCode(e_ExcCode_in),
    .E_BD(e_BD),
    .E_mfc0(e_mfc0),
    .E_mtc0(e_mtc0),
    .E_eret(e_eret),
    .E_syscall(e_syscall)
    );
    assign d_mdu_en=(d_MDop!=`nop_MDU);
    //////////////////////////////////////////////E//////////////////////////////////////////////////////////////////////////////////////////
    assign 	e_A3 =  (e_RegDst == 4'b0001)?e_rd:
                    (e_RegDst == 4'b0010)?e_rt:
                    5'b11111;
    //ALU
    assign e_A = 	(e_AluSrc1 == 4'b0001)?e_A_f://
                  e_B_f;
    
    assign e_A_f =  (d_SelALU_A == 3'b010)?MD:
                    (d_SelALU_A == 3'b001)?WD:
                    e_RD1;//rs
    assign e_B_f =  (d_SelALU_B == 3'b010)?MD:
                    (d_SelALU_B == 3'b001)?WD:
                    e_RD2;//rt
    
    
    assign e_B = 	(e_AluSrc2 == 4'b0001)?e_B_f:
                  (e_AluSrc2 == 4'b0010)?e_imm32://
                  (e_AluSrc2 == 4'b0100)?({{27{1'b0}},e_shamt}):
                  e_A_f;
    ///////////EXCEPTION////////////////////
    wire Error_Ov_Alu;
    assign Error_Ov_Alu=overflow&&(e_DM_type==6'd0);
    wire Error_Ov_DM;
    assign Error_Ov_DM=overflow&&(e_DM_type!=6'd0);
    assign e_ExcCode_fixed= (Error_Ov_DM)?((e_WeDm)?`Error_AdES:`Error_AdEL):
                            (Error_Ov_Alu)?`Error_Ov:
                            e_ExcCode_in;
    ///////////////////////////////////////
    ALU alu(
    .A(e_A),
    .B(e_B),
    .ALUop(e_ALUop),
    
    .res(res),
    .overflow(overflow)
    );
    //MD_Unit
    assign mdu_en=(e_MDop==`mult_MDU)||(e_MDop==`multu_MDU)||
                  (e_MDop==`div_MDU)||(e_MDop==`divu_MDU);
    MD_Unit mdu (
    .clk(clk), 
    .reset(reset), 
    .en(mdu_en),
    .req(req), 
    .MDop(e_MDop), 
    .A(e_A), 
    .B(e_B),

    .HI(HI), 
    .LO(LO), 
    .out(mdu_out), 
    .busy(busy)
    );
    assign e_res=(e_MDop==`mfhi_MDU||e_MDop==`mflo_MDU)?mdu_out:
                                                        res;
    //EX_MEM
    assign 	ED =  (e_WhichtoReg == 8'b0000_0001)?e_res:
                  // (e_WhichtoReg == 8'b0000_0010)?e_RD:
                  (e_WhichtoReg == 8'b0000_0100)?e_imm32:
                  (e_WhichtoReg == 8'b0000_1000)?E_PC8:
                  e_ALU_change;//
    EX E_reg(
    .clk(clk),
    .reset(reset),
    .req(req),
    .E_A2(e_rt),
    .E_rd(e_rd),
    .E_A3(e_A3),
    .E_RD2(e_B_f),
    .E_ALUout(e_res),
    .E_PC(E_PC),
    .E_PC8(E_PC8),
    .E_Tnew(e_Tnew),
    .E_Wegrf(e_Wegrf),
    .E_WeDm(e_WeDm),
    .E_WhichtoReg(e_WhichtoReg),
    .E_RegDst(e_RegDst),
    .E_DM_type(e_DM_type),
    .E_imm32(e_imm32),
    .E_ALU_change(e_ALU_change),
    .E_check_new(e_check_new),
    .E_branch(e_branch),
    .E_ExcCode(e_ExcCode_fixed),
    .E_BD(e_BD),
    .E_mfc0(e_mfc0),
    .E_mtc0(e_mtc0),
    .E_eret(e_eret),
    .E_syscall(e_syscall),

    .M_A2(m_rt),
    .M_A3(m_A3_origin),
    .M_rd(m_rd),
    .M_RD2(m_RD2),
    .M_ALUout(m_res),
    .M_PC(M_PC),
    .M_PC8(M_PC8),
    .M_Tnew(m_Tnew),
    .M_Wegrf(m_Wegrf_origin),
    .M_WeDm(m_WeDm_origin),
    .M_WhichtoReg(m_WhichtoReg),
    .M_RegDst(m_RegDst),
    .M_DM_type(m_DM_type),
    .M_imm32(m_imm32),
    .M_ALU_change(m_ALU_change),
    .M_check_new(m_check_new),
    .M_branch(m_branch),
    .M_ExcCode(m_ExcCode_in),
    .M_BD(m_BD),
    .M_mfc0(m_mfc0),
    .M_mtc0(m_mtc0),
    .M_eret(m_eret),
    .M_syscall(m_syscall)
    );
    //////////////////////////////////////////////M//////////////////////////////////////////////////////////////////////////////////////////
    //DM
    assign m_Address = m_res;
    assign M_WD_f    =  (d_SelDM)?WD:
                        m_RD2;
    assign m_WeDm=(req)?0:m_WeDm_origin;
    //////////////////////////////////////////EXCEPTION///////////////////////
    wire is_DM;
    assign is_DM=(m_DM_type==`Word_DM)||(m_DM_type==`Half_DM)||(m_DM_type==`Unsigned_Half_DM)||(m_DM_type==`Byte_DM)||(m_DM_type==`Unsigned_Byte_DM);
    wire Is_Align;
    assign Is_Align=((m_DM_type==`Word_DM)&&(|low2))||
                    ((m_DM_type==`Half_DM||m_DM_type==`Unsigned_Half_DM)&&(low2[0]));
    wire Is_ErrorRange;
    assign Is_ErrorRange=!((m_Address>=`Data_Begin&&m_Address<=`Data_End)||
                          (m_Address >= `T0_Begin&&m_Address <= `T0_End)||
                          (m_Address >= `T1_Begin&&m_Address <= `T1_End)||
                          (m_Address >= `Echo_Begin&&m_Address <= `Echo_End));
    wire Error_Timer;
    assign Error_Timer=(m_DM_type!=`Word_DM)&&((m_Address >= `T0_Begin&&m_Address <= `T0_End)||
                          (m_Address >= `T1_Begin&&m_Address <= `T1_End));
    wire Error_Save_Timer;
    assign Error_Save_Timer=(m_Address>=32'h0000_7f08&&m_Address<=32'h0000_7f0b)||
                            (m_Address>=32'h0000_7f18&&m_Address<=32'h0000_7f1b);
    assign m_ExcCode_fixed=((is_DM&&Is_Align&&!m_WeDm_origin)||(is_DM&&Is_ErrorRange&&!m_WeDm_origin)||(is_DM&&Error_Timer&&!m_WeDm_origin))?`Error_AdEL:
                           ((is_DM&&Is_Align&&m_WeDm_origin)||(is_DM&&Is_ErrorRange&&m_WeDm_origin)||(is_DM&&Error_Timer&&m_WeDm_origin)||(is_DM&&Error_Save_Timer&&m_WeDm_origin))?`Error_AdES:
                           m_ExcCode_in;
    //////////////////////////////////////////////////////////////////////////
    assign low2=m_Address[1:0];
    wire [31:0] m_Rd_origin;
    DM_In din(.low2(low2),
              .WD(M_WD_f),
              .DM_type(m_DM_type),

              .data_byteen(data_byteen),
              .DM_input(DM_input)
              );
    assign DM_output=Rdata;
    DM_Out dot( .low2(low2),
                .DM_type(m_DM_type),
                .DM_output(DM_output),

                .RD(m_Rd_origin));
    assign 	MD =  (m_WhichtoReg == 8'b0000_0001)?m_res:
                  // (m_WhichtoReg == 8'b0000_0010)?m_RD:
                  (m_WhichtoReg == 8'b0000_0100)?m_imm32:
                  (m_WhichtoReg == 8'b0000_1000)?M_PC8:
                  m_ALU_change;//
    assign m_A3=m_A3_origin;//condition
    wire condition;
    assign condition=1'b0;
    // assign m_A3=m_check_new?(condition?5'd31:m_A3_origin):m_A3_origin;//condition
    ///////provide for condition///////////////
    

    //////////////////////////////////////////
    //CP0
    assign CP0_WE=m_mtc0;
    assign CP0_Address=m_rd;
    assign CP0_WD=M_WD_f;
    assign BD_in=m_BD;
    assign VPC=(m_branch==5'b00001)?M_PC:D_PC;
    assign HWInt={3'd0,interrupt,inter_T1,inter_T0};
    assign EXLClr=m_eret;
    CP0 cp0 (
    .clk(clk), 
    .reset(reset), 
    .WE(CP0_WE), 
    .Address(CP0_Address), 
    .WD(CP0_WD), 
    .BD_in(BD_in), 
    .VPC(VPC), 
    .ExcCode_in(m_ExcCode_fixed), 
    .HWInt(HWInt), 
    .EXLClr(EXLClr), 
    .req(req), 
    .EPC(EPC), 
    .D_out(CP0_D_out)
    );
    assign m_RD=(m_mfc0)?CP0_D_out:m_Rd_origin;
    assign m_Wegrf=(req)?0:m_Wegrf_origin;
    //MEM_WE
    MEM M_reg(
    .clk(clk),
    .reset(reset),
    .M_A3(m_A3),
    .M_ALUout(m_res),
    .M_RD(m_RD),
    .M_PC(M_PC),
    .M_PC8(M_PC8),
    .M_Wegrf(m_Wegrf),
    .M_WhichtoReg(m_WhichtoReg),
    .M_RegDst(m_RegDst),
    .M_imm32(m_imm32),
    .M_ALU_change(m_ALU_change),
    .M_Tnew(m_Tnew),
    
    .W_A3(w_A3),
    .W_ALUout(w_res),
    .W_RD(w_RD),
    .W_PC(W_PC),
    .W_PC8(W_PC8),
    .W_Wegrf(w_Wegrf),
    .W_WhichtoReg(w_WhichtoReg),
    .W_RegDst(w_RegDst),
    .W_imm32(w_imm32),
    .W_ALU_change(w_ALU_change),
    .W_Tnew(w_Tnew)
    );
    //////////////////////////////////////////////W//////////////////////////////////////////////////////////////////////////////////////////
    assign 	WD =  (w_WhichtoReg == 8'b0000_0001)?w_res:
                  (w_WhichtoReg == 8'b0000_0010)?w_RD:
                  (w_WhichtoReg == 8'b0000_0100)?w_imm32:
                  (w_WhichtoReg == 8'b0000_1000)?W_PC8:
                  w_ALU_change;//
    // output/////////////////////////////////////////////////////////////////////////
    assign  macroscopic_pc= M_PC;
    assign  i_inst_addr   = (d_eret)?EPC:F_PC;
    assign  m_data_addr   = m_Address;
    assign  m_data_wdata  = DM_input;
    assign  Byteen        = (m_WeDm)?data_byteen:4'b0000;
    assign  m_int_addr    = m_Address;//Int_Address
    assign  m_int_byteen  = (m_WeDm)?data_byteen:4'b0000;//Int_en
    assign  m_inst_addr   = M_PC;
    assign  w_grf_we      = w_Wegrf;
    assign  w_grf_addr    = w_A3;
    assign  w_grf_wdata   = WD;
    assign  w_inst_addr   = W_PC;
    // assign  visited       = (m_data_addr==32'h7f20);

endmodule
```




## <一>.F级流水线

####1. PC

（1） 端口说明

<center>表1-IFU端口说明</center>

| 序号 | 信号名    | 方向 | 描述                                                        |
| ---- | --------- | ---- | ----------------------------------------------------------- |
| 1    | clk       | I    | 时钟信号                                                    |
| 2    | reset     | I    | 同步复位信号，将PC值置为0x0000_3000：<br>0：无效<br>1：复位 |
| 3    | en        | I    | 使能信号，决定是否阻塞                                      |
| 4    | NPC[31:0] | I    | 下一周期PC的地址                                            |
| 6    | PC[31:0]  | O    | 当前执行的PC                                                |


（2） 功能定义

<center>表2-IFU功能定义</center>

| 序号 | 功能       | 描述                          |
| ---- | ---------- | ----------------------------- |
| 1    | 复位       | reset有效时，PC置为0x00003000 |
| 2    | 更新PC的值 | 将PC赋值为NPC                 |



## <二>.D级流水线

####1. GRF

（1） 端口说明

<center>表3-GRF端口说明</center>

| 序号 | 信号名    | 方向 | 描述                                                         |
| ---- | --------- | ---- | ------------------------------------------------------------ |
| 1    | clk       | I    | 时钟信号                                                     |
| 2    | reset     | I    | 同步复位信号，将32个寄存器中全部清零<br>1：清零<br>0：无效   |
| 3    | WE        | I    | 写使能信号<br>1：可向GRF中写入数据<br>0：不能向GRF中写入数据 |
| 4    | A1[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个，将其中存储的数据读出到RD1 |
| 5    | A2[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个，将其中存储的数据读出到RD2 |
| 6    | A3[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个，作为RD的写入地址    |
| 7    | WD[31:0]  | I    | 32位写入数据                                                 |
| 8    | WPC[31:0] | I    | 当前写入GRF的PC                                              |
| 9    | RD1[31:0] | O    | 输出A1指定的寄存器的32位数据                                 |
| 10   | RD2[31:0] | O    | 输出A2指定的寄存器的32位数据                                 |

 

（2） 功能定义

<center>表4-GRF功能定义</center>

| 序号 | 功能     | 描述                                                        |
| ---- | -------- | ----------------------------------------------------------- |
| 1    | 同步复位 | reset为1时，将所有寄存器清零                                |
| 2    | 读数据   | 将A1和A2地址对应的寄存器的值分别通过RD1和RD2读出            |
| 3    | 写数据   | 当WE为1且时钟上升沿来临时，将WD写入到A3对应的寄存器内部     |
| 4    | 内部转发 | 当A1和A2之一与A3相等且写入信号为1时，用WD代替RD1或RD2的输出 |



####2. EXT

(1) 端口说明

<center>表9-EXT端口说明</center>

| 序号 | 信号名      | 方向 | 描述                                                         |
| ---- | ----------- | ---- | ------------------------------------------------------------ |
| 1    | imm16[15:0] | I    | 代扩展的16位信号                                             |
| 2    | sign[2:0]   | I    | 无符号或符号扩展选择信号<br/>3'b001：无符号扩展<br/>3'b010：符号扩展<br>3'b100:   寄存到高位 |
| 3    | imm32[31:0] | O    | 扩展后的32位的信号                                           |

 

(2) 功能定义

<center>表10-EXT功能定义</center>

| 序号 | 功能       | 描述                                    |
| ---- | ---------- | --------------------------------------- |
| 1    | 无符号扩展 | 当sign为3’b001时，将imm16无符号扩展输出 |
| 2    | 符号扩展   | 当sign为3‘b010时，将imm16符号扩展输出   |
| 3    | 存储到高位 | 当sign为3’100时，将imm16存在高16位      |

 

####3. Controller

(1) 端口说明

<center>表11-Controller端口说明</center>

| 序号 | 信号名          | 方向 | 描述                                                         |
| ---- | --------------- | ---- | ------------------------------------------------------------ |
| 1    | op[5:0]         | I    | instr[31:26]6位控制信号                                      |
| 2    | func[5:0]       | I    | instr[5:0]6位控制信号                                        |
| 3 | rt[4:0] | I | instr[20:16]5位控制信号 |
| 4   | AluOp[11:0]     | O    | ALU的控制信号                                                |
| 5   | WeGrf           | O    | GRF写使能信号<br/>0：禁止写入<br/>1：允许写入                |
| 6   | WeDm            | O    | DM的写入信号<br/>0：禁止写入<br/>1：允许写入                 |
| 7  | branch[3:0]     | O    | PC转移位置选择信号<br>4'b0001:其他情况<br>4'b0010:beq<br>4'b0100:j\|\|jal<br>4'b1000:jr; |
| 8   | AluSrc1[3:0]    | O    | 参与ALU运算的第一个数<br/>4'b0001：RD1<br/>4'b0010：RD2      |
| 9   | AluSrc2[3:0]    | O    | 参与ALU运算的第二个数，来自GRF还是imm<br/>4'b0001：RD2<br/>4'b0010：imm32<br/>4'b0100: offset |
| 10  | WhichtoReg[7:0] | O    | 将何种数据写入GRF？<br/>8'b0000_0001：ALU计算结果<br/>8'b0000_0010：DM读出信号<br/>8'b0000_0100：upperImm<br/>8'b0000_1000: PC+4 |
|11|RegDst[3:0]|O|写入GRF的哪个寄存器？<br>4'b0001:rd<br>4'b0010:rt<br>4'b0100:31号寄存器|
|12|SignExt[2:0]|O|拓展方式：<br>3'b001:0拓展<br>3'b010:符号拓展<br>3'b100:存储到高位|
|13|B_change[3:0]|O|B转移的类型<br>4'b0001:beq<br>4'b0010:slt<br>4'b0100:blez|
|14|DM_type[5:0]|O|存取指令类型：<br>6'b000001:lw/sw<br>6'b000010:lh/sh<br>6'b000100:lb/sb<br />6'b001000:lhu<br />6'b010000:lbu|
|15|MDop[3:0]|O|乘除指令选择信号：<br />4‘b0000:无操作<br />4’b0001:mult<br />4'b0010:multu<br />4'b0011:div<br />4'b0100:divu<br />4'b0101:mfhi<br />4'b0110:mflo<br />4'b0111:mthi<br />4'b1000:mtlo|
| 16 | D_Tuse_rs[1:0] | O | 指令的rs寄存器的值从第一次进入D级到被使用的周期数 |
| 17 | D_Tuse_rt[1:0] | O | 指令的rt寄存器的值从第一次进入D级到被使用的周期数 |
| 18 | D_Tnew[1:0] | O | 指令从进入D开始到产生运算结果需要的周期数 |




#### 4.NPC

#### NPC（下一指令计算单元）

 该模块根据当前pc（包括D级和F级）和其他控制信号（NPCOp，CMP输出信息），计算出下一指令所在的地址npc，传入IFU模块。

- **端口定义**

  | 信号名     | 方向 | 位宽 | 描述                                                         |
  | :--------- | :--- | :--- | :----------------------------------------------------------- |
  | F_pc       | I    | 32   | F级指令地址                                                  |
  | D_pc       | I    | 32   | D级指令地址                                                  |
  | offset     | I    | 32   | 地址偏移量，用于计算B类指令所要跳转的地址                    |
  | imm26      | I    | 26   | 当前指令数据的前26位（0~25），用于计算jal和j指令所要跳转的地址 |
  | ra         | I    | 32   | 储存在寄存器（$ra或是jalr指令中存储“PC+4”的寄存器）中的地址数据，用于实现jr和jalr指令 |
  | ALU_change | I    | 1    | B类指令判断结果 1：说明当前B类指令的判断结果为真 0：说明判断结果为假 |
  | branch     | I    | 4    | NPC功能选择 0x000：顺序执行 0x001：B类指令跳转 0x010: jal/j跳转 0x011: jr/jalr跳转 |
  | npc        | O    | 32   | 输出下一指令地址                                             |
  | PC8        | O    | 32   | jr指令时存储PC+8的值                                         |
  
  
  
  

#### 5.B_transfer(B类指令比较单元)

 该单元根据输入的CMPOp信号对当前B指令的类型进行判断，进而对当前输入的数值进行相应比较，最后输出结果。

- **端口定义**

  | 信号名     | 方向 | 位宽 | 描述                                                         |
  | :--------- | :--- | :--- | :----------------------------------------------------------- |
  | A          | I    | 32   | 输入B_transfer单元的第一个数据                               |
  | B          | I    | 32   | 输入B_transfer单元的第二个数据                               |
  | Type       | I    | 4    | Type功能选择信号<br> 0x0001：beq判断<br> 0x0010：slt判断 <br>0x0100：blez判断 |
  | ALU_change | O    | 1    | 判断结果输出 <br>1: 判断结果为真<br> 0：判断结果为假         |
  
  
  
  

## <三>.E级流水线

####1. ALU

(1) 端口说明

<center>表5-ALU端口说明</center>

| 序号 | 信号名      | 方向 | 描述                                                         |
| ---- | ----------- | ---- | ------------------------------------------------------------ |
| 1    | A[31:0]     | I    | 参与运算的第一个数                                           |
| 2    | B[31:0]     | I    | 参与运算的第二个数                                           |
| 3    | ALUop[11:0] | I    | 决定ALU做何种操作<br>12'b0000_0000_0001：无符号加<br/>12'b0000_0000_0010：无符号减<br/>12'b0000_0000_0100：与<br/>12'b0000_0000_1000：或<br/>12‘b0000_0001_0000:异或<br />12‘b0000_0010_0000:或非<br />12‘b0000_0100_0000:sll<br />12‘b0000_1000_0000:sra<br />12‘b0001_0000_0000:srl<br />12‘b0010_0000_0000:slt<br />12‘b0100_0000_0000:sltu |
| 4    | res         | O    | A与B做运算后的结果                                           |

 

(2) 功能定义

<center>表6-ALU功能定义</center>

| 序号 | 功能       | 描述         |
| ---- | ---------- | ------------ |
| 1    | 加运算     | res = A + B  |
| 2    | 减运算     | res = A - B  |
| 3    | 与运算     | res = A & B  |
| 4    | 或运算     | res = A \| B |
| 5    | 左移位运算 | Res=A<<B     |


 ####2.MD_Unit
 - **端口定义**

| 方向 | 信号名  | 位宽 | 描述              | 输入来源        |
| :--- | :------ | :--- | :---------------- | :-------------- |
| I    | clk     | 1    | 时钟信号          | mips.v中的clk   |
| I    | reset   | 1    | 同步复位信号      | mips.v中的reset |
| I    | en      | 1    | MD_Unit使能信号 | 判断是否为乘除计算 |
| I    | MDop | 4   | 指令选择信号 | Controller |
| I    | A    | 32   | 第一个计算数     | e_A        |
| I | B | 32 | 第二个计算数 | e_B |
| O | HI | 32 | HI寄存器输出 |  |
| O | LO | 32 | LO寄存器输出 |  |
| O    | out | 32   | 取出HI或LO的值 |                 |
| O    | busy  | 1  | 是否在进行乘除计算 |                 |





## <四>.M级流水线

####1. DM_In
 - **端口定义**

| 方向 | 信号名  | 位宽 | 描述              | 输入来源        |
| :--- | :------ | :--- | :---------------- | :-------------- |
| I    | low2  | 2   | 时钟信号          | Address低两位                                                |
| I    | WD  | 31   | 处理前写入结果  | 32位写入数据 |
| I    | DM_type | 6    | 决定存取指令类型 | 存取指令类型：<br/>6'b000001:lw/sw<br/>6'b000010:lh/sh<br/>6'b000100:lb/sb<br />6'b001000:lhu<br />6'b010000:lbu |
| O    | data_byteen | 4  | 字节使能信号 |                 |
| O    | DM_input | 32 | 处理后的写入结果 |                 |




####2.DM_Out

 - **端口定义**

| 方向 | 信号名  | 位宽 | 描述              | 输入来源        |
| :--- | :------ | :--- | :---------------- | :-------------- |
| I    | low2  | 2   | 时钟信号          | Address低两位                                                |
| I    | DM_output | 32  | 处理前读入信号 | 32位读入数据 |
| I    | DM_type | 6    | 决定存取指令类型 | 存取指令类型：<br/>6'b000001:lw/sw<br/>6'b000010:lh/sh<br/>6'b000100:lb/sb<br />6'b001000:lhu<br />6'b010000:lbu |
| O    | RD | 32 | 处理后的读入结果 |                 |

#### 3.CP0

- **端口定义**
| 方向 | 信号名  | 位宽 | 描述              | 输入来源        |
| :--- | :------ | :--- | :---------------- | :-------------- |
| I | clk        | 1   | 时钟信号          | cpu主时钟                                        |
| I    | reset | 1  | 复位信号 | cpu同步复位信号 |
| I    | WE | 1   | 写入使能 | 前一级相同信号输入 |
| I | Address | 5 | CP0 寄存器编号 | 前一级相同信号输入 |
| I | WD | 32 | CP0 寄存器的写入数据 | 前一级相同信号输入 |
| I | BD_in | 1 | 分支延迟槽指令标志 | 前一级相同信号输入 |
| I | VPC | 32 | 中断/异常时的 PC | 前一级相同信号输入 |
| I | ExcCode_in | 5 | 中断/异常的类型 | 前一级相同信号输入 |
| I | HWInt | 6 | 6 个设备中断 | 前一级相同信号输入 |
| I | EXLClr | 1 | 置 0 SR 的EXL 位 | m_eret控制信号输入 |
| O | req | 1 | 异常/中断请求 |  |
| O    | EPC | 32 | 处理后的读入结果 |                 |
| O | D_out | 32 | CP0 寄存器的输出数据 | |







## <五>.各级流水线寄存器

#### 1.IF_ID

#### D_Reg（IF/ID流水寄存器）

- **端口定义**

  | 方向 | 信号名    | 位宽 | 描述                       | 输入来源           |
  | :--- | :-------- | :--- | :------------------------- | :----------------- |
  | I    | clk       | 1    | 时钟信号                   | mips.v中的clk      |
  | I    | reset     | 1    | 同步复位信号               | mips.v中的reset    |
  | I    | en        | 1    | D级寄存器使能信号          | stall信号取反      |
  | I    | clr       | 1    | D级寄存器清空信号          | 是否清空延迟槽决定 |
  | I    | req       | 1    | D级寄存器异常/中断请求信号 | CP0                |
  | I    | F_instr   | 32   | F级instr输入               | IFU_instr          |
  | I    | F_pc      | 32   | F级pc输入                  | IFU_pc             |
  | I    | F_ExcCode | 5    | F级ExcCode输入             | 前一级相同信号     |
  | I    | F_BD      | 1    | F级BD输入                  | 前一级相同信号     |
  | O    | D_instr   | 32   | D级instr输出               |                    |
  | O    | D_pc      | 32   | D级pc输出                  |                    |
  | O    | D_ExcCode | 5    | D级ExcCode输出             |                    |
  | O    | D_BD      | 1    | D级BD输出                  |                    |
  
  
  
  

#### 2.ID_EX

#### E_Reg（ID/EX流水寄存器）

- **端口定义**

  | 方向 | 信号名       | 位宽 | 描述              | 输入来源                    |
  | :--- | :----------- | :--- | :---------------- | :-------------------------- |
  | I    | clk          | 1    | 时钟信号          | mips.v中的clk               |
  | I    | reset        | 1    | 同步复位信号      | mips.v中的reset             |
  | I    | clr          | 1    | E级寄存器清空信号 | HazardUnit中stall信号       |
  | I    | req          | 1    |                   |                             |
  | I    | D_RD1        | 32   | D级GRF输出RD1     | 通过B_transfer_D1转发的数据 |
  | I    | D_RD2        | 32   | D级GRF输出RD2     | 通过B_transfer_D2转发的数据 |
  | I    | D_instr_s    | 5    | D级instr的shamt   | D_instr的s域数据            |
  | I    | D_A1         | 5    | D级A1输入         | D_instr的rs域数据           |
  | I    | D_A2         | 5    | D级A2输入         | D_instr的rt域数据           |
  | I    | D_A3         | 5    | D级A3输入         | 通过MUX_A3选择出的数据      |
  | I    | D_imm32      | 32   | D级imm32输入      | 通过EXT模块扩展出的数据     |
  | I    | D_PC         | 32   | D级PC输入         | 前一级相同信号              |
  | I    | D_PC8        | 32   | D级PC8输入        | 前一级相同信号              |
  | I    | Tnew_D       | 2    | D级指令的Tnew输入 | 前一级相同信号              |
  | I    | D_Wegrf      | 1    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_WeDm       | 1    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_ALUop      | 7    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_AluSrc1    | 4    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_AluSrc2    | 4    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_WhichtoReg | 8    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_RegDst     | 4    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_DM_type    | 6    | D级控制信号输入   | 前一级相同信号              |
  | I    | D_ALU_change | 1    | D级ALU_change输入 | 前一级相同信号              |
  | I    | D_MDop       | 4    | D级MDop输入       | 前一级相同信号              |
  | I    | D_branch     | 5    | D级branch输入     | 前一级相同信号              |
  | I    | D_ExcCode    | 5    | D级ExcCode输入    | 前一级相同信号              |
  | I    | D_BD         | 1    | D级BD输入         | 前一级相同信号              |
  | I    | D_mfc0       | 1    | D级mfc0输入       | 前一级相同信号              |
  | I    | D_mtc0       | 1    | D级mtc0输入       | 前一级相同信号              |
  | I    | D_eret       | 1    | D级eret输入       | 前一级相同信号              |
  | I    | D_syscall    | 1    | D级syscall输入    | 前一级相同信号              |
  | O    | E_RD1        | 32   | E级RD1输出        |                             |
  | O    | E_RD2        | 32   | E级RD2输出        |                             |
  | O    | E_instr_s    | 5    | 移位指令的位移数  |                             |
  | O    | E_A1         | 5    | E级A1输出         |                             |
  | O    | E_A2         | 5    | E级A2输出         |                             |
  | O    | E_A3         | 5    | E级A3输出         |                             |
  | O    | E_imm32      | 32   | E级imm32输出      |                             |
  | O    | E_PC         | 32   | E级PC输出         |                             |
  | O    | E_PC8        | 32   | E级PC8输出        |                             |
  | O    | E_Tnew       | 2    | E级指令的Tnew输出 |                             |
  | O    | E_Wegrf      | 1    | E级控制信号输出   |                             |
  | O    | E_WeDm       | 1    | E级控制信号输出   |                             |
  | O    | E_ALUop      | 12   | E级控制信号输出   |                             |
  | O    | E_AluSrc1    | 4    | E级控制信号输出   |                             |
  | O    | E_AluSrc2    | 4    | E级控制信号输出   |                             |
  | O    | E_WhichtoReg | 11   | E级控制信号输出   |                             |
  | O    | E_RegDst     | 3    | E级控制信号输出   |                             |
  | O    | E_DM_type    | 6    | E级控制信号输出   |                             |
  | O    | E_ALU_change | 1    | E级ALU_change输出 |                             |
  | O    | E_MDop       | 4    | E级MDop输出       |                             |
  | O    | E_branch     | 5    | E级branch输出     |                             |
  | O    | E_ExcCode    | 5    | E级ExcCode输出    |                             |
  | O    | E_BD         | 1    | E级BD输出         |                             |
  | O    | E_mfc0       | 1    | E级mfc0输出       |                             |
  | O    | E_mtc0       | 1    | E级mtc0输出       |                             |
  | O    | E_eret       | 1    | E级eret输出       |                             |
  | O    | E_syscall    | 1    | E级syscall输出    |                             |


- **运算功能**

  Tnew\_E = (Tnew\_D > 0) ? Tnew\_D - 1: 0Tnew_E=(Tnew_D>0)?Tnew_D−1:0
  
  
  
  

##### 3.EX_MEM

#### M_Reg（EX/MEM流水寄存器）

- 端口定义

| 方向 | 信号名       | 位宽 | 描述                    | 输入来源              |
| :--- | :----------- | :--- | :---------------------- | :-------------------- |
| I    | clk          | 1    | 时钟信号                | mips.v中的clk         |
| I    | reset        | 1    | 同步复位信号            | mips.v中的reset       |
| I    | E_A2         | 5   | E级A2输入              | ALU_out数据           |
| I    | E_A3         | 5   | E级A3输入（转发值）   | MUX_ALU选择出来的数据 |
| I    | E_RD2        | 32   | E级RD2输入              | 前一级相同信号        |
| I    | E_ALUout     | 32   | E级res输入             | 前一级相同信号        |
| I    | E_PC         | 32   | E级PC输入              | 前一级相同信号        |
| I    | E_PC8        | 32   | E级PC8输入          | 前一级相同信号        |
| I    | E_Tnew       | 2    | E级Tnew输入             | 前一级相同信号        |
| I    | E_Wegrf      | 1    | E级控制信号输入         | 前一级相同信号        |
| I    | E_WeDm       | 1    | E级控制信号输入        | 前一级相同信号        |
| I    | E_WhichtoReg | 8    | E级控制信号输入        | 前一级相同信号        |
| I    | E_RegDst     | 4    | E级控制信号输入        | 前一级相同信号        |
| I    | E_DM_type    | 6    | E级控制信号输入        | 前一级相同信号        |
| I | E_ALU_change | 1 | E级ALU_change输入 | 前一级相同信号 |
| I    | E_imm32      | 32   | E级imm32输入 | 前一级相同信号 |
| I    | E_branch     | 5    | E级branch输入    | 前一级相同信号              |
| I    | E_ExcCode    | 5    | E级ExcCode输入    | 前一级相同信号              |
| I    | E_BD         | 1    | E级BD输入         | 前一级相同信号              |
| I    | E_mfc0       | 1    | E级mfc0输入       | 前一级相同信号              |
| I    | E_mtc0       | 1    | E级mtc0输入       | 前一级相同信号              |
| I    | E_eret       | 1    | E级eret输入       | 前一级相同信号              |
| I    | E_syscall    | 1    | E级syscall输入    | 前一级相同信号              |
| O    | M_A2         | 5   | M级A2输出               |                       |
| O    | M_A3         | 5   | M级A3输出               |                       |
| O    | M_RD2      | 32   | M级RD2输出             |                       |
| O    | M_ALUout     | 32   | M级res输出             |                       |
| O    | M_PC         | 32   | M级PC输出             |                       |
| O    | M_PC8        | 32   | M级PC8输出          |                       |
| O    | M_Tnew       | 2    | M级Tnew输出         |                       |
|O|M_Wegrf|1|M级Tnew输出||
|O|M_WeDm|1|M级控制信号输出||
|O|M_WhichtoReg|8|M级控制信号输出||
|O|M_RegDst|4|M级控制信号输出||
|O|M_DM_type|6|M级控制信号输出||
|O|M_ALU_change|1|M级ALU_change输出||
|O|M_imm32|32|M级imm32输出||
| O    | M_branch     | 5    | M级branch输出     |                             |
| O    | M_ExcCode    | 5    | M级ExcCode输出   |                             |
| O    | M_BD         | 1    | M级BD输出         |                             |
| O    | M_mfc0       | 1    | M级mfc0输出       |                             |
| O    | M_mtc0       | 1    | M级mtc0输出       |                             |
| O    | M_eret       | 1    | M级eret输出       |                             |
| O    | M_syscall    | 1    | M级syscall输出    |                             |

- **运算功能**

  Tnew\_M = (Tnew\_E > 0) ? Tnew\_E - 1: 0Tnew_M=(Tnew_E>0)?Tnew_E−1:0
  
  
  
  

##### 4.MEM_WB

#### W_Reg（MEM/WB流水寄存器）

- **接口定义**

  | 方向 | 信号名       | 位宽 | 描述                    | 输入来源        |
  | :--- | :----------- | :--- | :---------------------- | :-------------- |
  | I    | clk          | 1    | 时钟信号                | mips.v中的clk   |
  | I    | reset        | 1    | 同步复位信号            | mips.v中的reset |
  | I    | M_A3         | 5   | M级A3输入              | 前一级相同信号  |
  | I    | M_RD         | 32   | M级RD输入             | 前一级相同信号  |
  | I    | M_PC        | 32   | M级PC输入             | 前一级相同信号  |
  | I    | M_PC8        | 32   | M级PC8输入            | 前一级相同信号  |
  | I    | M_Wegrf      | 1 | M级控制信号输入      | 前一级相同信号  |
  | I    | M_WhichtoReg | 1    | M级控制信号输入         | 前一级相同信号  |
  | I    | M_RegDst     | 4    | M级控制信号输入         | 前一级相同信号  |
  | I    | M_imm32      | 32   | M级imm32输入  | 前一级相同信号 |
  | I | M_ALU_change | 1 | M级ALU_change输入 | 前一级相同信号 |
  | I    | M_Tnew       | 2 | M级Tnew输入    | 前一级相同信号 |
  | O    | W_A3         | 5    | W级A3输出               |                 |
  | O    | W_ALUout     | 32   | W级res输出             |                 |
  | O    | W_RD         | 32   | W级RD输出             |                 |
  | O    | W_PC         | 32   | W级PC输出 |                 |
  | O    | W_PC8        | 32   | W级PC8输出 |                 |
  |O|W_Wegrf|1|W级控制信号输出||
  |O|W_WhichtoReg|8|W级控制信号输出||
  |O|W_RegDst|4|W级控制信号输出||
  |O|W_imm32|32|W级imm32输出||
  |O|W_ALU_change|1|W级ALU_change输出||
  |O|W_Tnew|2|W级Tnew输出||




## <六>.暂停、转发处理及相关多路选择器

### （一）.冲突综合单元（HazardUnit)


|方向|信号名|位宽|描述|
| :--- | :----------- | :--- | :---------------------- |
|I|D_A1|5|D级A1端输入|
|I|D_A2|5|D级A2端输入|
|I|E_A1|5|E级A1端输入|
|I|E_A2|5|E级A2端输入|
|I|M_A2|5|M级A2端输入|
|I|E_A3|5|E级A3端输入|
|I|M_A3|5|M级A3端输入|
|I|W_A3|5|W级A3端输入|
|I|D_Tuse_rs|2|D_Tuse_rs输入|
|I|D_Tuse_rt|2|D_Tuse_rt输入|
|I|E_Tnew|2|E级Tnew输入|
|I|M_Tnew|2|M级Tnew输入|
|I|W_Tnew|2|W级Tnew输入|
|I|E_Wegrf|1|E级Wegrf输入|
|I|M_Wegrf|1|M级Wegrf输入|
|I|W_Wegrf|1|W级Wegrf输入|
|I|E_WhichtoReg|8|E级WhichtoReg输入|
|I|M_WhichtoReg|8|M级WhichtoReg输入|
|I|start|1|乘除开始信号|
|I|busy|1|乘除忙碌信号|
|I|MDU_en|1|D级将进行乘除运算信号|
|I|D_eret|1|D级eret输入|
|I|E_mtc0|1|E级mtc0输入|
|I|M_mtc0|1|M级mtc0输入|
|O|SelB_D1|2|B_transfer的D1输入转发信号|
|O|SelB_D2|2|B_transfer的D2输入转发信号|
|O|SelALU_A|2|ALU输入A转发信号|
|O|SelALU_B|2|ALU输入B转发信号|
|O|SelDM|1|DM写入WD转发信号|
|O|stall|1|冲突信号|




###（二）.控制和冒险简述

- 对于控制冒险，本实验要求大家实现**比较过程前移至 D 级**，并**采用延迟槽**。

- 对于数据冒险，两大策略及其应用：

  ```markdown
  假设当前我需要的数据，其实已经计算出来，只是还没有进入寄存器堆，那么我们可以用**转发**( Forwarding )来解决，即不引用寄存器堆的值，而是直接从后面的流水级的供给者把计算结果发送到前面流水级的需求者来引用。如果我们需要的数据还没有算出来。则我们就只能**暂停**( Stall )，让流水线停止工作，等到我们需要的数据计算完毕，再开始下面的工作。
  ```

  

### (三）.冒险处理

冒险处理我们均通过“A_T”法实现——

#### 转发（forward）

当前面的指令要写寄存器但还未写入，而后面的指令需要用到没有被写入的值时，这时候会产生**数据冒险**，我们首先考虑进行转发。我们**假设所有的数据冒险均可通过转发解决**。也就是说，当某一指令前进到必须使用某一寄存器的值的流水阶段时，这个寄存器的值一定已经产生，并**存储于后续某个流水线寄存器中**。

在这一阶段，我们不管需要的值有没由计算出，都要进行转发，即暴力转发。为实现这一机制，我们要清楚哪些模块需要转发后的数据（**需求者**）和保存着写入值的流水寄存器（**供应者**）

- **供应者及其产生的数据**

  | 流水级 | 产生数据                                 | MUX名&选择信号名 | MUX输出名 |
  | :----- | :--------------------------------------- | :--------------- | :-------- |
  | E      | E_imm32，<br/>E_PC8                                       | 直接流水线传递 |直接流水线传递|
  | M      | M_ALUout，<br/>M_PC8                                     | 直接流水线传递 |直接流水线传递|
  | W      | w_res，<br/>w_RD，<br/>w_imm32,<br>W_PC8 | w_WhichtoReg     | WD        |

  注：当M级指令为读hi和lo的指令时， M_AO中的结果是从上一周期在乘除槽中读取的hi或lo的值；如果是其他指令，M_AO是上一周期ALU的计算结果。

- **需求者及其产生的数据**

  | 接收端口      | 选择数据                         | HMUX名&选择信号名 | MUX输出名     |
  | :------------ | :------------------------------- | :---------------- | :------------ |
  | B_transfer_D1 | D_V1,<br/>M_out,<br/>E_out       | SelB_D1           | d_b_transfer1 |
  | B_transfer_D2 | d_RD2,<br>m_res,<br>e_res        | SelB_D2           | d_b_transfer2 |
  | ALU_A         | e_RD1，<br/> WD，<br/>m_res      | SelALU_A          | e_A           |
  | ALU_B         | e_RD2，<br/>WD，<br/>m_res       | SelALU_B          | e_B           |
  | DM_WD         | m_RD2，<br/> WD                  | SelDM             | M_WD_f        |
  | NPC_ra        | D_V1_f ,<br/> E_PC8 ,<br/> M_PC8 | SelJr             | ra            |

从上表可以看出，W级中的数据没有转发到D级，原因是我们在GRF内实现了内部转发机制，将GRF输入端的数据（还未写入）及时反映到RD1或这RD2，判断条件为`A3 == A2`或者`A3 == A1`。

此时为了生成HMUX的选择信号，我们需要向HCU（冒险控制器）输入”A”数据，然后进行选择信号的计算，执行转发的条件为——

- **前位点的读取寄存器地址和某转发输入来源的写入寄存器地址相等且不为 0**

- **写使能信号有效**

  #### 转发的构造

  ![](./image/4.png)



#### 暂停（stall）

接下来，我们来处理通过转发不能处理的数据冒险。在这种情况下，新的数据还未来得及产生。我们只能暂停流水线，等待新的数据产生。为了方便处理，我们仅仅为D级的指令进行暂停处理。

我们把Tuse和Tnew作为暂停的判断依据——

- Tuse：指令进入 **D 级**后，其后的某个功能部件**再**经过多少时钟周期就**必须**要使用寄存器值。对于有两个操作数的指令，其**每个操作数的 Tuse 值可能不等**（如 store 型指令 rs、rt 的 Tuse 分别为 1 和 2 ）。
- Tnew：位于 **E 级及其后各级**的指令，再经过多少周期就能够产生要写入寄存器的结果。在我们目前的 CPU 中，W 级的指令Tnew 恒为 0；对于同一条指令，Tnew@M = max(Tnew@E - 1, 0)、

在这一阶段，我们找到D级生成的Tuse_rs和Tuse_rt和在E,M,W级寄存器中流水的Tnew_D，Tnew_M，Tnew_W，如下表所示

- **Tuse表和计算表达式**

  | 指令类型   | Tuse_rs | Tuse_rt |
  | :--------- | :------ | :------ |
  | calc_R     | 1       | 1       |
  | calc_I     | 1       | X       |
  | shift      | X       | 1       |
  | shiftv     | 1       | 1       |
  | load       | 1       | X       |
  | store      | 1       | 2       |
  | md         | 1       | 1       |
  | mt         | 1       | X       |
  | mf         | X       | X       |
  | branch     | 0       | 0       |
  | j / jr     | X       | X       |
  | jal / jalr | 0       | X       |
  | lui        | X       | X       |


- **Tnew表和计算表达式**

  | 指令类型   | Tnew_D | Tnew_E | Tnew_M | Tnew_W |
  | :--------- | :----- | :----- | :----- | :----- |
  | calc_R     | 2      | 1      | 0      | 0      |
  | calc_I     | 2      | 1      | 0      | 0      |
  | shift      | 2      | 1      | 0      | 0      |
  | shiftv     | 2      | 1      | 0      | 0      |
  | load       | 3      | 2      | 1      | 0      |
  | store      | X      | X      | X      | X      |
  | md         | X      | X      | X      | X      |
  | mt         | X      | X      | X      | X      |
  | mf         | 2      | 1      | 0      | 0      |
  | branch     | X      | X      | X      | X      |
  | jal / jalr | 0      | 0      | 0      | 0      |
  | j / jr     | X      | X      | X      | X      |
  | lui        | 1      | 0      | 0      | 0      |


然后我们Tnew和Tuse传入HCU（冒险控制器中），然后进行stall信号的计算。如果满足以下条件则stall有效——

- **Tnew > Tuse**

- **前位点的读取寄存器地址和某转发输入来源的写入寄存器地址相等且不为 0**

- **写使能信号有效**

- **当E级延迟槽在进行运算（`start | busy`）时，D级为md、mt、mf指令**

-  #### **阻塞的构造（D级）**

  ![](./image/5.png)

  ### (四）.**需求时间——供给时间模型**

  - **Tuse**（对于数据需求）：这条指令位于 D 级的时候，再经过多少个时钟周期就必须要使用相应的数据。

  ![](../../../Online_materals/BUAA-CO2021/p5/%E8%AF%BE%E4%B8%8B/1)

  - **Tnew**（对于数据产出）：位于某个流水级的某个指令，它经过多少个时钟周期可以算出结果并且存储到流水级寄存器里。

    ![](../../../Online_materals/BUAA-CO2021/p5/%E8%AF%BE%E4%B8%8B/2.png)

  - 用这两个定义来描述数据冒险：

    ![](../../../Online_materals/BUAA-CO2021/p5/%E8%AF%BE%E4%B8%8B/3.png)

```verilog
assign stall_rs = (D_A1!= 0)&&((D_Tuse_rs<E_Tnew)&&(D_A1 == E_A3)&&E_Wegrf||
                  (D_Tuse_rs<M_Tnew)&&(D_A1 == M_A3)&&M_Wegrf||
                  (D_Tuse_rs<W_Tnew)&&(D_A1 == W_A3)&&W_Wegrf);
//the pre is the condition
assign stall_rt = (D_A2!= 0)&&((D_Tuse_rt<E_Tnew)&&(D_A2 == E_A3)&&E_Wegrf||
                  (D_Tuse_rt<M_Tnew)&&(D_A2 == M_A3)&&M_Wegrf||
                  (D_Tuse_rt<W_Tnew)&&(D_A2 == W_A3)&&W_Wegrf);

assign stall_md=(start||busy)&&(MDU_en);

assign stall_eret=D_eret&((E_mtc0&(E_A3==5'd14))||(M_mtc0&&(M_A3==5'd14)));
assign stall = (stall_rs||stall_rt||stall_md||stall_eret)&&(~Is_nop);
```



##真值表

|    端口    | addu     | subu    | ori     | lw      | sw      | lui     | beq     |
| :--------: | -------- | ------- | ------- | ------- | ------- | ------- | ------- |
|     op     | 000000   | 000000  | 001101  | 100011  | 101011  | 001111  | 000100  |
|    func    | 100001   | 100011  |         |         |         |         |         |
|   AluOp    | 0000001  | 0000010 | 0001000 | 0000000 | 0000000 | 0000000 | 0000000 |
|   WeGrf    | 1        | 1       | 1       | 1       | 0       | 1       | 0       |
|    WeDm    | 0        | 0       | 0       | 0       | 1       | 0       | 0       |
|   branch   | 0001     | 0001    | 0001    | 0001    | 0001    | 0001    | 0010    |
|  AluSrc1   | 0001     | 0001    | 0001    | 0001    | 0001    | 0001    | 0001    |
|  AluSrc2   | 0001     | 0001    | 0010    | 0010    | 0010    | 0001    | 0001    |
| WhichtoReg | 0001     | 0001    | 0001    | 0010    | 0001    | 0100    | 0001    |
|   RegDst   | 0001     | 0001    | 0010    | 0010    | 0010    | 0010    | 1010    |
|  SignExt   | 0        | 0       | 0       | 1       | 1       | 0       | 1       |
|  **端口**  | **andi** | **jal** | **j**   | **jr**  | **sll** | **add** | **sub** |
|     op     | 001100   | 000011  | 000010  | 000000  | 000000  | 000000  | 000000  |
|    func    |          |         |         | 001000  | 000000  | 100000  | 100010  |
|   AluOp    | 0000100  | 0000000 | 0000000 | 0000000 | 0010000 | 0000000 | 0000001 |
|   WeGrf    | 1        | 1       | 0       | 0       | 1       | 1       | 1       |
|    WeDm    | 0        | 0       | 0       | 0       | 0       | 0       | 0       |
|   branch   | 0001     | 0100    | 0100    | 1000    | 0001    | 0001    | 0001    |
|  AluSrc1   | 0001     | 0001    | 0001    | 0001    | 0010    | 0001    | 0001    |
|  AluSrc2   | 0010     | 0001    | 0001    | 0001    | 0100    | 0001    | 0001    |
| WhichtoReg | 0001     | 1000    | 0001    | 0001    | 0001    | 0001    | 0001    |
|   RegDst   | 0010     | 0100    | 0001    | 0001    | 0001    | 0001    | 0001    |
|  SignExt   | 1        | 0       | 0       | 0       | 0       | 0       | 0       |

 ## 桥和计数器

#### 1.Bridge
 - **端口定义**

| 方向 | 信号名  | 位宽 | 描述              | 输入来源        |
| :--- | :------ | :--- | :---------------- | :-------------- |
| I    | Address_in | 32  | 写入/读取的外设单元的地址 | 前一级相同信号 |
| I    | WD_in | 32   | 写入外设单元的数据 | 前一级相同信号 |
| I    | byteen | 4    | 写入外设单元的使能 | 前一级相同信号 |
| I    | DM_RD | 32  | DM读取值的输入 | 前一级相同信号 |
| I    | T0_RD | 32   | Timer1读取值的输入 | 前一级相同信号 |
| I | T1_RD | 32 | Timer0读取值的输入 | 前一级相同信号 |
| O | DM_WE | 4 | DM写入使能 |  |
| O | T0_WE | 1 | Timer1写入使能 |  |
| O    | T1_WE | 1   | Timer2写入使能 |                 |
| O    | Address_out | 32 | 写入/读取的外设单元的地址 |                 |
| O | WD_out | 32 | 写入外设单元的数据 | |
| O | RD_out | 32 | 外设单元的读取值输出 | |


#### 2.TC
 - **端口定义**

| 方向 | 信号名  | 位宽 | 描述              | 输入来源        |
| :--- | :------ | :--- | :---------------- | :-------------- |
| I    | clk     | 1    | 时钟信号          | 前一级相同信号 |
| I    | reset   | 1    | 同步复位信号      | 前一级相同信号 |
| I    | Addr    | 30 | Timer写入地址 | 前一级相同信号 |
| I    | WE | 1   | Timer写入使能 | 前一级相同信号 |
| I    | Din  | 32 | Timer写入数据 | 前一级相同信号 |
| O    | D_out | 32   | Timer读取数据 |                 |
| O    | IRQ | 1  | 中断请求 |                 |

##重要机制实现方法

### CP0响应机制

CP0是检测异常和中断的重要部件，异常和中断通过以下接口传入——

- **中断信息**通过 **HWInt[7:2]** 接口进入，其中HWInt[2]连接Timer0的终端请求，HWInt[3]连接Timer1的终端请求，HWInt[4]连接外部的中断请求。
- **异常信息**通过**ExcCode_in**和**BD_in**两个接口传入，ExcCode_in传入的是异常代码（ADEL，ADES，RI，OV），BD_in传入的是延迟槽指令标志（有效则表示当前指令为延迟槽指令）。

检测到中断或者异常时，CP0会进行判断并响应，决定是否将req(**CP0向CPU发出的中断请求**)置1。判断逻辑如下——

```
wire inter_req  = (|(HWInt & IM)) & IE & (!EXL);//中断有效判断
wire exc_req    = (ExcCode_in != 5'd0) & (!EXL);//异常有效判断
assign req      = inter_req | exc_req;//
```

当req有效，CP0还需要完成以下任务——

- EXL置1

- 将M级PC存入EPC（延迟槽指令中存入EPC-4）

- 如果当前响应中断，ExcCode寄存器写入0；若响应异常，ExcCode寄存器写入外部传入的异常代码ExcCode_in

- BD寄存器写入外部传入的BD_in信号

- 此外，无论是否发出中断请求，在每一周期均需要将HWInt[6:2]写入Cause寄存器中的的IP域

  ### 系统桥设计

  系统桥其实是充当一个“交换机”的角色，将CPU传来的地址写入相应的外设（DM、Timer0、Timer1），只需要组合逻辑便可实现。

  ### 异常识别

  P7中我们考虑的异常情况有以下几种——

  - F级异常：
    - PC地址没有字对齐（AdEL）
    - PC地址超过0x3000 ~ 0x6ffc（AdEL）
  - D级异常：
    - 未知的指令码（RI）
  - E级异常：
    - addi、add、sub计算溢出（Ov）
    - load类指令计算地址时加法溢出（AdEL）
    - store类指令计算地址时加法溢出（AdES）
  - M级异常：
    - lw取数地址未 4 字节对齐（AdEL）
    - lh、lhu取数地址未与 2 字节对齐（AdEL）
    - lh、lhu、lb、lbu取 Timer 寄存器的值（AdEL）
    - load型指令取数地址超出 DM、Timer0、Timer1 的范围（AdEL）
    - sw存数地址未 4 字节对齐（AdES）
    - sh存数地址未 2 字节对齐（AdES）
    - sh、sb存 Timer 寄存器的值（AdES）
    - sw向计时器的 Count 寄存器存值（AdES）
    - store型指令存数地址超出 DM、Timer0、Timer1 的范围（AdES）

  针对以上列出的异常情况，我们在每一个流水级对异常进行检测。由于教程提出了以下要求——

  - 发生取指异常后视为 `nop` 直至提交到 CP0。
  - 发生 `RI` 异常后视为 `nop` 直至提交到 CP0。
  - `load` 与 `store` 类算址溢出按照 `AdEL` 与 `AdES` 处理。

  因此不会出现**一个指令在多级出现异常**的情况。如果某个流水级出现了新的异常，我们将这个异常流水到下一级即可，而不是流水上一级传来的异常；如果这个流水级没有出现新的异常，则将上一级传来的异常继续流水给下一级即可。


###二、 测试方案

（1） 测试代码：

注：本测试方案覆盖所有异常，并未测试中断

```markdown
.text
    mtc0 $0, $12
    ori $at, $0, 0xfffc
	#====OV=====
    lui $t0, 0x7fff
    lui $t1, 0xffff
    add $t2, $t0, $t1
    sub $t2, $t0, $t1
    sub $t2, $t1, $t0
    lui $t1, 0x7fff
    add $t2, $t0, $t1
    ori $t1, $t1, 0xffff
    addi $t2, $t1, 0xfffffff0
    addi $t1, $t1, 0x0010

	#=====SYSCALL=====
    syscall
    
    #=====ADEL=====
    lui $t1, 0x7fff
    jal label1
    add $ra, $ra, $t1
label1:
    jr $ra
    nop
    jal label2
    addi $ra, $ra, 1
label2:
    jr $ra
    nop
    ori $t0, $0, 0x7f00
    ori $t2, $0, 0x7f20
    sw $t0, 0($0)
    lw $t0, 0($0)
    lw $t0, 1($0)
    lw $t0, 2($0)
    lh $t0, 3($0)
    lh $t0, 0($t0)
    lh $t0, 2($t0)
    lb $t0, 0($t0)
    lb $t0, 3($t0)
loop_timer1:
    lw $t1, 0($t0)
    addi $t0, $t0, 4
    bne $t0, $t2, loop_timer1
    nop
    ori $t0, $0, 0x3000
    lw $t0, 0($t0)
    lui $t0, 0x7fff
    ori $t0, $t0, 0xffff
	lw $t0, 1($t0)
	lw $t0, -4($0)
	
	#=====ADES=====
	sw $0, 1($0)
    sw $0, 2($0)
    sh $0, 3($0)
    sw $0, 4($0)
    sh $0, 6($0)
    sb $0, 7($0)
    ori $t0, $0, 0x7f00
    sh $0, 0($t0)
    sh $0, 2($t0)
    sb $0, 0($t0)
    sb $0, 3($t0)
    ori $t1, $0, 0x7f30
loop_timer2:
	sw $0, 0($t0)
	addi $t0, $t0, 4
    bne $t0, $t1, loop_timer2
    nop
    ori $t0, $0, 0x3000
    sw $0, 0($t0)
    lui $t0, 0x7fff
    ori $t0, $t0, 0xffff
	sw $0, 1($t0)
	sw $0, -1($0)

	#=====ALTOGETHER=====
	lui $t0, 0x7fff
	ori $t1, $t0, 0xffff
	sw $0, 0($t0)
	addi $t1, $t1, 1
	syscall
	
	sw $0, 0($t0)
	addi $t1, $t1, 1
	nop
	
	sw $0, 0($t0)
	addi $t1, $t1, 0
	syscall
	
	sw $0, 0($0)
	addi $t1, $t1, 1
	syscall
	
	lui $t0, 0x8000
	addi $t1, $t1, 1
	beq $t0, $t1, end
	nop

end:
    beq $0, $0, end
    nop

.ktext 0x4180
_main_handler:
    mfc0 $k0, $13
    mfc0 $k0, $14
    and $k0, $k0, $at
    addi $k0, $k0, 4
    mtc0 $k0, $14
    sb $0, 0x7f20($0)
    eret

```



（2） 该CPU运行结果

```markdown
42@00003004: $ 1 <= 0000fffc
46@00003008: $ 8 <= 7fff0000
50@0000300c: $ 9 <= ffff0000
54@00003010: $10 <= 7ffe0000
74@00004180: $26 <= 00000030
78@00004184: $26 <= 00003014
86@00004188: $26 <= 00003014
90@0000418c: $26 <= 00003018
110@00003018: $10 <= 80000000
114@0000301c: $ 9 <= 7fff0000
134@00004180: $26 <= 00000030
138@00004184: $26 <= 00003020
146@00004188: $26 <= 00003020
150@0000418c: $26 <= 00003024
170@00003024: $ 9 <= 7fffffff
174@00003028: $10 <= 7fffffef
194@00004180: $26 <= 00000030
198@00004184: $26 <= 0000302c
206@00004188: $26 <= 0000302c
210@0000418c: $26 <= 00003030
246@00004180: $26 <= 00000020
250@00004184: $26 <= 00003030
258@00004188: $26 <= 00003030
262@0000418c: $26 <= 00003034
282@00003034: $ 9 <= 7fff0000
286@00003038: $31 <= 00003040
290@0000303c: $31 <= 7fff3040
322@00004180: $26 <= 00000010
326@00004184: $26 <= 7fff3040
334@00004188: $26 <= 00003040
338@0000418c: $26 <= 00003044
362@00003048: $31 <= 00003050
366@0000304c: $31 <= 00003051
398@00004180: $26 <= 00000010
402@00004184: $26 <= 00003051
410@00004188: $26 <= 00003050
414@0000418c: $26 <= 00003054
438@00003058: $ 8 <= 00007f00
442@00003060: *00000000 <= 00007f00
442@0000305c: $10 <= 00007f20
450@00003064: $ 8 <= 00007f00
470@00004180: $26 <= 00000010
474@00004184: $26 <= 00003068
482@00004188: $26 <= 00003068
486@0000418c: $26 <= 0000306c
522@00004180: $26 <= 00000010
526@00004184: $26 <= 0000306c
534@00004188: $26 <= 0000306c
538@0000418c: $26 <= 00003070
574@00004180: $26 <= 00000010
578@00004184: $26 <= 00003070
586@00004188: $26 <= 00003070
590@0000418c: $26 <= 00003074
626@00004180: $26 <= 00000010
630@00004184: $26 <= 00003074
638@00004188: $26 <= 00003074
642@0000418c: $26 <= 00003078
678@00004180: $26 <= 00000010
682@00004184: $26 <= 00003078
690@00004188: $26 <= 00003078
694@0000418c: $26 <= 0000307c
730@00004180: $26 <= 00000010
734@00004184: $26 <= 0000307c
742@00004188: $26 <= 0000307c
746@0000418c: $26 <= 00003080
782@00004180: $26 <= 00000010
786@00004184: $26 <= 00003080
794@00004188: $26 <= 00003080
798@0000418c: $26 <= 00003084
818@00003084: $ 9 <= 00000000
822@00003088: $ 8 <= 00007f04
838@00003084: $ 9 <= 00000000
842@00003088: $ 8 <= 00007f08
858@00003084: $ 9 <= 00000000
862@00003088: $ 8 <= 00007f0c
894@00004180: $26 <= 00000010
898@00004184: $26 <= 00003084
906@00004188: $26 <= 00003084
910@0000418c: $26 <= 00003088
930@00003088: $ 8 <= 00007f10
946@00003084: $ 9 <= 00000000
950@00003088: $ 8 <= 00007f14
966@00003084: $ 9 <= 00000000
970@00003088: $ 8 <= 00007f18
986@00003084: $ 9 <= 00000000
990@00003088: $ 8 <= 00007f1c
1022@00004180: $26 <= 00000010
1026@00004184: $26 <= 00003084
1034@00004188: $26 <= 00003084
1038@0000418c: $26 <= 00003088
1058@00003088: $ 8 <= 00007f20
1074@00003094: $ 8 <= 00003000
1094@00004180: $26 <= 00000010
1098@00004184: $26 <= 00003098
1106@00004188: $26 <= 00003098
1110@0000418c: $26 <= 0000309c
1130@0000309c: $ 8 <= 7fff0000
1134@000030a0: $ 8 <= 7fffffff
1154@00004180: $26 <= 00000010
1158@00004184: $26 <= 000030a4
1166@00004188: $26 <= 000030a4
1170@0000418c: $26 <= 000030a8
1206@00004180: $26 <= 00000010
1210@00004184: $26 <= 000030a8
1218@00004188: $26 <= 000030a8
1222@0000418c: $26 <= 000030ac
1258@00004180: $26 <= 00000014
1262@00004184: $26 <= 000030ac
1270@00004188: $26 <= 000030ac
1274@0000418c: $26 <= 000030b0
1310@00004180: $26 <= 00000014
1314@00004184: $26 <= 000030b0
1322@00004188: $26 <= 000030b0
1326@0000418c: $26 <= 000030b4
1362@00004180: $26 <= 00000014
1366@00004184: $26 <= 000030b4
1374@00004188: $26 <= 000030b4
1378@0000418c: $26 <= 000030b8
1394@000030b8: *00000004 <= 00000000
1398@000030bc: *00000004 <= 00000000
1402@000030c0: *00000004 <= 00000000
1410@000030c4: $ 8 <= 00007f00
1430@00004180: $26 <= 00000014
1434@00004184: $26 <= 000030c8
1442@00004188: $26 <= 000030c8
1446@0000418c: $26 <= 000030cc
1482@00004180: $26 <= 00000014
1486@00004184: $26 <= 000030cc
1494@00004188: $26 <= 000030cc
1498@0000418c: $26 <= 000030d0
1534@00004180: $26 <= 00000014
1538@00004184: $26 <= 000030d0
1546@00004188: $26 <= 000030d0
1550@0000418c: $26 <= 000030d4
1586@00004180: $26 <= 00000014
1590@00004184: $26 <= 000030d4
1598@00004188: $26 <= 000030d4
1602@0000418c: $26 <= 000030d8
1622@000030d8: $ 9 <= 00007f30
1630@000030e0: $ 8 <= 00007f04
1650@000030e0: $ 8 <= 00007f08
1682@00004180: $26 <= 00000014
1686@00004184: $26 <= 000030dc
1694@00004188: $26 <= 000030dc
1698@0000418c: $26 <= 000030e0
1718@000030e0: $ 8 <= 00007f0c
1750@00004180: $26 <= 00000014
1754@00004184: $26 <= 000030dc
1762@00004188: $26 <= 000030dc
1766@0000418c: $26 <= 000030e0
1786@000030e0: $ 8 <= 00007f10
1806@000030e0: $ 8 <= 00007f14
1826@000030e0: $ 8 <= 00007f18
1858@00004180: $26 <= 00000014
1862@00004184: $26 <= 000030dc
1870@00004188: $26 <= 000030dc
1874@0000418c: $26 <= 000030e0
1894@000030e0: $ 8 <= 00007f1c
1926@00004180: $26 <= 00000014
1930@00004184: $26 <= 000030dc
1938@00004188: $26 <= 000030dc
1942@0000418c: $26 <= 000030e0
1962@000030e0: $ 8 <= 00007f20
1982@000030e0: $ 8 <= 00007f24
2014@00004180: $26 <= 00000014
2018@00004184: $26 <= 000030dc
2026@00004188: $26 <= 000030dc
2030@0000418c: $26 <= 000030e0
2050@000030e0: $ 8 <= 00007f28
2082@00004180: $26 <= 00000014
2086@00004184: $26 <= 000030dc
2094@00004188: $26 <= 000030dc
2098@0000418c: $26 <= 000030e0
2118@000030e0: $ 8 <= 00007f2c
2150@00004180: $26 <= 00000014
2154@00004184: $26 <= 000030dc
2162@00004188: $26 <= 000030dc
2166@0000418c: $26 <= 000030e0
2186@000030e0: $ 8 <= 00007f30
2202@000030ec: $ 8 <= 00003000
2222@00004180: $26 <= 00000014
2226@00004184: $26 <= 000030f0
2234@00004188: $26 <= 000030f0
2238@0000418c: $26 <= 000030f4
2258@000030f4: $ 8 <= 7fff0000
2262@000030f8: $ 8 <= 7fffffff
2282@00004180: $26 <= 00000014
2286@00004184: $26 <= 000030fc
2294@00004188: $26 <= 000030fc
2298@0000418c: $26 <= 00003100
2334@00004180: $26 <= 00000014
2338@00004184: $26 <= 00003100
2346@00004188: $26 <= 00003100
2350@0000418c: $26 <= 00003104
2370@00003104: $ 8 <= 7fff0000
2374@00003108: $ 9 <= 7fffffff
2394@00004180: $26 <= 00000014
2398@00004184: $26 <= 0000310c
2406@00004188: $26 <= 0000310c
2410@0000418c: $26 <= 00003110
2446@00004180: $26 <= 00000030
2450@00004184: $26 <= 00003110
2458@00004188: $26 <= 00003110
2462@0000418c: $26 <= 00003114
2498@00004180: $26 <= 00000020
2502@00004184: $26 <= 00003114
2510@00004188: $26 <= 00003114
2514@0000418c: $26 <= 00003118
2550@00004180: $26 <= 00000014
2554@00004184: $26 <= 00003118
2562@00004188: $26 <= 00003118
2566@0000418c: $26 <= 0000311c
2602@00004180: $26 <= 00000030
2606@00004184: $26 <= 0000311c
2614@00004188: $26 <= 0000311c
2618@0000418c: $26 <= 00003120
2658@00004180: $26 <= 00000014
2662@00004184: $26 <= 00003124
2670@00004188: $26 <= 00003124
2674@0000418c: $26 <= 00003128
2694@00003128: $ 9 <= 7fffffff
2714@00004180: $26 <= 00000020
2718@00004184: $26 <= 0000312c
2726@00004188: $26 <= 0000312c
2730@0000418c: $26 <= 00003130
2746@00003130: *00000000 <= 00000000
2770@00004180: $26 <= 00000030
2774@00004184: $26 <= 00003134
2782@00004188: $26 <= 00003134
2786@0000418c: $26 <= 00003138
2822@00004180: $26 <= 00000020
2826@00004184: $26 <= 00003138
2834@00004188: $26 <= 00003138
2838@0000418c: $26 <= 0000313c
2858@0000313c: $ 8 <= 80000000
2878@00004180: $26 <= 00000030
2882@00004184: $26 <= 00003140
2890@00004188: $26 <= 00003140
2894@0000418c: $26 <= 00003144
```



###三、 思考题

####（一）请查阅相关资料，说明鼠标和键盘的输入信号是如何被 CPU 知晓的？

 		鼠标和键盘等外设并不是直接与CPU相连的，中间需要通过软件来连接，这个软件也就是我们熟知的驱动。驱动和硬件之间通过操作系统进行处理。


####（二）请思考为什么我们的 CPU 处理中断异常必须是已经指定好的地址？如果你的 CPU 支持用户自定义入口地址，即处理中断异常的程序由用户提供，其还能提供我们所希望的功能吗？如果可以，请说明这样可能会出现什么问题？否则举例说明。（假设用户提供的中断处理程序合法）
​		CPU处理中断异常使用指定好的地址，有利于操作系统对中断处理程序的设计，更有利于异常中断的处理。如果CPU支持用户自定义入口地址，只要定义与其他外设设备的DM空间不冲突，理论上也是可以的，但如果发生地址冲突，则可能因为地址内容覆盖而造成无法挽回的损失。

####（三）为何与外设通信需要 Bridge？
​		因为实际生活中I/O设备相对于CPU是外置的，而系统桥正是模拟了各种I/O接口，通过Bridge来实现CPU和各种外设之间的数据交互。

####（四） 请阅读官方提供的定时器源代码，阐述两种中断模式的异同，并针对每一种模式绘制状态移图

在模式0下：当计数器倒计数为 0 后，计数器停止计数，此时控制寄存器中的使能 Enable 自动变为 0。当使能 Enable 被设置为 1 后，初值寄存器值再次被加载至计数器， 计数器重新启动倒计数。 模式 0 通常用于产生定时中断。例如，为操作系统的时间片调度机制提供定 时。模式 0 下的中断信号将持续有效，直至控制寄存器中的中断屏蔽位被设置为 0。

 在模式1下：当计数器倒计数为 0 后，初值寄存器值被自动加载至计数器，计数器继续倒 计数。 模式 1 通常用于产生周期性脉冲。例如，可以用模式 1 产生步进电机所需的 步进控制信号。不同于模式 0，模式 1 下计数器每次计数循环中只产生一周期的中断信号。

 模式0计时结束后，一直保持中断，直到en或IM被修改，模式1计时结束后，中断一个周期，再重新计数。可以理解为中断保持的逻辑不同。

​		![img](image/TC_mode.png)

####（五）倘若中断信号流入的时候，在检测宏观 PC 的一级如果是一条空泡（你的 CPU 该级所有信息均为空）指令，此时会发生什么问题？在此例基础上请思考：在 P7 中，清空流水线产生的空泡指令应该保留原指令的哪些信息？
​	在阻塞时我们会往流水线中插入 nop，这个 nop 的 `pc` 和 `bd` 信号都是 `0`。此时宏观 PC 会显示错误的值。并且如果此时发生了中断，就会导致 EPC 存入错误的值。

​	所以在P7中，清空流水线产生的空泡指令应该保留原址令的 `PC` 和 `bd` 。

####（六）为什么 jalr 指令为什么不能写成 jalr \$31, $31？
​	如果写成jalr \$31 \$31的话，相当于PC<=GPR[\$31],GPR[\$31]<=PC+4,按照流水线的执行顺序会先将PC+4进行Grf中内部转发，所以相当于进行了一次PC<=PC+4,而没有起到跳转到GPR[\$31]的效果。

###选做题

#### （一）请详细描述你的测试方案及测试数据构造策略。

​		由于p7的实现方式复杂性，所以通过自动化生成数据的效果并不好，所以我只能通过手动构造异常数据和各种支持不同位置中断的tb来实现，并使用数据对拍。

​    	数据构造策略就是分别实现不同的数据之间组合模拟各种常见的异常，以及在中断发生在跳转指令、延迟槽、阻塞指令等不同情况，从而实现测试方案。

​		之后后续借助于我自己的自动化测试工具和课程组的Mars，我实现了自行测试。

## 四、规范化编码

### 1、命名风格

- 各级之间使用`流水级_instr_方向`的方式，来有效地对它们进行区分，如：

  `D/E 寄存器的输入端口就可以命名为 D_instr_i`

- 在顶层模块中，我们需要实例化调用子模块，这个过程会产生很多负责接线的“中间变量”，推荐`流水级_wirename`的方式，并且将同级的信号尽可能都声明在一起。

### 2、模块逻辑排布（看图说话）

<img src="./image/6.png" style="zoom: 67%;" />

### 3、**常量、字面量与宏**

对于指令不同的字段，直接定义 wire 型变量如 op、rs 映射到 instr 的对应位上，直观且简短。

对于控制器译出的信号，如果仅在一个模块内使用，可以使用 localparam 定义。但有很多信号需要被多个模块跨文件使用到（如 alu 的控制信号需要同时在控制器与 alu 出现），并且，我们需要为工程的扩展做好准备，因此更推荐编写一个单独的**宏定义文件（如下）**来供其他的模块用 `include 引用。

<img src="./image/7.png" alt="image-20211120175032051" style="zoom:50%;" />

### 4、译码方式

![](../../../Online_materals/BUAA-CO2021/p5/%E8%AF%BE%E4%B8%8B/8.png)

### 5、译码风格

- 指令驱动型：整体在一个 case 语句之下，通过判断指令的类型，来对所有的控制信号一一进行赋值。这种方法便于指令的添加，不易遗漏控制信号，但是整体代码量会随指令数量增多而显著增大。
- <img src="./image/9.png" alt="image-20211120175741922" style="zoom: 67%;" />
- **控制信号驱动型**：为每个指令定义一个 wire 型变量，使用或运算描述组合逻辑，对每个控制信号进行单独处理。这种方法在指令数量较多时适用，且代码量易于压缩，缺陷是如错添或漏添了某条指令，很难锁定出现错误的位置。
- <img src="./image/1.jpg" alt="image-20211120175828634" style="zoom:67%;" />



