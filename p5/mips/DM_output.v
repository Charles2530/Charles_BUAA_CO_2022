`timescale 1ns / 1ps
`include "macro.v"
module DM_Out(input [1:0] low2,
              input [5:0] DM_type,
              input [31:0] DM_output,

              output [31:0] RD
              );
    wire [7:0] DM_output_3,DM_output_2,DM_output_1,DM_output_0;
    assign DM_output_0 = DM_output[7:0];
    assign DM_output_1 = DM_output[15:8];
    assign DM_output_2 = DM_output[23:16];
    assign DM_output_3 = DM_output[31:24];
    wire [31:0] out_h,out_b,out_hu,out_bu;
    //sb,lb
    wire [7:0] low_b;
    assign low_b =  (low2 == 2'b00)?DM_output_0:
                    (low2 == 2'b01)?DM_output_1:
                    (low2 == 2'b10)?DM_output_2:
                    DM_output_3;
    assign out_bu = {{24{1'b0}},low_b};
    assign out_b = {{24{low_b[7]}},low_b};
    //sh,lh
    wire [15:0] low_h;
    assign low_h = (low2 == 2'b00)? {DM_output_1,DM_output_0}:
                                    {DM_output_3,DM_output_2};
    assign out_hu = {{16{1'b0}},low_h};
    assign out_h = {{16{low_h[15]}},low_h};
    //output
    assign RD = (DM_type == `Word_DM)?DM_output:
                (DM_type == `Half_DM)?out_h:
                (DM_type == `Byte_DM)?out_b:
                (DM_type == `Unsigned_Half_DM)?out_hu:
                (DM_type == `Unsigned_Byte_DM)?out_bu:
                32'b0;
endmodule
