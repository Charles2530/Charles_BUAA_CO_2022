`timescale 1ns / 1ps
`include"macro.v"
module Tube(
    input clk,
    input reset,
    input [31:0] Address,
    input [31:0] WD,
    input [3:0] WE,

    output [31:0] RD,
    output [7:0] digital_tube2,
    output digital_tube_sel2,
    output [7:0] digital_tube1,
    output [3:0] digital_tube_sel1,
    output [7:0] digital_tube0,
    output [3:0] digital_tube_sel0
    );
    reg [15:0] tube_0_data;
    reg [15:0] tube_1_data;
    reg [3:0]  tube_2_data; 
    wire [7:0] digital_tube2_wire; 
    wire digital_en; 
   //write

   always @(posedge clk) begin
       if(reset)begin
           tube_0_data <= 0; 
           tube_1_data <= 0;
           tube_2_data <= 0;
       end
       else if(| WE) begin
           if(Address >= `Tube_1_Begin && Address <= `Tube_1_End) begin
               if(WE[0]) tube_0_data[7:0]  <= WD[7:0];
               if(WE[1]) tube_0_data[15:8] <= WD[15:8];
               if(WE[2]) tube_1_data[7:0]  <= WD[23:16];
               if(WE[3]) tube_1_data[15:8] <= WD[31:24]; 
           end      
           else if(Address >= `Tube_2_Begin && Address <= `Tube_2_End) begin
               if(WE[0]) tube_2_data <= WD[3:0];
           end
       end
   end    
   //read
   assign RD = (Address >= `Tube_1_Begin && Address <= `Tube_1_End) ? {tube_1_data, tube_0_data} :
               (Address >= `Tube_2_Begin && Address <= `Tube_2_End) ? {28'd0,  tube_2_data} :
                                                   32'd0;
    //moniter
    assign digital_en=1'b1;
    digital_tube d0 (
        .clk(clk),
        .rstn(~reset),
        .en(digital_en),
        .data(tube_0_data),
        .sel(digital_tube_sel0),
        .seg(digital_tube0)
    );

    digital_tube d1 (
        .clk(clk),
        .rstn(~reset),
        .en(digital_en),
        .data(tube_1_data),
        .sel(digital_tube_sel1),
        .seg(digital_tube1)
    );
    //output 
    reg reset_tag;
     always @(posedge clk) begin
        if (reset) reset_tag <= 1;
        else      reset_tag  <= 0;
    end
    assign digital_tube_sel2  =   1'b1;
    assign digital_tube2= reset_tag ? 8'b1111_1111 :digital_tube2_wire;
    assign digital_tube2_wire =   8'b1111_1111;
endmodule
