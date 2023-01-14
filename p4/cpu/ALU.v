`timescale 1ns / 1ps
`include"macro.v"
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [6:0] ALUop,
	  input [3:0] change,
    output reg [31:0] res,
    output ALU_change
    );
	 //calc res
	always @(*)begin
    case(ALUop)
        `_ADD:
        res = A+B;
        `_SUB:
        res = A+~B+1;
        `_AND:
        res = A&B;
        `_OR:
        res = A|B;
        `_SLL:
        res = A<<B;
        `_ALU_NEW:begin
          
        end
        default:res = 32'd0;
    endcase
end
	B_transfer b_trans(.A(A),.B(B),.Type(change),.ALU_change(ALU_change));
endmodule
