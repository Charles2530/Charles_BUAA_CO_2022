`timescale 1ns / 1ps
`include"macro.v"
module Bridge(input [31:0] Address_in,
              input [31:0] WD_in,
              input [3:0] byteen,
              input [31:0] DM_RD,
              input [31:0] T0_RD,
              input [31:0] T1_RD,

              output [3:0] DM_WE,
              output T0_WE,
              output T1_WE,
              output [31:0] Address_out,
              output [31:0] WD_out,
              output [31:0] RD_out
              );
    assign DM_WE       = (Address_in >= `Data_Begin&&Address_in <= `Data_End)?byteen:4'd0;
    assign T0_WE       = (Address_in >= `T0_Begin&&Address_in <= `T0_End)?&byteen:1'd0;
    assign T1_WE       = (Address_in >= `T1_Begin&&Address_in <= `T1_End)?&byteen:1'd0;
    assign Address_out = Address_in;
    assign WD_out      = WD_in;
    assign RD_out      = (Address_in >= `Data_Begin&&Address_in <= `Data_End)?DM_RD:
                         (Address_in >= `T0_Begin&&Address_in <= `T0_End)?T0_RD:
                         (Address_in >= `T1_Begin&&Address_in <= `T1_End)?T1_RD:
                         32'd0;
endmodule
