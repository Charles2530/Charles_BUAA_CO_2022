`timescale 1ns / 1ps
`include "macro.v"
module Controller(input [5:0] op,
                  input [5:0] func,
                  input [4:0] rt,

                  output [11:0] ALUop,
                  output Wegrf,
                  output WeDm,
                  output [4:0] branch,
                  output [3:0] AluSrc1,
                  output [3:0] AluSrc2,
                  output [7:0] WhichtoReg,
                  output [3:0] RegDst,
                  output [2:0] SignExt,
                  output [3:0] B_change,
                  output [5:0] DM_type,
                  output [3:0] MDop,
                  output check_new,

                  output [1:0] D_Tuse_rs,
                  output [1:0] D_Tuse_rt,
                  output [1:0] D_Tnew
                  );
//calc_r
wire _add,_sub,_addu,_subu,_and,_or,_nor,_xor,_slt,_sltu;
assign _add  = (op == 6'b000000)&&(func == 6'b100000);
assign _sub  = (op == 6'b000000)&&(func == 6'b100010);
assign _addu = (op == 6'b000000)&&(func == 6'b100001);
assign _subu = (op == 6'b000000)&&(func == 6'b100011);
assign _and  = (op == 6'b000000)&&(func == 6'b100100);
assign _or   = (op == 6'b000000)&&(func == 6'b100101);
assign _nor   = (op == 6'b000000)&&(func == 6'b100111);
assign _xor   = (op == 6'b000000)&&(func == 6'b100110);
assign _slt  = (op == 6'b000000)&&(func == 6'b101010);
assign _sltu  = (op == 6'b000000)&&(func == 6'b101011);

//calc_i
wire _addi,_addiu,_andi,_ori,_xori,_slti,_sltiu;
assign _addi = op == 6'b001000;
assign _addiu = op == 6'b001001;
assign _andi = op == 6'b001100;
assign _ori  = op == 6'b001101;
assign _xori  = op == 6'b001110;
assign _slti  = op == 6'b001010;
assign _sltiu  = op == 6'b001011;

//shift
wire _sll,_sra,_srl;
assign _sll  = (op == 6'b000000)&&(func == 6'b000000);
assign _sra  = (op == 6'b000000)&&(func == 6'b000011);
assign _srl  = (op == 6'b000000)&&(func == 6'b000010);

//shift_v
wire _sllv,_srav,_srlv;
assign _sllv = (op == 6'b000000)&&(func == 6'b000100);
assign _srav  = (op == 6'b000000)&&(func == 6'b000111);
assign _srlv  = (op == 6'b000000)&&(func == 6'b000110);

//load
wire _lw,_lh,_lhu,_lb,_lbu;
assign _lw   = op == 6'b100011;
assign _lh   = op == 6'b100001;
assign _lhu   = op == 6'b100101;
assign _lb   = op == 6'b100000;
assign _lbu   = op == 6'b100100;

//store
wire _sw,_sh,_sb;
assign _sw   = op == 6'b101011;
assign _sh   = op == 6'b101001;
assign _sb   = op == 6'b101000;

//b_type
wire _beq,_bne,_bgtz,_blez,_bgez,_bltz;
assign _beq  = op == 6'b000100;
assign _bgez = (op == 6'b000001)&&(rt == 5'b00001);
assign _bgtz = op == 6'b000111;
assign _blez = op == 6'b000110;
assign _bltz = (op == 6'b000001)&&(rt == 5'b00000);
assign _bne = op == 6'b000101;

//j_type
wire _j,_jal,_jr,_jalr;
assign _j   = op == 6'b000010;
assign _jal = op == 6'b000011;
assign _jr   = (op == 6'b000000)&&(func == 6'b001000);
assign _jalr = (op == 6'b000000)&&(func == 6'b001001);

//lui
wire _lui;
assign _lui  = op == 6'b001111;

//md
wire _mult,_multu,_div,_divu;
assign _div = (op == 6'b000000)&&(func == 6'b011010);
assign _divu = (op == 6'b000000)&&(func == 6'b011011);
assign _mult = (op == 6'b000000)&&(func == 6'b011000);
assign _multu = (op == 6'b000000)&&(func == 6'b011001);

//mf
wire _mfhi,_mflo;
assign _mfhi = (op == 6'b000000)&&(func == 6'b010000);
assign _mflo = (op == 6'b000000)&&(func == 6'b010010);

//mt
wire _mthi,_mtlo;
assign _mthi = (op == 6'b000000)&&(func == 6'b010001);
assign _mtlo = (op == 6'b000000)&&(func == 6'b010011);

//new
wire _new_op;
// assign _new_op =(op == 6'b000000)&&(func == 6'b000000);
assign _new_op =1'b0;
/////////////////////////////////////
//category
wire calc_r,calc_i,shift,shift_v,load,store,b_type,j_type,md_type,mf_type,mt_type;
assign calc_r  = _add||_sub||_addu||_subu||_and||_or||_nor||_xor||_slt||_sltu;
assign calc_i  = _addi||_addiu||_andi||_ori||_xori||_slti||_sltiu;
assign shift   = _sll||_sra||_srl;
assign shift_v = _sllv||_srav||_srlv;
assign load    = _lw||_lh||_lhu||_lb||_lbu;
assign store   = _sw||_sh||_sb;
assign b_type  = _beq||_bne||_bgtz||_blez||_bgez||_bltz;
assign j_type  = _jal||_j||_jr||_jalr;
assign md_type = _mult||_multu||_div||_divu;
assign mf_type = _mfhi||_mflo;
assign mt_type = _mthi||_mtlo;
/////////////////////////////////////////////
wire ALUop_11,ALUop_10,ALUop_9,ALUop_8,ALUop_7,ALUop_6,ALUop_5,ALUop_4,ALUop_3,ALUop_2,ALUop_1,ALUop_0;
assign ALUop_0 = ~ALUop_11&&~ALUop_10&&~ALUop_9&&~ALUop_8&&~ALUop_7&&~ALUop_6&&~ALUop_5&&~ALUop_4&&~ALUop_3&&~ALUop_2&&~ALUop_1;
assign ALUop_1 = _subu||_sub;
assign ALUop_2 = _andi||_and;
assign ALUop_3 = _ori||_or;
assign ALUop_4 = _xor||_xori;
assign ALUop_5 = _nor;
assign ALUop_6 = _sll||_sllv;
assign ALUop_7 = _sra||_srav;
assign ALUop_8 = _srl||_srlv;
assign ALUop_9 = _slt||_slti;
assign ALUop_10 = _sltiu;
assign ALUop_11 = 1'b0;
/////////////////////////////////////////
wire branch_4,branch_3,branch_2,branch_1,branch_0;
assign branch_0 = ~branch_4&&~branch_3&&~branch_2&&~branch_1;
assign branch_1 = _beq||_blez||_bgez||_bgtz||_bltz||_bne;
assign branch_2 = _j||_jal;
assign branch_3 = _jr||_jalr;
assign branch_4 = 1'b0;
/////////////////////////////////////////
wire AluSrc1_3,AluSrc1_2,AluSrc1_1,AluSrc1_0;
assign AluSrc1_0 = ~AluSrc1_3&&~AluSrc1_2&&~AluSrc1_1;//rs
assign AluSrc1_1 = _sll||_sllv||_sra||_srav||_srl||_srlv;//rt
assign AluSrc1_2 = 1'b0;
assign AluSrc1_3 = 1'b0;
/////////////////////////////////////////
wire AluSrc2_3,AluSrc2_2,AluSrc2_1,AluSrc2_0;
assign AluSrc2_0   = ~AluSrc2_3&&~AluSrc2_2&&~AluSrc2_1;//rt
assign AluSrc2_1   = _lw||_sw||_ori||_andi||_sb||_lb||_sh||_lh||
                     _addi||_lui||_addiu||_slti||_sltiu||_xori||_lbu||_lhu;//imm32
assign AluSrc2_2   = _sll||_sra||_srl;//shamt
assign AluSrc2_3   = _sllv||_srav||_srlv;//rs
/////////////////////////////////////////
wire WhichtoReg_7,WhichtoReg_6,WhichtoReg_5,WhichtoReg_4,WhichtoReg_3,WhichtoReg_2,WhichtoReg_1,WhichtoReg_0;
assign WhichtoReg_0 = ~WhichtoReg_1&&~WhichtoReg_2&&~WhichtoReg_3&&~WhichtoReg_4&&
                      ~WhichtoReg_5&&~WhichtoReg_6&&~WhichtoReg_7;//res
assign WhichtoReg_1 = _lw||_lh||_lb||_lbu||_lhu;//RD
assign WhichtoReg_2 = _lui;//imm32
assign WhichtoReg_3 = _jal||_jalr;//PC8
assign WhichtoReg_4 = 1'b0;//ALU_change
assign WhichtoReg_5 = 1'b0;
assign WhichtoReg_6 = 1'b0;
assign WhichtoReg_7 = 1'b0;
/////////////////////////////////////////
wire RegDst_3,RegDst_2,RegDst_1,RegDst_0;
assign RegDst_0 = ~RegDst_1&&~RegDst_2&&~RegDst_3;//rd
assign RegDst_1 = _lui||_lw||_sw||_ori||_andi||_sh||_lh||
                  _sb||_lb||_addi||_xori||_addiu||_slti||_sltiu||_lbu||
                  _lhu;//rt
assign RegDst_2 = _jal;//$31
assign RegDst_3 = 1'b0;
/////////////////////////////////////////
wire SignExt_2,SignExt_1,SignExt_0;
assign SignExt_0 = ~SignExt_1&&~SignExt_2;
assign SignExt_1 = _lw||_sw||_beq||_lh||_sh||_lb||_sb||_blez||
                   _addi||_sltiu||_slti||_bne||_bltz||_bgtz||_bgez||_addiu||
                   _lbu||_lhu;
assign SignExt_2 = _lui;
/////////////////////////////////////////
wire DM_type_5,DM_type_4,DM_type_3,DM_type_2,DM_type_1,DM_type_0;
assign DM_type_0 = _lw||_sw;
assign DM_type_1 = _lh||_sh;
assign DM_type_2 = _lb||_sb;
assign DM_type_3 = _lhu;
assign DM_type_4 = _lbu;
assign DM_type_5 = 1'b0;
//////////////////////////////////////////////
wire D_Tuse_rs_1,D_Tuse_rs_0;
assign  D_Tuse_rs_1 = 1'b0;
assign  D_Tuse_rs_0 = calc_r||calc_i||shift_v||load||store||md_type||mt_type;
//////////////////////////////////////////////
wire D_Tuse_rt_1,D_Tuse_rt_0;
assign  D_Tuse_rt_1 = store;
assign  D_Tuse_rt_0 = calc_r||shift||shift_v||md_type;
//////////////////////////////////////////////////
assign ALUop      = {ALUop_11,ALUop_10,ALUop_9,ALUop_8,ALUop_7,ALUop_6,ALUop_5,ALUop_4,ALUop_3,ALUop_2,ALUop_1,ALUop_0};
assign Wegrf      = _add||_sub||_addu||_subu||_addiu||_addi||_or||_ori||
                    _and||_andi||_xor||_xori||_nor||_sll||_sllv||_sra||
                    _srav||_srl||_srlv||_lui||
                    _lw||_lb||_lh||_lbu||_lhu||
                    _jal||_jalr||
                    _slt||_slti||_sltiu;
assign WeDm       = _sw||_sh||_sb;
assign branch     = {branch_4,branch_3,branch_2,branch_1,branch_0};
assign AluSrc1    = {AluSrc1_3,AluSrc1_2,AluSrc1_1,AluSrc1_0};
assign AluSrc2    = {AluSrc2_3,AluSrc2_2,AluSrc2_1,AluSrc2_0};
assign WhichtoReg = {WhichtoReg_7,WhichtoReg_6,WhichtoReg_5,WhichtoReg_4,WhichtoReg_3,WhichtoReg_2,WhichtoReg_1,WhichtoReg_0};
assign RegDst     = {RegDst_3,RegDst_2,RegDst_1,RegDst_0};
assign SignExt    = {SignExt_2,SignExt_1,SignExt_0};
assign B_change   = (_beq)?`beq_B_trans:
                    (_bgez)?`bgez_B_trans:
                    (_bgtz)?`bgtz_B_trans:
                    (_blez)?`blez_B_trans:
                    (_bltz)?`bltz_B_trans:
                    (_bne)?`bne_B_trans:
                    `nop_B_trans;
assign DM_type    = {DM_type_4,DM_type_3,DM_type_2,DM_type_1,DM_type_0};
assign MDop       = (_mult)?`mult_MDU:
                    (_multu)?`multu_MDU:
                    (_div)?`div_MDU:
                    (_divu)?`divu_MDU:
                    (_mfhi)?`mfhi_MDU:
                    (_mflo)?`mflo_MDU:
                    (_mthi)?`mthi_MDU:
                    (_mtlo)?`mtlo_MDU:
                    `nop_MDU;
assign check_new=_new_op;
//A_T
wire has_rs;
wire has_rt;
assign has_rs=calc_r||calc_i||shift_v||load||store||md_type||mt_type||b_type||_jal||_jalr||_jr;
assign has_rt=store||calc_r||shift||shift_v||md_type||b_type;
assign D_Tuse_rs  = (has_rs)?{D_Tuse_rs_1,D_Tuse_rs_0}:2'd3;
assign D_Tuse_rt  = (has_rt)?{D_Tuse_rt_1,D_Tuse_rt_0}:2'd3;
assign D_Tnew     = (load)?2'd3:
                    (calc_i||calc_r||shift||shift_v||mf_type)?2'd2:
                    (_lui)?2'd1:
                    2'd0;
endmodule