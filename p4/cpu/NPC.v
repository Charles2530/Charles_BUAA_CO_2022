`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:57:32 10/28/2022 
// Design Name: 
// Module Name:    NPC 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module NPC(
    input [31:0] now_PC,
	 input [31:0] imm32,
    input [3:0] branch,
    input ALU_change,
    output [31:0] PC4,
    output reg[31:0] npc,
	 output [31:0] PC
    );
	assign PC4=now_PC+4;
	always @(*)begin
		if(branch==4'b0001)begin
			npc=PC4;
		end
		else if(branch==4'b0010)begin
			if(ALU_change)begin
				npc=PC4+{imm32[29:0],{2{1'b0}}};
			end
			else begin
				npc=PC4;
			end
		end
		else if(branch==4'b0100)begin
			npc={now_PC[31:28],imm32[25:0],{2{1'b0}}};
		end
		else begin
			npc=imm32;
		end
	end
	assign PC=now_PC;

endmodule
