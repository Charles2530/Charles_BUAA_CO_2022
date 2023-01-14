`timescale 1ns / 1ps
module DM_Out(
    input [1:0] low2,
    input [3:0] DM_type,
    input [31:0] DM_output,
    output [31:0] RD
    );
	wire [7:0] DM_output_3,DM_output_2,DM_output_1,DM_output_0;
	assign DM_output_0=DM_output[7:0];
	assign DM_output_1=DM_output[15:8];
	assign DM_output_2=DM_output[23:16];
	assign DM_output_3=DM_output[31:24];
	wire [31:0] out_h,out_b;
	//sb,lb
	wire [7:0] low_b;
	assign low_b= (low2==2'b00)?DM_output_0:
                (low2==2'b01)?DM_output_1:
                (low2==2'b10)?DM_output_2:
                DM_output_3;
	assign out_b={{24{low_b[7]}},low_b};
	//sh,lh
	wire [15:0] low_h;
	assign low_h=(low2==2'b00)? {DM_output_1,DM_output_0}:
						                  {DM_output_3,DM_output_2};
	assign out_h={{16{low_h[7]}},low_h};
	//output
	assign RD=  (DM_type==4'b0001)?DM_output:
              (DM_type==4'b0010)?out_h:
              out_b;
					
endmodule
