`timescale 1ns / 1ps
`include"macro.v"
module Head_UART(
    input clk,//
    input reset,//
    input [4:2] Address,//
    input WE,//
    input [31:0] WD_in,//
    input STB_in,//
    input RxD,//

    output [31:0] WD_out,//
    // output ACK_O,
    output TxD,//
    output inter
    );

    // wire [7:0]  tx_data;         // send data buffer
    reg [7:0]  tx_data;         // send data buffer
    wire [7:0] rx_data ;       
    wire [5:0]  lsr ;           // line status register
    reg  [15:0] divr ;          // RxD baud divisor register
    reg  [15:0] divt ;          // TxD baud divisor register
    wire tx_start, tx_avai;
    wire rx_clear, rx_ready;
    wire [15:0] rx_period,tx_period;
    reg tx_start_reg;
    reg rx_clear_reg;
    // receive unit
    uart_rx rx_unit (
    .clk(clk), //
    .rstn(~reset), //
    .period(rx_period),// 
    .rxd(RxD), //
    .rx_clear(rx_clear),// 
    // .rx_clear(rx_clear_reg),// 

    .rx_data(rx_data), //
    .rx_ready(rx_ready)//
    );    
    //clock
    always  @( posedge clk )begin
        if ( reset )begin
            // tx_data <= 0 ;
            divr    <= `PERIOD_BAUD_9600 ;
            divt    <= `PERIOD_BAUD_9600 ;
        end
        else if ( STB_in&&WE )begin
            case ( Address )
                // `OFF_UART_DATA  :   tx_data <= WD_in[7:0] ;
                `OFF_UART_DIVR  :   divr    <= WD_in[15:0] ;
                `OFF_UART_DIVT  :   divt    <= WD_in[15:0] ;
            endcase
        end
    end
    
  always @(*) begin
    tx_data=(WD_in[7:0]==0)?tx_data:WD_in[7:0];
  end
    // assign tx_data=rx_data;

    always @(posedge clk)begin
        if(reset)begin
          tx_start_reg<=0;
          rx_clear_reg<=0;
        end
        else begin
          tx_start_reg<=tx_start;
          rx_clear_reg<=rx_clear;
        end
    end
    // send unit
    uart_tx tx_unit (
    .clk(clk), //
    .rstn(~reset), //
    .period(tx_period), //
    .tx_start(tx_start),//
    // .tx_start(tx_start_reg),//
    .tx_data(tx_data), //

    .txd(TxD), //
    .tx_avai(tx_avai)//
    );


    // WISHBONE interface
    assign rx_period=divr;
    assign tx_period=divt;
    // assign tx_start = STB_in&&(WE&&(Address==`OFF_UART_DATA)||rx_ready);
    assign tx_start = STB_in&&(WE&&(Address==`OFF_UART_DATA));
    // assign tx_start = STB_in&&rx_ready;
    // assign tx_start = STB_in && rx_ready;
    // assign rx_clear = (WE&&(Address==`OFF_UART_DATA)) | (~STB_in);       
    assign  rx_clear = (tx_start&&tx_avai) || (~STB_in);  // clear when data transmitted or uart closed        
    assign  lsr = {tx_avai, 4'b0, rx_ready} ;
    assign  WD_out =  (Address==`OFF_UART_DATA) ? {24'b0, rx_data} :
                      (Address==`OFF_UART_LSR)  ? {26'b0, lsr}  :
                      (Address==`OFF_UART_DIVR) ? {16'b0, divr} :
                      (Address==`OFF_UART_DIVT) ? {16'b0, divt} :
                                                  32'hff ;
    // assign inter = 1'b0;
    assign inter = rx_ready;


endmodule
