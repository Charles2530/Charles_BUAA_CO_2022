`timescale 1ns / 1ps
`include "macro.v"
module MD_Unit(input clk,
               input reset,
               input en,
               input [3:0] MDop,
               input [31:0] A,
               input [31:0] B,

               output [31:0] HI,
               output [31:0] LO,
               output [31:0] out,
               output busy
               );
    always @(*)begin
      case(MDop)
        `nop_MDU:begin
          
        end
        `mult_MDU:begin
          
        end
        `multu_MDU:begin
          
        end
        `div_MDU:begin
          
        end
        `divu_MDU:begin
          
        end
        `mfhi_MDU:begin
          
        end
        `mflo_MDU:begin
          
        end
        `mthi_MDU:begin
          
        end
        `mtlo_MDU:begin
          
        end
      endcase
    end 
    
endmodule
