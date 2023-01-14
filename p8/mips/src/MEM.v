`timescale 1ns / 1ps
`include "macro.v"
module MEM(input clk,
           input reset,
           input [4:0] M_A3,
           input [31:0] M_ALUout,
          //  input [31:0] M_RD,
           input [31:0] M_PC,
           input [31:0] M_PC8,
           input M_Wegrf,
           input [7:0] M_WhichtoReg,
          //  input [3:0] M_RegDst,
           input [31:0] M_imm32,
           input       M_ALU_change,
           input [1:0] M_Tnew,
           input [5:0] M_DM_type,
           input [1:0] M_low2,
           input [31:0] M_CP0_out,
           input M_mfc0,
           input [31:0] M_Rdata,


           output reg [4:0] W_A3,
           output reg [31:0] W_ALUout,
          //  output [31:0] W_RD,
           output reg [31:0] W_PC,
           output reg [31:0] W_PC8,
           output reg W_Wegrf,
           output reg [7:0] W_WhichtoReg,
          //  output reg [3:0] W_RegDst,
           output reg [31:0] W_imm32,
           output reg        W_ALU_change,
           output reg [1:0] W_Tnew,
           output reg [5:0] W_DM_type,
           output  [1:0] W_low2,
           output reg  [31:0] W_CP0_out,
           output reg  W_mfc0,
           output [31:0] W_Rdata
           );
    always @(posedge clk)begin
        if (reset)begin
            W_A3         <= 0;
            W_ALUout     <= 0;
            // W_RD         <= 0;
            W_PC         <= 0;
            W_PC8        <= 0;
            W_Wegrf      <= 0;
            W_WhichtoReg <= `WhichtoReg_Initial;
            // W_RegDst     <= `RegDst_Initial;
            W_imm32      <= 0;
            W_Tnew       <= 0;
            W_ALU_change <= 0;
            W_DM_type<=`DM_type_Initial;
            // W_low2<=0;
            W_CP0_out<=0;
            W_mfc0<=0;
        end
        else begin
            W_A3         <= M_A3;
            W_ALUout     <= M_ALUout;
            // W_RD         <= M_RD;
            W_PC         <= M_PC;
            W_PC8        <= M_PC8;
            W_Wegrf      <= M_Wegrf;
            W_WhichtoReg <= M_WhichtoReg;
            // W_RegDst     <= M_RegDst;
            W_imm32      <= M_imm32;
            W_Tnew       <= 2'b0;
            W_ALU_change <= M_ALU_change;
            W_DM_type<=M_DM_type;
            W_CP0_out<=M_CP0_out;
            W_mfc0<=M_mfc0;
            //$display("%d M_ALUout:%d ,M_RD:%d ,M_PC:%h",$time,M_ALUout,M_RD,M_PC);
        end
    end
    assign W_Rdata=reset?0:M_Rdata;
    assign W_low2=reset?2'b0:M_low2;

    // assign W_RD=reset?0:M_RD;
endmodule
