`timescale 1ns / 1ps
`include "macro.v"
module DM(input [31:0] Address,
          input [31:0] WD,
          input clk,
          input reset,
          input WE,
          input [5:0] DM_type,
          input [31:0] pc,
          output [31:0] RD
          );
wire [1:0] low2;
wire [15:0] new_h;
wire [7:0] new_b;
wire [31:0] DM_input,DM_output;
reg [31:0]dm[3071:0];
assign low2  = Address[1:0];
integer i    = 0;
integer file = 0;
initial begin
    for(i = 0;i<= 3071;i = i+1)begin
        dm[i] = 0;
    end
end
always @(posedge clk)begin
    if (reset)begin
        for(i = 0;i<= 3071;i = i+1)begin
            dm[i] <= 0;
        end
    end
    else begin
        if (WE)begin
            case(DM_type)
                `Word_DM:begin
                    dm[Address[13:2]] <= WD;
                end
                `Half_DM  :begin
                    if (low2[1] == 1'b1)begin
                        dm[Address[13:2]][31:16] <= new_h;
                    end
                    else begin
                        dm[Address[13:2]][15:0] <= new_h;
                    end
                end
                `Unsigned_Half_DM:begin
                    if (low2[1] == 1'b1)begin
                        dm[Address[13:2]][31:16] <= new_h;
                    end
                    else begin
                        dm[Address[13:2]][15:0] <= new_h;
                    end
                end
                `Byte_DM :begin
                    if (low2 == 2'b00)begin
                        dm[Address[13:2]][7:0] <= new_b;
                    end
                    else if (low2 == 2'b01)begin
                        dm[Address[13:2]][15:7] <= new_b;
                    end
                    else if (low2 == 2'b10)begin
                        dm[Address[13:2]][23:16] <= new_b;
                    end
                    else begin
                        dm[Address[13:2]][31:24] <= new_b;
                    end
                end
                 `Unsigned_Byte_DM:begin
                    if (low2 == 2'b00)begin
                        dm[Address[13:2]][7:0] <= new_b;
                    end
                    else if (low2 == 2'b01)begin
                        dm[Address[13:2]][15:7] <= new_b;
                    end
                    else if (low2 == 2'b10)begin
                        dm[Address[13:2]][23:16] <= new_b;
                    end
                    else begin
                        dm[Address[13:2]][31:24] <= new_b;
                    end
                end
            endcase
            $display("%d@%h: *%h <= %h",$time, pc, Address,DM_input);
        end
        else begin
            dm[Address[13:2]] <= dm[Address[13:2]];
        end
    end
end
DM_In din(.low2(low2),.WD(WD),.new_h(new_h),.new_b(new_b));
assign DM_input = (DM_type == `Word_DM)?WD:
                  (DM_type == `Half_DM||DM_type ==`Unsigned_Half_DM)?{{16{1'b0}},new_h}:
                  (DM_type == `Byte_DM||DM_type ==`Unsigned_Byte_DM)?{{24{1'b0}},new_b}:
                  32'd0;
assign DM_output = dm[Address[13:2]];
DM_Out dot(.low2(low2),.DM_type(DM_type),.DM_output(DM_output),.RD(RD));

endmodule
