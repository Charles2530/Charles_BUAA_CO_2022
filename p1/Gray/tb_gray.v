`timescale  1ns / 1ps
module tb_gray;      
  initial begin
    $fsdbDumpvars();
  end

// gray Inputs
reg   Clk;
reg   Reset;
reg   En;

// gray Outputs
wire  [2:0]  Output                        ;   
wire  Overflow                             ;   

  initial Clk = 0;
  always #5 Clk = ~Clk;
initial
begin
    Reset=0;
    En=1;
    #100
    $finish;
end


gray  u_gray (.Clk (Clk),.Reset (Reset),.En(En),.Output(Output),.Overflow(Overflow));


endmodule