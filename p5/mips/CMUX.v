`timescale 1ns / 1ps
module CMUX_A3(
    input [2:0] SelA3,
	 input [4:0] D_instr_rt,
	 input [4:0] D_instr_rd,
	 output [4:0] D_A3
    );
	 assign D_A3=	(SelA3==3'b001)?D_instr_rt:
						(SelA3==3'b010)?D_instr_rd:
						5'h1f;
endmodule
module CMUX_ALU_B(
    input [1:0] SelALUB,
	 input [4:0] E_V2_f,
	 input [4:0] E_imm32,
	 output [4:0] ALU_S
    );
	 assign D_A3=	(SelALUB==2'b01)?E_V2_f:
						E_imm32;
endmodule