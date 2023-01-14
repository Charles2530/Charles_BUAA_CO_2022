`timescale 1ns / 1ps
`include"macro.v"
module Bridge(
  input clk,
  input reset,
  input [31:0] Address_in,
  input [31:0] WD_in,
  input [3:0] byteen,
  input [31:0] DM_RD,
  input [31:0] Timer_RD,
  input [31:0] UART_RD,
  input [31:0] Tube_RD,
  input [31:0] GPIO_RD,

  output [3:0] DM_WE,
  output Timer_WE,
  output  UART_WE,
  output [3:0] Tube_WE,
  output [3:0] GPIO_WE,
  output [31:0] Address_out,
  output [31:0] WD_out,
  output [31:0] RD_out
  );
  //read
    // assign DM_WE       =  (Address_in >= `Data_Begin    &&  Address_in <= `Data_End)?byteen:4'd0;
    // assign UART_WE     =  (Address_in >= `UART_Begin   &&  Address_in <= `UART_End)?&byteen:1'd0;
    // assign Tube_WE     =  (Address_in >= `Tube_Begin   &&  Address_in <= `Tube_End)?byteen:4'd0;
    // assign Timer_WE    =  (Address_in  >= `Timer_Begin   &&  Address_in <= `Timer_End)?&byteen:1'd0;
    // assign GPIO_WE     =  (Address_in >= `SWITCH_Begin &&  Address_in <= `SWITCH_End ||Address_in >= `KEY_Begin && Address_in <= `KEY_End||Address_in >= `LED_Begin && Address_in <= `LED_End)?byteen:4'd0;
    // assign Address_out =  Address_in;
    // assign WD_out      =  WD_in;
    // assign RD_out      =  (Address_in >= `Data_Begin   &&  Address_in <= `Data_End) ? DM_RD :
    //                       (Address_in >= `Timer_Begin  &&  Address_in <= `Timer_End) ? Timer_RD :
    //                       (Address_in >= `UART_Begin   &&  Address_in <= `UART_End) ? UART_RD :
    //                       (Address_in >= `Tube_Begin   &&  Address_in <= `Tube_End) ? Tube_RD :
    //                       (Address_in >= `SWITCH_Begin &&  Address_in <= `SWITCH_End ||Address_in >= `KEY_Begin && Address_in <= `KEY_End||Address_in >= `LED_Begin && Address_in <= `LED_End) ? GPIO_RD :
    //                       32'd0;
    // assign UART_STB=1'b0;
    ////////////////////////////////////////
reg [31:0] Timer_RD_reg;
reg [31:0] UART_RD_reg;
reg [31:0] Tube_RD_reg;
reg [31:0] GPIO_RD_reg;
reg [31:0] Address_reg;
                
always @(posedge clk) begin
    if(reset) begin
        Timer_RD_reg <= 0;  
        UART_RD_reg <= 0; 
        Tube_RD_reg <= 0;
        GPIO_RD_reg <= 0;
        Address_reg <= 0; 
    end
    else begin
        Timer_RD_reg <= Timer_RD;  
        UART_RD_reg <= UART_RD; 
        Tube_RD_reg <= Tube_RD;
        GPIO_RD_reg <= GPIO_RD;
        Address_reg <= Address_in; 
    end
end 



    assign DM_WE       =  (Address_in >= `Data_Begin    &&  Address_in <= `Data_End)?byteen:4'd0;
    assign UART_WE     =  (Address_in >= `UART_Begin   &&  Address_in <= `UART_End)?|byteen:1'd0;
    assign Tube_WE     =  (Address_in >= `Tube_Begin   &&  Address_in <= `Tube_End)?byteen:4'd0;
    assign Timer_WE    =  (Address_in >= `Timer_Begin   &&  Address_in <= `Timer_End)?|byteen:1'd0;
    assign GPIO_WE     =  (Address_in >= `SWITCH_Begin &&  Address_in <= `SWITCH_End ||Address_in >= `KEY_Begin && Address_in <= `KEY_End||Address_in >= `LED_Begin && Address_in <= `LED_End)?byteen:4'd0;
    assign Address_out =  Address_in;
    assign WD_out      =  WD_in;
    assign RD_out      =  (Address_reg >= `Data_Begin   &&  Address_reg <= `Data_End) ? DM_RD :
                          (Address_reg >= `Timer_Begin  &&  Address_reg <= `Timer_End) ? Timer_RD_reg :
                          (Address_reg >= `UART_Begin   &&  Address_reg <= `UART_End) ? UART_RD_reg :
                          (Address_reg >= `Tube_Begin   &&  Address_reg <= `Tube_End) ? Tube_RD_reg :
                          (Address_reg >= `SWITCH_Begin &&  Address_reg <= `SWITCH_End ||Address_reg >= `KEY_Begin && Address_reg <= `KEY_End||Address_reg >= `LED_Begin && Address_reg <= `LED_End) ? GPIO_RD_reg :
                          32'd0;
endmodule
