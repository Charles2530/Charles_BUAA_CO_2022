`timescale 1ns / 1ps
module B_transfer(
    input [31:0] A,
    input [31:0] B,
    input [3:0] Type,
    output ALU_change
    );
	wire eq,less,more;
	//calc ALU_change
	assign eq = (A==B);
	assign less = $signed(A)<$signed(B);
	assign more = $signed(A)>$signed(B);
	//calc B
	wire beq,slt,blez;
	assign beq=eq;
	assign slt=less;
	assign blez=eq||less;
	//mux
	assign ALU_change=(Type==4'b0001)?beq:
                    (Type==4'b0010)?slt:
                    (Type==4'b0100)?blez:
                    1'b0;

endmodule
