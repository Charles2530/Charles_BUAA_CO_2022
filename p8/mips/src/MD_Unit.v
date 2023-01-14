`timescale 1ns / 1ps
`include "macro.v"
module MD_Unit(input clk,
               input reset,
               input en,
               input req,
               input [3:0] MDop,
               input [31:0] A,
               input [31:0] B,
              //  output [31:0] HI,
              //  output [31:0] LO,
               output [31:0] out,
               output busy);
    wire [1:0] in_op;
    wire [31:0] HI,LO;
    wire in_sign,in_ready,in_valid,out_ready,out_valid;
    reg [31:0]HI_reg,LO_reg;
    assign in_op= (req)?`IDLE:
                  (MDop==`mult_MDU||MDop==`multu_MDU)?`MUL:
                  (MDop==`div_MDU||MDop==`divu_MDU)?`DIV:
                  `IDLE;
    assign in_sign=(MDop==`divu_MDU||MDop==`multu_MDU);
    assign out_ready=1'b1;
    assign in_valid=en;
    MulDivUnit MD_Unit (
        .clk(clk), //
        .reset(reset), //
        .in_src0(A), // 
        .in_src1(B), //
        .in_op(in_op), //
        .in_sign(in_sign), //
        .in_valid(in_valid), //
        .out_ready(out_ready), //

        .in_ready(in_ready), 
        .out_valid(out_valid), 
        .out_res0(LO), //
        .out_res1(HI) //
        );
    always @(posedge clk)begin
        if(!req)begin
            case(MDop)
                `mthi_MDU:begin
                  HI_reg <= A;
                end
                `mtlo_MDU:begin
                  LO_reg <= A;
                end
                default :begin
                  HI_reg <=HI;
                  LO_reg <=LO;
                end
            endcase
        end
    end
    assign busy = (in_ready==1'b0)&&(out_valid == 1'b0);
    assign out= (MDop==`mflo_MDU)?LO_reg:
                (MDop==`mfhi_MDU)?HI_reg:
                32'b0;
endmodule
