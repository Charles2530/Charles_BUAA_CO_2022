`timescale 1ns / 1ps
`include "macro.v"
module ALU(input [31:0] A,
           input [31:0] B,
           input [11:0] ALUop,
           output reg[31:0] res
           );
reg [31:0] cnt=0;
integer i=0;
//calc res
always @(*)begin
    case(ALUop)
        `_ADD:
        res = A+B;
        `_SUB:
        res = A+~B+1;
        `_AND:
        res = A&B;
        `_OR:
        res = A|B;
        `_XOR:
        res = A^B;
        `_NOR:
        res = ~(A|B);
        `_SLL:
        res = A<<B;
        `_SRA:
        res = $signed($signed(A)>>>B) ;
        `_SRL:
        res = A>>B;
        `_SLT:
        res = ($signed(A)<$signed(B));
        `_SLTU:
        res = A<B;
        `_ALUNew:begin
          cnt=0;
          i=0;
          for(i=0;i<32;i=i+1)begin
            if(A[i]==1'b1&&B[i]==1'b1)begin
              cnt=cnt+1'b1;
            end
          end
          res=cnt;
        end
        default:res = 32'd0;
    endcase
end

endmodule
