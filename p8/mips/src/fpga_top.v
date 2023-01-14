/* Template Top Module for CO-FPGA */
`timescale 1ns/1ps
`include"macro.v"
module fpga_top (
    // clock and reset
    input clk_in,
    input sys_rstn,
    // dip switch
    input [7:0] dip_switch0,
    input [7:0] dip_switch1,
    input [7:0] dip_switch2,
    input [7:0] dip_switch3,
    input [7:0] dip_switch4,
    input [7:0] dip_switch5,
    input [7:0] dip_switch6,
    input [7:0] dip_switch7,
    // key
    input [7:0] user_key,
    // led
    output [31:0] led_light,
    // digital tube
    output [7:0] digital_tube2,
    output digital_tube_sel2,
    output [7:0] digital_tube1,
    output [3:0] digital_tube_sel1,
    output [7:0] digital_tube0,
    output [3:0] digital_tube_sel0,
    // uart
    input uart_rxd,
    output uart_txd
);
    // localparam PERIOD=32'd25_000_000;
    // Your code here
    //clock
    wire clk;
    assign clk=clk_in;
    // Clock_IP ip_clock(
    //     .CLK_IN1(clk_in),      // IN
    //     .CLK_OUT1(clk)
    //     );    // OUT
///////////////////////////MIPS////////////////////////
    wire [31:0] i_inst_rdata,Rdata,m_data_rdata;
    wire [31:0] macroscopic_pc,i_inst_addr,m_data_addr,m_data_wdata;
    wire [31:0] m_int_addr,m_inst_addr,w_grf_wdata,w_inst_addr;
    wire [3:0] m_data_byteen,m_int_byteen;
    wire [4:0] w_grf_addr;
    wire w_grf_We;
    //IM
    wire [31:0] fixed_inst_addr;
    wire [3:0] DM_en;
    assign fixed_inst_addr=i_inst_addr-32'h3000;
    // Finally_IM im (
    //   .clka(clk), // input clka
    //   .addra(fixed_inst_addr[13:2]), // input [12 : 0] addra
    //   .douta(i_inst_rdata) // output [31 : 0] douta
    // );
    p8_test im (
      .clka(clk), // input clka
      .addra(fixed_inst_addr[13:2]), // input [12 : 0] addra
      .douta(i_inst_rdata) // output [31 : 0] douta
    );
    // Test im (
    //   .clka(clk), // input clka
    //   .addra(fixed_inst_addr[13:2]), // input [12 : 0] addra
    //   .douta(i_inst_rdata) // output [31 : 0] douta
    // );
    // // Counter_IM im (
    //   .clka(clk), // input clka
    //   .addra(fixed_inst_addr[14:2]), // input [12 : 0] addra
    //   .douta(i_inst_rdata) // output [31 : 0] douta
    // );
    // Test_counter_IM im (
    //   .clka(clk), // input clka
    //   .addra(fixed_inst_addr[14:2]), // input [12 : 0] addra
    //   .douta(i_inst_rdata) // output [31 : 0] douta
    // );
    // Calc_IM im (
    //   .clka(clk), // input clka
    //   .addra(fixed_inst_addr[14:2]), // input [12 : 0] addra
    //   .douta(i_inst_rdata) // output [31 : 0] douta
    // );
    // PING_IM im (
    //   .clka(clk), // input clka
    //   .addra(fixed_inst_addr[14:2]), // input [12 : 0] addra
    //   .douta(i_inst_rdata) // output [31 : 0] douta
    // );
    //DM
    DM_RAM dm (
      .clka(clk), // input clka
      .wea(DM_en), // input [3 : 0] wea
      .addra(m_data_addr[13:2]), // input [11 : 0] addra
      .dina(m_data_wdata), // input [31 : 0] dina
      .douta(m_data_rdata) // output [31 : 0] douta
    );
////////////////////test///////////////////////////////
reg [31:0] fixed_addr;
reg [31:0] fixed_wdata;
always @(posedge clk) begin
		if (sys_rstn) begin
			if (w_grf_we && (w_grf_addr != 0)) begin
				$display("%d@%h: $%d <= %h", $time, w_inst_addr, w_grf_addr, w_grf_wdata);
			end
		end
end

always @(*) begin
  fixed_addr = m_data_addr & 32'hfffffffc;
  if (m_data_byteen[3])begin
    fixed_wdata[31:24] = m_data_wdata[31:24];
  end 
  else begin
    fixed_wdata[31:24] = 0;
  end
  if (m_data_byteen[2])begin
    fixed_wdata[23:16] = m_data_wdata[23:16];
  end 
  else begin
    fixed_wdata[23:16] = 0;
  end
  if (m_data_byteen[1])begin
    fixed_wdata[15:8] = m_data_wdata[15:8];
  end 
  else begin
    fixed_wdata[15:8] = 0;
  end
  if (m_data_byteen[0])begin
    fixed_wdata[7:0] = m_data_wdata[7:0];
  end 
  else begin
    fixed_wdata[7:0] = 0;
  end
  // fixed_addr = m_data_addr & 32'hfffffffc;
  // if (m_data_byteen[3]) fixed_wdata[31:24] = m_data_wdata[31:24];
  // if (m_data_byteen[2]) fixed_wdata[23:16] = m_data_wdata[23:16];
  // if (m_data_byteen[1]) fixed_wdata[15: 8] = m_data_wdata[15: 8];
  // if (m_data_byteen[0]) fixed_wdata[7 : 0] = m_data_wdata[7 : 0];
end

always @(posedge clk) begin
  if (|m_data_byteen) begin
    $display("%d@%h: *%h <= %h", $time, m_inst_addr, fixed_addr, fixed_wdata);
  end
end
///////////////////////////////////////////////////////
    //datapath
    //cpu
    wire interrupt,inter_Timer;
    //Bridge
    wire [31:0] WD_out,RD_out;
    wire [31:0] Address_out;
    wire [3:0] GPIO_WE,Tube_WE;
    wire Timer_WE,UART_WE;
    wire [31:0] Timer_RD,UART_RD,Tube_RD,GPIO_RD;
    //TC
    wire [31:2] TC_Addr;
    //UART
    wire [4:2] UART_Addr;
    wire UART_STB;
    //CPU
    cpu cpu (
    .clk(clk), //
    .reset(~sys_rstn),// 
    .interrupt(interrupt), //
    .inter_Timer(inter_Timer), //

    .i_inst_rdata(i_inst_rdata),// 
    .Rdata(RD_out), //dm_read_data

    .macroscopic_pc(macroscopic_pc),//
    .i_inst_addr(i_inst_addr),// 
    .m_data_addr(m_data_addr), //
    .m_data_wdata(m_data_wdata), //dm_write_data
    .Byteen(m_data_byteen),// 
    .m_int_addr(m_int_addr),//Int_Address
    .m_int_byteen(m_int_byteen),//Int_en
    .m_inst_addr(m_inst_addr), 
    .w_grf_we(w_grf_we), //
    .w_grf_addr(w_grf_addr), //
    .w_grf_wdata(w_grf_wdata), //
    .w_inst_addr(w_inst_addr)//
    );

    //Bridge
    Bridge bridge (
    .clk(clk), 
    .reset(~sys_rstn), 
    .Address_in(m_int_addr), 
    .WD_in(m_data_wdata), 
    .byteen(m_data_byteen), 
    .DM_RD(m_data_rdata), 
    .Timer_RD(Timer_RD), 
    .UART_RD(UART_RD), 
    .Tube_RD(Tube_RD), 
    .GPIO_RD(GPIO_RD), 

    .DM_WE(DM_en), 
    .Timer_WE(Timer_WE), 
    .UART_WE(UART_WE), 
    .Tube_WE(Tube_WE), 
    .GPIO_WE(GPIO_WE), 
    .Address_out(Address_out), 
    .WD_out(WD_out), 
    .RD_out(RD_out)
    );

    //Timer
    assign TC_Addr=Address_out[31:2];
    TC Timer (
    .clk(clk), 
    .reset(~sys_rstn), 
    .Addr(TC_Addr), 
    .WE(Timer_WE), 
    .Din(WD_out), 

    .Dout(Timer_RD), 
    .IRQ(inter_Timer)
    );

    //Tube
    Tube tube (
    .clk(clk), 
    .reset(~sys_rstn), 
    .Address(Address_out), 
    .WD(WD_out), 
    .WE(Tube_WE), 

    .RD(Tube_RD), 
    .digital_tube2(digital_tube2), 
    .digital_tube_sel2(digital_tube_sel2), 
    .digital_tube1(digital_tube1), 
    .digital_tube_sel1(digital_tube_sel1), 
    .digital_tube0(digital_tube0), 
    .digital_tube_sel0(digital_tube_sel0)
    );

    //URAT
    assign UART_Addr={~Address_out[4],Address_out[3:2]};
    assign UART_STB = 1'b1;
    // assign UART_STB = ~user_key[1];
    Head_UART urat (
    .clk(clk), //
    .reset(~sys_rstn), //
    .Address(UART_Addr),// 
    .WE(UART_WE), //
    .WD_in(WD_out), //
    .STB_in(UART_STB), //
    .RxD(uart_rxd), //
    
    .WD_out(UART_RD),// 
    .TxD(uart_txd), //
    .inter(interrupt)//
    );

    //GPIO
    GPIO gpio (
    .clk(clk), 
    .reset(~sys_rstn), 
    .Address(Address_out), 
    .WD(WD_out), 
    .WE(GPIO_WE), 
    .dip_switch0(dip_switch0), 
    .dip_switch1(dip_switch1), 
    .dip_switch2(dip_switch2), 
    .dip_switch3(dip_switch3), 
    .dip_switch4(dip_switch4), 
    .dip_switch5(dip_switch5), 
    .dip_switch6(dip_switch6), 
    .dip_switch7(dip_switch7), 
    .user_key(user_key), 

    .RD(GPIO_RD), 
    .led_light(led_light)
    );
    // Default assignment for peripherals not in use. Comment corresponding line(s) if you use them.
    // UART: idle
    // assign uart_txd = 1'b1;
    // LED: off
    // assign led_light = 32'hFFFF_FFFF;
    // Digital tube: off
    // assign digital_tube_sel0 = 4'b1111;
    // assign digital_tube_sel1 = 4'b1111;
    // assign digital_tube_sel2 = 1'b1;
    // assign digital_tube0 = 8'hFF;
    // assign digital_tube1 = 8'hFF;
    // assign digital_tube2 = 8'hFF;

endmodule