`timescale 1ns/1ps
module tb;
  // Dump waveform to file (it would be impossible to view wavefrom without
  // this task)
  initial begin
    $fsdbDumpvars();
  end

    reg clk;
    reg clr;
    reg[7:0] in;
    wire out;
  // Input registers
  always @(posedge clk)begin
    $display("%c,%d",in,out);
  end
  initial begin
    clk=0;
    clr=1;
    #2
    clr=0;
    in="1";
    #2 in="+";
    #2 in="(";
    #2 in="1";
    #2 in="+";
    #2 in="2";
    #2 in=")";
    #2 in="*";
    #2 in="(";
    #2 in="1";
    #2 in="*";
    #2 in="3";
    #2 in=")";
    #2 in=" "; 
    #10;
    $finish;
  end
  always #1 clk=~clk;

  string2  uut(
    .clk(clk),
    .clr(clr),
    .in(in),
    .out(out)
);

endmodule
