`timescale 1ns / 1ps
`include "macro.v"
module IF(input clk,
          input reset,
          input en,
          input clr,
          input req,
          input [31:0] F_Instr,
          input [31:0] F_PC,
          input [4:0] F_ExcCode,
          input F_BD,

          output [31:0] D_Instr,
          output reg [31:0] D_PC,
          output reg [4:0] D_ExcCode,
          output reg D_BD
			 );
    reg        stall_tag;
    reg        clr_tag;
    reg [31:0] last_instr_reg;

    assign D_Instr = clr_tag   ? 32'd0 :
                     stall_tag ? last_instr_reg : 
                                 F_Instr;
    always @(posedge clk) begin
        if(reset)begin
            last_instr_reg <= 0; 
            stall_tag      <= 0; 
            clr_tag        <= 1'b1;
        end 
        else begin
            last_instr_reg <= D_Instr;
            stall_tag      <= (~en) ? 1'b1 : 1'b0;
            clr_tag        <= (req|clr) ? 1'b1 : 1'b0;
        end
    end

    always @(posedge clk)begin
        if (reset||clr||req)begin
            // D_Instr <= 0;
            D_PC    <= reset?`PC_Initial:(req?`Error_Entry:`PC_Initial);
            D_ExcCode<=0;
            D_BD<=0;
        end
        else begin
            if (en)begin
                // D_Instr <= F_Instr;
                D_PC    <= F_PC;
                D_ExcCode <=F_ExcCode;
                D_BD<=F_BD;
            end
            else begin
                // D_Instr <= D_Instr;
                D_PC    <= D_PC;
                D_ExcCode<=D_ExcCode;
                D_BD<=D_BD;
            end
            // $display("%d F_Instr:%h F_PC:%h",$time,F_Instr,F_PC);
        end
    end
endmodule
