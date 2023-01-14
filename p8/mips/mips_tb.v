`timescale 1ns/1ps

module mips_txt;

//Input
	reg sys_rstn;
	reg clk_in;
  reg [7:0] dip_switch0,dip_switch1,dip_switch2,dip_switch3;
  reg [7:0] dip_switch4,dip_switch5,dip_switch6,dip_switch7;
  reg [7:0] user_key;
  reg uart_rxd;

//Output
  wire [31:0] led_light;
  wire [7:0] digital_tube2,digital_tube1,digital_tube0;
  wire [3:0] digital_tube_sel0,digital_tube_sel1;
  wire digital_tube_sel2;
  wire uart_txd;

//Instantiate the Unit Under Test(UUT)
  fpga_top fpga (
    .clk_in(clk_in), 
    .sys_rstn(sys_rstn), 
    .dip_switch0(dip_switch0), 
    .dip_switch1(dip_switch1), 
    .dip_switch2(dip_switch2), 
    .dip_switch3(dip_switch3), 
    .dip_switch4(dip_switch4), 
    .dip_switch5(dip_switch5), 
    .dip_switch6(dip_switch6), 
    .dip_switch7(dip_switch7), 
    .user_key(user_key), 

    .led_light(led_light), 
    .digital_tube2(digital_tube2), 
    .digital_tube_sel2(digital_tube_sel2), 
    .digital_tube1(digital_tube1), 
    .digital_tube_sel1(digital_tube_sel1), 
    .digital_tube0(digital_tube0), 
    .digital_tube_sel0(digital_tube_sel0), 

    .uart_rxd(uart_rxd), 

    .uart_txd(uart_txd)
    );
initial begin
		// Initialize Inputs
		sys_rstn = 0;
		clk_in = 0  ;
		uart_rxd = 0;
		dip_switch0 = 0;
		dip_switch1 = 0;
		dip_switch2 = 0;
		dip_switch3 = 0;
		dip_switch4 = 0;
		dip_switch5 = 0;
		dip_switch6 = 0;
		dip_switch7 = 0;

		// Wait 100 ns for global reset to finish
		#100;
                
		// Add stimulus here
    user_key = ~8'b0000_0100;
    dip_switch0 = ~8'h02;
		dip_switch1 = ~8'h00;
		dip_switch2 = ~8'h00;
		dip_switch3 = ~8'h00;
		dip_switch4 = ~8'h01;
		dip_switch5 = ~8'h00;
		dip_switch6 = ~8'h00;
		dip_switch7 = ~8'h00;
    sys_rstn = 1;
        
    #10000;
    dip_switch0 = ~8'h12;
		dip_switch1 = ~8'h00;
		dip_switch2 = ~8'h00;
		dip_switch3 = ~8'h00;
        
	end
	
	always #2 clk_in <= ~clk_in;

endmodule