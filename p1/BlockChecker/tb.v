`timescale 1ns/1ps
module tb;
  // Dump waveform to file (it would be impossible to view wavefrom without
  // this task)
  initial begin
    $fsdbDumpvars();
  end

    reg clk;
    reg reset;
    reg[7:0] in;
    wire result;
  // Input registers
  always @(posedge clk)begin
    $display("%c,%d",in,result);
  end
  initial begin
    clk=0;
    reset=1;
    #2
    reset=0;
    in="e";
    #2 in="n";
    #2 in="d";
    #2 in=" ";
    #2 in="e";
    #2 in="n";
    #2 in="d";
    #2 in=" ";
    #2 in="b";
    #2 in="e";
    #2 in="g";
    #2 in="i";
    #2 in="n";
    #2 in=" "; 
    #2 in="b";
    #2 in="e";
    #2 in="g";
    #2 in="i";
    #2 in="n";
    #2 in=" "; 
    #2 in=" ";
    #2 in="e";
    #2 in="N";
    #2 in="d";
    #2 in="B";
    #2 in="b";
    #2 in="e";
    #2 in="g";
    #2 in="i";
    #2 in="n";
    #2 in=" "; 
    #2 in="b";
    #2 in="e";
    #2 in="g";
    #2 in="i";
    #2 in="n";
    #2 in=" ";
    #2 in="e";
    #2 in="N";
    #2 in="d";
    #2 in="B";
    #2 in="E";
    #2 in="G";
    #10;
    $finish;
  end
  always #1 clk=~clk;

  BlockChecker  uut(
    .clk(clk),
    .reset(reset),
    .in(in),
    .result(result)
);

endmodule
