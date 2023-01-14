`timescale 1ns / 1ps
`include"macro.v"
module GPIO(
    input clk,
    input reset,
    input [31:0] Address,
    input [31:0] WD,
    input [3:0] WE,
    input [7:0] dip_switch0,
    input [7:0] dip_switch1,
    input [7:0] dip_switch2,
    input [7:0] dip_switch3,
    input [7:0] dip_switch4,
    input [7:0] dip_switch5,
    input [7:0] dip_switch6,
    input [7:0] dip_switch7,
    input [7:0] user_key,
    output [31:0] RD,
    output [31:0] led_light
    );
    reg [31:0] led_reg;
   //led display
   assign led_light = ~led_reg; 
  
   //read
   assign RD = (Address >= `SWITCH_1_Begin  && Address <= `SWITCH_1_End) ? ~{dip_switch3, dip_switch2, dip_switch1, dip_switch0} :
               (Address >= `SWITCH_2_Begin && Address <= `SWITCH_2_End) ? ~{dip_switch7, dip_switch6, dip_switch5, dip_switch4} :
               (Address >= `KEY_Begin && Address <= `KEY_End) ? {24'd0, ~user_key} :
               (Address >= `LED_Begin && Address <= `LED_End ) ? {led_reg} : 32'd0;

   //write
   always @(posedge clk) begin
       if(reset) led_reg <= 32'hffff_ffff;
       else if(| WE) begin
               if(WE[0]) led_reg[7:0]   <= WD[7:0];
               if(WE[1]) led_reg[15:8]  <= WD[15:8];
               if(WE[2]) led_reg[23:16] <= WD[23:16];
               if(WE[3]) led_reg[31:24] <= WD[31:24]; 
       end
   end

endmodule
