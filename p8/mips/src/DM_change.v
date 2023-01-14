`timescale 1ns / 1ps
`include "macro.v"
module DM_In(input [1:0] low2,
             input [31:0] WD,
             input [5:0] DM_type,

             output [3:0] data_byteen,
             output [31:0] DM_input
             );
wire [7:0] new_b;
wire [15:0] new_h;
//initial
assign new_b=WD[7:0];
assign new_h=WD[15:0];
//lb,sb
assign data_byteen =  (DM_type == `Word_DM)?4'b1111:
                      (DM_type == `Half_DM||DM_type == `Unsigned_Half_DM)?( (low2[1] == 1'b1)?4'b1100:4'b0011):
                      (DM_type == `Byte_DM||DM_type == `Unsigned_Byte_DM)?( (low2 == 2'b00)?4'b0001:
                                                                            (low2 == 2'b01)?4'b0010:
                                                                            (low2 == 2'b10)?4'b0100:
                                                                            4'b1000):
                                                                            4'b0000;
//lh,sh
assign DM_input =   (DM_type == `Word_DM)?WD:
                    (DM_type == `Half_DM||DM_type == `Unsigned_Half_DM)?((low2[1] == 1'b1)?{new_h,{16{1'b0}}}:{{16{1'b0}},new_h}):
                    (DM_type == `Byte_DM||DM_type == `Unsigned_Byte_DM)?((low2 == 2'b00)?{{24{1'b0}},new_b}:
                                                                        (low2 == 2'b01)?{{16{1'b0}},new_b,{8{1'b0}}}:
                                                                        (low2 == 2'b10)?{{8{1'b0}},new_b,{16{1'b0}}}:
                                                                        {new_b,{24{1'b0}}}):
                                                                        32'd0;
// assign DM_input = WD;

endmodule
