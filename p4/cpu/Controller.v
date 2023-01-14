`timescale 1ns / 1ps
module Controller(
    input [5:0] op,
    input [5:0] func,

    output [6:0] ALUop,
    output Wegrf,
    output WeDm,
    output [3:0] branch,
    output [3:0] AluSrc1,
    output [3:0] AluSrc2,
    output [7:0] WhichtoReg,
    output [3:0] RegDst,
    output SignExt,
    output [3:0] B_change,
    output [3:0] DM_type
    );
	wire _addu,_subu,_ori,_lw,_sw,_lui,_beq,_andi,_jal,_j,_jr,_sll,_add,_sub,_slt,_lb,_sb,_lh,_sh,_addi,_and,_or,_sllv,_blez;
	//R
	assign _addu=(op==6'b000000)&&(func==6'b100001);
	assign _subu=(op==6'b000000)&&(func==6'b100011);
	assign _add=(op==6'b000000)&&(func==6'b100000);
	assign _sub=(op==6'b000000)&&(func==6'b100010);
	assign _sll=(op==6'b000000)&&(func==6'b000000);
	assign _slt=(op==6'b000000)&&(func==6'b101010);
	assign _and=(op==6'b000000)&&(func==6'b100100);
	assign _or= (op==6'b000000)&&(func==6'b100101);
	assign _sllv=(op==6'b000000)&&(func==6'b000100);
	assign _jr=(op==6'b000000)&&(func==6'b001000);

	//I
	assign _ori=op==6'b001101;
	assign _lw=op==6'b100011;
	assign _sw=op==6'b101011;
	assign _lui=op==6'b001111;
	assign _beq=op==6'b000100;
	assign _andi=op==6'b001100;
	assign _addi=op==6'b001000;
	assign _lb=op==6'b100000;
	assign _sb=op==6'b101000;
	assign _lh=op==6'b100001;
	assign _sh=op==6'b101001;
	assign _blez=op==6'b000110;
	
	//_j
	assign _jal=op==6'b000011;
	assign _j=op==6'b000010;
//
	wire ALUop_6,ALUop_5,ALUop_4,ALUop_3,ALUop_2,ALUop_1,ALUop_0;
	assign ALUop_0=~ALUop_6&&~ALUop_5&&~ALUop_4&&~ALUop_3&&~ALUop_2&&~ALUop_1;
	assign ALUop_1=_subu||_sub;
	assign ALUop_2=_andi||_and;
	assign ALUop_3=_ori||_or;
	assign ALUop_4=_sll||_sllv;
	assign ALUop_5=1'b0;
	assign ALUop_6=1'b0;
	/////////////////////////////////////////
	wire branch_3,branch_2,branch_1,branch_0;
	assign branch_0=~branch_3&&~branch_2&&~branch_1;
	assign branch_1=_beq||_blez;
	assign branch_2=_j||_jal;
	assign branch_3=_jr;
	/////////////////////////////////////////
	wire AluSrc1_3,AluSrc1_2,AluSrc1_1,AluSrc1_0;
	assign AluSrc1_0=~AluSrc1_3&&~AluSrc1_2&&~AluSrc1_1;//rs
	assign AluSrc1_1=_sll;//rt
	assign AluSrc1_2=1'b0;
	assign AluSrc1_3=1'b0;
	/////////////////////////////////////////
	wire AluSrc2_3,AluSrc2_2,AluSrc2_1,AluSrc2_0;
	assign AluSrc2_0=~AluSrc2_3&&~AluSrc2_2&&~AluSrc2_1;//rt
	assign AluSrc2_1=_lw||_sw||_ori||_andi||_sb||_lb||_sh||_lh||_addi;//imm32
	assign AluSrc2_2=_sll;//shamt
	assign AluSrc2_3=_blez;//rs
	/////////////////////////////////////////
	wire WhichtoReg_7,WhichtoReg_6,WhichtoReg_5,WhichtoReg_4,WhichtoReg_3,WhichtoReg_2,WhichtoReg_1,WhichtoReg_0;
	assign WhichtoReg_0=~WhichtoReg_1&&~WhichtoReg_2&&~WhichtoReg_3&&~WhichtoReg_4&&
                      ~WhichtoReg_5&&~WhichtoReg_6&&~WhichtoReg_7;//res
	assign WhichtoReg_1=_lw||_lh||_lb;	//RD
	assign WhichtoReg_2=_lui;//imm32
	assign WhichtoReg_3=_jal;//PC4
	assign WhichtoReg_4=_slt;//ALU_change
	assign WhichtoReg_5=1'b0;
	assign WhichtoReg_6=1'b0;
	assign WhichtoReg_7=1'b0;
	/////////////////////////////////////////
	wire RegDst_3,RegDst_2,RegDst_1,RegDst_0;
	assign RegDst_0=~RegDst_1&&~RegDst_2&&~RegDst_3;//rd
	assign RegDst_1=_lui||_lw||_sw||_ori||_andi||_sh||_lh||_sb||_lb||_addi;//rt
	assign RegDst_2=_jal;//$31
	assign RegDst_3=1'b0;
	/////////////////////////////////////////
	wire B_change_3,B_change_2,B_change_1,B_change_0;
	assign B_change_0=_beq;
	assign B_change_1=_slt;
	assign B_change_2=_blez;
	assign B_change_3=1'b0;
	/////////////////////////////////////////
	wire DM_type_3,DM_type_2,DM_type_1,DM_type_0;
	assign DM_type_0=_lw||_sw;
	assign DM_type_1=_lh||_sh;
	assign DM_type_2=_lb||_sb;
	assign DM_type_3=1'b0;


//
	assign ALUop={ALUop_6,ALUop_5,ALUop_4,ALUop_3,ALUop_2,ALUop_1,ALUop_0};
	assign Wegrf=_sub||_addu||_subu||_ori||_lui||_sll||_jal||_andi||_lw||_add||_addi||_sllv||_slt;
	assign WeDm=_sw||_sh||_sb;
	assign branch={branch_3,branch_2,branch_1,branch_0};
  assign AluSrc1={AluSrc1_3,AluSrc1_2,AluSrc1_1,AluSrc1_0};
	assign AluSrc2={AluSrc2_3,AluSrc2_2,AluSrc2_1,AluSrc2_0};
	assign WhichtoReg={WhichtoReg_7,WhichtoReg_6,WhichtoReg_5,WhichtoReg_4,WhichtoReg_3,WhichtoReg_2,WhichtoReg_1,WhichtoReg_0};
  assign RegDst={RegDst_3,RegDst_2,RegDst_1,RegDst_0};
	assign SignExt=_lw||_sw||_beq||_lh||_sh||_lb||_sb||_blez||_addi;
	assign B_change={B_change_3,B_change_2,B_change_1,B_change_0};
	assign DM_type={DM_type_3,DM_type_2,DM_type_1,DM_type_0};
endmodule
