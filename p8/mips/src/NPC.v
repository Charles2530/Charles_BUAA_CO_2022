`timescale 1ns / 1ps
`include "macro.v"
module NPC(input [31:0] F_PC,
           input [31:0] D_PC,
           input [31:0] offset,
           input [25:0] imm26,
           input [31:0] ra,
          //  input [31:0] rt,
           input [4:0] branch,
           input ALU_change,
			  
           output reg [31:0] npc,
			     output [31:0] PC8
			    );
wire [31:0] PC4;
assign PC4 = F_PC+4;
assign PC8 = D_PC+8;
always @(*)begin
    if (branch == `PC4_NPC)begin
        npc = PC4;
    end
    else if (branch == `B_transfer_NPC)begin
        if (ALU_change)begin
            npc = D_PC + 4 +{offset[29:0],{2{1'b0}}};
        end
        else begin
            npc = D_PC + 8;
        end
    end
	  else if (branch == `J_transfer_NPC)begin
	     npc = {D_PC[31:28],imm26,{2{1'b0}}};
    end
    else if(branch==`Jr_NPC)begin
        npc = ra;
    end
    else begin
      npc = PC4;
    end
end

endmodule
