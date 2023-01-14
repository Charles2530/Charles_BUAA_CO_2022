`timescale 1ns / 1ps
module IM(
    input [11:0] Address,
    output [31:0] Instr
    );
    reg [31:0] _memory[12'hfff:12'hc00];
	 integer i=0;
	 initial begin
		for(i=12'hc00;i<=12'hfff;i=i+1)begin
			_memory[i]=0;
		end
		$readmemh("code.txt",_memory,(32'h3000>>2));
	 end
	assign Instr=_memory[Address];
endmodule
