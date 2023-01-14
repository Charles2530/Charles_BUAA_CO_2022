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
    wire d_is_Alu,e_is_Alu;
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
    wire [4:0] ExcCode;
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
    .E_rd(e_rd),
    .M_rd(m_rd),
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
    wire f_eret=(F_Instr[31:26] == 6'b010000)&&(F_Instr[5:0] == 6'b011000);
	 assign pc_in=(req)?`Error_Entry:
                (d_eret)?EPC+4:
                npc;
  	//  assign pc_in=(f_eret)?EPC:
    //               (req)?`Error_Entry:
    //               npc;
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
    assign F_Instr= (F_error_range)?0:
                    // (i_inst_rdata===32'bxxxx_xxxx&&pc_in<=`Error_Entry-32'd4)?0:
                    i_inst_rdata;
    /////////////////////EXCEPTION/////////////////////////
    assign f_syscall=(F_Instr[31:26] == 6'b000000)&&(F_Instr[5:0] == 6'b001100);
    // assign F_error_range=((F_PC<`Text_Begin)||(F_PC>`Text_End)||(|F_PC[1:0]))&&(!d_eret);
    assign F_error_range=((F_PC<`Text_Begin)||(F_PC>`Text_End)||(|F_PC[1:0]));
    assign f_ExcCode_in=(F_error_range)?`Error_AdEL:
                        (f_syscall)?`Error_Syscall:
                        `Error_None;
    assign f_BD=(d_branch!=`PC4_NPC);
    ///////////////////////////////////////////////////////
    //IF_ID
    // assign F_reg_clr=d_check_new&&~d_ALU_change&&~stall;
    assign F_reg_clr=1'b0;
    assign F_PC=(d_eret)?EPC:F_PC_origin;
    // assign F_PC=F_PC_origin;
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
    .is_Alu(d_is_Alu),
    
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
    assign d_ExcCode_fixed= (d_ExcCode_in!=`Error_None)?d_ExcCode_in:
                            (d_excRI)?`Error_RI:
                            `Error_None;
    ////////////////////////////////////////////////////////////////////////
    //ID_EX
    ID D_reg(
    .clk(clk),
    .reset(reset),
    .clr(stall),
    .req(req),
    .D_Instr(D_Instr),
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
    .D_is_Alu(d_is_Alu),
    
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
    .E_syscall(e_syscall),
    .E_is_Alu(e_is_Alu)
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
    wire e_is_DM;
    assign e_is_DM=(e_DM_type==`Word_DM)||(e_DM_type==`Half_DM)||(e_DM_type==`Unsigned_Half_DM)||(e_DM_type==`Byte_DM)||(e_DM_type==`Unsigned_Byte_DM);
    wire Error_Ov_Alu;
    assign Error_Ov_Alu=overflow&&e_is_Alu;
    wire Error_Ov_DM;
    assign Error_Ov_DM=overflow&&e_is_DM;
    assign e_ExcCode_fixed= (e_ExcCode_in!=`Error_None)?e_ExcCode_in:
                            (Error_Ov_DM)?((e_WeDm)?`Error_AdES:`Error_AdEL):
                            (Error_Ov_Alu)?`Error_Ov:
                            `Error_None;
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
    assign m_ExcCode_fixed=(m_ExcCode_in!=`Error_None)?m_ExcCode_in:
                            (is_DM)?(((Is_Align&&!m_WeDm_origin)||(Is_ErrorRange&&!m_WeDm_origin)||(Error_Timer&&!m_WeDm_origin))?`Error_AdEL:
                                    ((Is_Align&&m_WeDm_origin)||(Is_ErrorRange&&m_WeDm_origin)||(Error_Timer&&m_WeDm_origin)||(Error_Save_Timer&&m_WeDm_origin))?`Error_AdES:
                                    `Error_None):
                           `Error_None;
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
    assign VPC=M_PC;
    // assign VPC=(m_branch==`PC4_NPC)?M_PC:D_PC;
    assign HWInt={3'd0,interrupt,inter_T1,inter_T0};
    assign EXLClr=m_eret;
    assign ExcCode=m_ExcCode_fixed;
    CP0 cp0 (
    .clk(clk), 
    .reset(reset), 
    .WE(CP0_WE), 
    .Address(CP0_Address), 
    .WD(CP0_WD), 
    .BD_in(BD_in), 
    .VPC(VPC), 
    .ExcCode_in(ExcCode), 
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
    assign  i_inst_addr   = F_PC;
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

endmodule