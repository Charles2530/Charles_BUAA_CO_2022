`timescale 1ns / 1ps
module GRF(input [4:0] A1,
           input [4:0] A2,
           input [4:0] A3,
           input [31:0] WD,
           input clk,
           input reset,
           input WE,
           input [31:0] WPC,
           output [31:0] RD1,
           output [31:0] RD2);
    reg[31:0] RF[31:0];
    integer i = 0;
    initial begin
        for(i = 0;i <= 31;i = i+1)begin
            RF[i] = 0;
        end
    end
    always@(posedge clk)begin
        if (reset)begin
            for(i = 0;i <= 31;i = i+1)begin
                RF[i] <= 0;
            end
        end
        else begin
            if (WE)begin
                RF[A3] <= WD;
                RF[0]  <= 0;
                if (A3 != 0)begin
                    $display("@%h: $%d <= %h", WPC, A3, WD);
                end
            end
            else begin
                RF[A3] <= RF[A3];
            end
        end
    end
    assign RD1 = RF[A1];
    assign RD2 = RF[A2];
endmodule
