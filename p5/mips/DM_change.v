`timescale 1ns / 1ps
`include "macro.v"
module DM_In(input [1:0] low2,
             input [31:0] WD,
             
             output [15:0] new_h,
             output [7:0] new_b
             );
//initial
wire [7:0] WD0,WD1,WD2,WD3,RD0,RD1,RD2,RD3;
assign WD0 = WD[7:0];
assign WD1 = WD[15:8];

//lb,sb
assign new_b  = WD0;
//lh,sh
assign new_h  = {WD1,WD0};


endmodule
