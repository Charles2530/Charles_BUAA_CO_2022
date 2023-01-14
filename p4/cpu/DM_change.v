`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:21:16 10/28/2022 
// Design Name: 
// Module Name:    DM_change 
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
module DM_In(
    input [1:0] low2,
    input [31:0] WD,

    output [31:0] new_h,
    output [31:0] new_b
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
