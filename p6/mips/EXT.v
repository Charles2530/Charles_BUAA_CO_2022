`timescale 1ns / 1ps
`include "macro.v"
module EXT(input [15:0] imm16,
           input [2:0] sign,
           output reg [31:0] imm32);
    always @(*)begin
        if (sign == `Zero_Ext)begin
            imm32 = {{16{1'b0}},imm16};
        end
        else if (sign == `Sign_Ext)begin
            imm32 = {{16{imm16[15]}},imm16};
        end
        else if(sign==`Lui_Ext) begin
            imm32 = {imm16,{16{1'b0}}};
        end
    end
endmodule
