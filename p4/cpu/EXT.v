`timescale 1ns / 1ps
module EXT(input [15:0] imm16,
           input sign,
           output reg [31:0] imm32
           );
    always @(*)begin
        if (sign == 1'b0)begin
            imm32 = {{16{1'b0}},imm16};
        end
        else begin
            imm32 = {{16{imm16[15]}},imm16};
        end
    end
endmodule
