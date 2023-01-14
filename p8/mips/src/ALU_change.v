`timescale 1ns / 1ps
`include "macro.v"
module B_transfer(input [31:0] A,
                  input [31:0] B,
                  input [3:0] Type,
                  output ALU_change);
wire eq,less,more;
//calc ALU_change
assign eq   = (A == B);
assign eq_zero   = (A == 0);
assign less = $signed(A)<$signed(B);
assign less_zero = $signed(A)<0;
assign more = $signed(A)>$signed(B);
assign more_zero = $signed(A)>0;
//calc B
wire beq,bgez,bgtz,blez,bltz,bne;
assign beq  = eq;
assign bgez = eq_zero||more_zero;
assign bgtz = more_zero;
assign blez = eq_zero||less_zero;
assign bltz = less_zero;
assign bne = ~eq;
//mux
assign ALU_change = (Type == `beq_B_trans)?beq:
                    (Type == `bgez_B_trans)?bgez:
                    (Type == `bgtz_B_trans)?bgtz:
                    (Type == `blez_B_trans)?blez:
                    (Type == `bltz_B_trans)?bltz:
                    (Type == `bne_B_trans)?bne:
                    1'b0;

endmodule
