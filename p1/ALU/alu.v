module alu(input [31:0] A,
           input [31:0] B,
           input [2:0] ALUOp,
           output [31:0] C);
assign C = (ALUOp == 3'd0)?A+B:
(ALUOp == 3'd1)?A-B:
(ALUOp == 3'd2)?A&B:
(ALUOp == 3'd3)?A|B:
(ALUOp == 3'd4)?A>>B:
$signed($signed(A)>>>B) ;
endmodule
