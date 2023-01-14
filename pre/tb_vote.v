`timescale  1ns / 1ps
`include "vote.v"
module tb_vote; reg [31:0] np = 0 ; reg [7:0] vip = 0 ; reg vvip = 0 ; wire res ; vote u_vote (.np (np [31:0]), .vip (vip [7:0]), .vvip (vvip), .res (res));

initial
begin
    $dumpfile("vote.vcd");
    $dumpvars;
    np   = 63;
    vip  = 7;
    vvip = 1;
    #5
    vip = 2;
    #5
    vvip = 0;
    #5
    $finish;
end

endmodule
