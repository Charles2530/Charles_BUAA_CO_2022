`timescale 1ns / 1ps
`include "macro.v"
module IF(input clk,
          input reset,
          input en,
          input clr,
          input [31:0] F_Instr,
          input [31:0] F_PC,

          output reg [31:0] D_Instr,
          output reg [31:0] D_PC
			 );
    always @(posedge clk)begin
        if (reset||clr)begin
            D_Instr <= 0;
            D_PC    <= `PC_Initial;
        end
        else begin
            if (en)begin
                D_Instr <= F_Instr;
                D_PC    <= F_PC;
            end
				else begin
            D_Instr <= D_Instr;
            D_PC    <= D_PC;
				end
            //$display("%d F_Instr:%h F_PC:%h",$time,F_Instr,F_PC);
        end
    end
endmodule
