`timescale 1ns/1ps
module string(input clk,
              input clr,
              input [7:0] in,
              output out);
    parameter s0 = 0,s1 = 1,s2 = 2,s3 = 3 ;
    reg [3:0]state,next ;
    wire is_digit;
    assign is_digit = ("0"<= in&&in<= "9");
    always @(*) begin
        next[s0] = 0;
        next[s1] = state[s0]&is_digit|state[s2]&is_digit;
        next[s2] = state[s1]&(!is_digit);
        next[s3] = state[s1]&(is_digit)|state[s2]&(!is_digit);
    end
    always @(posedge clk or posedge clr) begin
        if (clr)begin
            state <= 1;
        end
        else begin
            state <= next;
        end
    end
    assign out = state[s1];
endmodule
