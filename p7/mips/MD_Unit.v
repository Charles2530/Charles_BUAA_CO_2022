`timescale 1ns / 1ps
`include "macro.v"
module MD_Unit(input clk,
               input reset,
               input en,
               input req,
               input [3:0] MDop,
               input [31:0] A,
               input [31:0] B,
               output reg [31:0] HI,
               output reg [31:0] LO,
               output [31:0] out,
               output busy);
    reg [31:0] cnt     = 0;
    wire invalid;
    parameter MU_cycle = 5,D_cycle = 10;
    assign invalid=(A==0||B==0);
    always @(posedge clk)begin
        if (reset)begin
            HI  <= 0;
            LO  <= 0;
            cnt <= 0;
        end
        else if(!req)begin
            if (busy)begin
                cnt <= cnt-1;
            end
            else begin
                case(MDop)
                    `nop_MDU:begin
                        
                    end
                    `mult_MDU:begin
                        if (en)begin
                            {HI,LO} <= $signed(A)*$signed(B);
                            cnt     <= MU_cycle;
                        end
                    end
                    `multu_MDU:begin
                        if (en)begin
                            {HI,LO} <= A*B;
                            cnt     <= MU_cycle;
                        end
                    end
                    `div_MDU:begin
                        if (en)begin
                            cnt <= D_cycle;
                            if(B==0)begin
                              HI<=HI;
                              LO<=LO;
                            end
                            else begin
                              HI  <= $signed(A)%$signed(B);
                              LO  <= $signed(A)/$signed(B);                    
                            end
                        end
                    end
                    `divu_MDU:begin
                        if (en)begin
                            cnt <= D_cycle;
                            if(B==0)begin
                              HI<=HI;
                              LO<=LO;
                            end
                            else begin
                              HI  <= A%B;
                              LO  <= A/B;
                            end
                        end
                    end
                    `mfhi_MDU:begin
                      //out <= HI;
                    end
                    `mflo_MDU:begin
                      //out <= LO;
                    end
                    `mthi_MDU:begin
                      HI <= A;
                    end
                    `mtlo_MDU:begin
                      LO <= A;
                    end
                endcase
            end
        end
    end
    assign busy = (cnt != 0);
    assign out= (MDop==`mflo_MDU)?LO:
                (MDop==`mfhi_MDU)?HI:
                32'b0;
endmodule
