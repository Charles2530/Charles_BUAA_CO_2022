`timescale 1ns / 1ps
`define PC_Initial 32'h0000_3000
module IFU(input [3:0] branch,
           input ALU_change,
           input [31:0] imm32,
           input clk,
           input reset,
           output [31:0] Instr,
           output [31:0] PC4,
           output [31:0] PC);
    reg [31:0] now_PC = `PC_Initial;
    reg [31:0] NPC;
    wire [11:0] Address;
    //transfer
    always @(posedge clk)begin
        if (reset)begin
            now_PC <= `PC_Initial;
        end
        else begin
            now_PC <= NPC;
            //$display("PC:%h",now_PC);
            //$display("branch:%h,eq:%h,imm:%h",branch,eq,imm32);
        end
    end
    assign Address = now_PC[13:2];
    //NPC
    assign PC4 = now_PC+4;
    always @(*)begin
        if (branch == 4'b0001)begin
            NPC = PC4;
        end
        else if (branch == 4'b0010)begin
            if (ALU_change)begin
                NPC = PC4+{imm32[29:0],{2{1'b0}}};
            end
            else begin
                NPC = PC4;
            end
        end
            else if (branch == 4'b0100)begin
            NPC = {now_PC[31:28],imm32[25:0],{2{1'b0}}};
            end
        else begin
            NPC = imm32;
        end
    end
    assign PC = now_PC;
    IM im(.Address(Address),.Instr(Instr));
endmodule
