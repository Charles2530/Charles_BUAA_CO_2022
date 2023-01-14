`timescale 1ns / 1ps
`include "macro.v"
module PC(input clk,
          input reset,
          input en,
          input [31:0] NPC,
			 
          output [31:0] Instr,
          output [31:0] PC
			 );
    reg [31:0] now_PC = `PC_Initial;
    wire [11:0] Address;
    //transfer
    always @(posedge clk)begin
        if (reset)begin
            now_PC <= `PC_Initial;
        end
        else begin
            if (en)begin
                now_PC <= NPC;
					 if(Instr!=0)begin
                //$display("PC:%h",now_PC);
                //$display("%d Instr:%h,PC:%h",$time,Instr,PC);
					 end
            end
            else begin
                now_PC <= now_PC;
            end
        end
    end
    assign Address = now_PC[13:2];
    IM im(.Address(Address),.Instr(Instr));
    assign PC  = now_PC;

endmodule
