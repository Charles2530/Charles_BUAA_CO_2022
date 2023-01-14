`timescale 1ns / 1ps
`include "macro.v"
module mips(input clk,
            input reset);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //datapath_for_wire_and_reg
    //datapath
    wire stall;
    //IFU
    wire [31:0] npc;
    wire [31:0] F_Instr;
    wire [31:0] F_PC;
    //IF_ID
    wire [31:0] D_Instr;
    wire [31:0] D_PC;
    wire F_reg_clr;
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
    
    //ID_EX
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
    ///////////////////////////////////////////////////
    //ALU
    wire [31:0] e_A;
    wire [31:0] e_B;
    wire [31:0] e_res;
    //MD_Unit
    wire [3:0] d_MDop,e_MDop;
    wire [31:0] HI,LO;
    wire [31:0] mdu_out;
    wire mdu_en,busy;
    //EX_MEM
    wire [31:0] m_RD2;
    wire [31:0] m_res;
    wire [4:0]  m_A3;
    wire [4:0] m_rt;
    wire [31:0] M_PC;
    wire [31:0] M_PC8;
    wire [1:0] m_Tnew;
    wire m_Wegrf;
    wire m_WeDm;
    wire [7:0] m_WhichtoReg;
    wire [3:0] m_RegDst;
    wire [5:0] m_DM_type;
    wire m_check_new;
    wire [31:0] m_imm32;
    wire m_ALU_change;
    //////////////////////////////////////////////////////
    //DM
    wire [31:0] m_Address;
    wire [31:0] m_RD;
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
    wire [1:0] d_SelALU_A,d_SelALU_B;
    wire d_SelDM;
    wire [1:0] d_SelJr;
    wire [31:0] e_A_f,e_B_f;
    wire [31:0] M_WD_f;//DM
    wire is_nop;
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
    .Is_nop(is_nop),
    
    .SelB_D1(d_SelB_D1),
    .SelB_D2(d_SelB_D2),
    .SelALU_A(d_SelALU_A),
    .SelALU_B(d_SelALU_B),
    .SelDM(d_SelDM),
    .stall(stall)
    );
    //////////////////////////////////////////////F//////////////////////////////////////////////////////////////////////////////////////////
    //IFU
    PC pc(
    .clk(clk),
    .reset(reset),
    .NPC(npc),
    .en(~stall),
    
    .Instr(F_Instr),
    .PC(F_PC)
    );
    //IF_ID
    // assign F_reg_clr=d_check_new&&~d_ALU_change&&~stall;
    assign F_reg_clr=1'b0;
    IF F_reg(
    .clk(clk),
    .reset(reset),
    .en(~stall),
    .clr(F_reg_clr),
    .F_Instr(F_Instr),
    .F_PC(F_PC),
    
    .D_Instr(D_Instr),
    .D_PC(D_PC)
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
    .rt(d_rt),
    
    .ALUop(d_ALUop),
    .Wegrf(d_Wegrf_origin),
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
    
    .D_Tuse_rs(D_Tuse_rs),
    .D_Tuse_rt(D_Tuse_rt),
    .D_Tnew(d_Tnew)
    );
    // assign d_Wegrf=d_check_new&&(d_branch!=`PC4_NPC)?(d_ALU_change?1'b1:1'b0):d_Wegrf_origin;
    assign d_Wegrf=d_Wegrf_origin;
    //submit for branch
    //ID_EX
    ID D_reg(
    .clk(clk),
    .reset(reset),
    .clr(stall),
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
    .E_check_new(e_check_new)
    );
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
    
    ALU alu(
    .A(e_A),
    .B(e_B),
    .ALUop(e_ALUop),
    
    .res(e_res)
    );
    //MD_Unit
    MD_Unit mdu (
    .clk(clk), 
    .reset(reset), 
    .en(mdu_en), 
    .MDop(e_MDop), 
    .A(e_A), 
    .B(e_B),

    .HI(HI), 
    .LO(LO), 
    .out(mdu_out), 
    .busy(busy)
    );
    //EX_MEM
    assign 	ED =  (e_WhichtoReg == 8'b0000_0001)?e_res:
                  // (e_WhichtoReg == 8'b0000_0010)?e_RD:
                  (e_WhichtoReg == 8'b0000_0100)?e_imm32:
                  (e_WhichtoReg == 8'b0000_1000)?E_PC8:
                  e_ALU_change;//
    EX E_reg(
    .clk(clk),
    .reset(reset),
    .E_A2(e_rt),
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

    
    .M_A2(m_rt),
    .M_A3(m_A3_origin),
    .M_RD2(m_RD2),
    .M_ALUout(m_res),
    .M_PC(M_PC),
    .M_PC8(M_PC8),
    .M_Tnew(m_Tnew),
    .M_Wegrf(m_Wegrf),
    .M_WeDm(m_WeDm),
    .M_WhichtoReg(m_WhichtoReg),
    .M_RegDst(m_RegDst),
    .M_DM_type(m_DM_type),
    .M_imm32(m_imm32),
    .M_ALU_change(m_ALU_change),
    .M_check_new(m_check_new)
    );
    //////////////////////////////////////////////M//////////////////////////////////////////////////////////////////////////////////////////
    //DM
    assign m_Address = m_res;
    assign M_WD_f    =  (d_SelDM)?WD:
                        m_RD2;
    DM dm(
    .Address(m_Address),
    .WD(M_WD_f),
    .clk(clk),
    .reset(reset),
    .pc(M_PC),
    .WE(m_WeDm),
    .DM_type(m_DM_type),
    
    .RD(m_RD)
    );
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
endmodule
