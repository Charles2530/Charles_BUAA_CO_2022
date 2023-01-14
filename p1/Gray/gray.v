`timescale 1ns/1ps
module gray(input Clk,
            input Reset,
            input En,
            output [2:0] Output,
            output Overflow);
    reg [2:0] cnt = 0 ;
    reg out=0;
    reg [2:0] next;
    always @(*) begin
        next = (cnt == 3'b000)?3'b001:
        (cnt == 3'b001)?3'b011:
        (cnt == 3'b011)?3'b010:
        (cnt == 3'b010)?3'b110:
        (cnt == 3'b110)?3'b111:
        (cnt == 3'b111)?3'b101:
        (cnt == 3'b101)?3'b100:
        3'b000;
    end
    always @(posedge Clk) begin
        if (Reset)begin
            out <= 0;
            cnt <= 0;
        end
        else begin
            if (En)begin
                cnt <= next;
                if (cnt == 3'b100)begin
                    out <= 1;
                    cnt <= 3'b000;
                end
            end
        end
    end
    assign Output   = cnt;
    assign Overflow = out;

endmodule
