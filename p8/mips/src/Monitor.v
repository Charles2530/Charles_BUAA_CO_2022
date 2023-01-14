`timescale 1ns / 1ps
`include"macro.v"
module Moniter(input clk,
               input reset,
               input [15:0] tube_data,
               output [7:0] tube_disp,
               output [3:0] sel);
    
    reg [31:0] cnt;
    reg [3:0]  sel_reg;
    reg reset_tag;
    
    wire A, B, C, D, E, F, G, DP;
    
    wire [3:0] sel_data;
    
    //reset_reg fsm
    always @(posedge clk) begin
        if (reset) reset_tag <= 1;
        else      reset_tag  <= 0;
    end
    
    
    //sel_reg fsm
    always @(posedge clk) begin
        if (reset) sel_reg <= 4'b0001;
        else if (cnt == `MAX - 32'd1) begin
            sel_reg <= {sel_reg[2:0], sel_reg[3]};
        end
    end
    
    //cnt fsm
    always @(posedge clk) begin
        if (reset) cnt <= 32'd0;
        else begin
            if (cnt == `MAX - 32'd1) cnt <= 32'd0;
            else cnt <= cnt + 32'd1;
        end
    end
    //output
    assign sel_data     = (sel == 4'b0001) ? tube_data[3:0]  :
                          (sel == 4'b0010) ? tube_data[7:4]  :
                          (sel == 4'b0100) ? tube_data[11:8] :
                          tube_data[15:12];
    
    assign sel = reset_tag ? 4'b1111 : sel_reg;
    
    assign tube_disp = reset_tag ? 8'b1111_1110 :
                                   {DP, A, B, C, D, E, F, G};
    
    assign {DP, G, F, E, D, C, B, A} =  (sel_data == 4'h0) ? 8'hc0 :
                                        (sel_data == 4'h1) ? 8'hf9 :
                                        (sel_data == 4'h2) ? 8'ha4 :
                                        (sel_data == 4'h3) ? 8'hb0 :
                                        (sel_data == 4'h4) ? 8'h99 :
                                        (sel_data == 4'h5) ? 8'h92 :
                                        (sel_data == 4'h6) ? 8'h82 :
                                        (sel_data == 4'h7) ? 8'hf8 :
                                        (sel_data == 4'h8) ? 8'h80 :
                                        (sel_data == 4'h9) ? 8'h90 :
                                        (sel_data == 4'ha) ? 8'h88 :
                                        (sel_data == 4'hb) ? 8'h83 :
                                        (sel_data == 4'hc) ? 8'hc6 :
                                        (sel_data == 4'hd) ? 8'ha1 :
                                        (sel_data == 4'he) ? 8'h86 :
                                        8'h8e ;
    
endmodule
