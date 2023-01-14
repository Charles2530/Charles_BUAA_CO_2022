`timescale 1ns / 1ps
`include "macro.v"
module EX(input clk,
          input reset,
          input req,
          input [4:0] E_A2,
          input [4:0] E_A3,
          input [4:0] E_rd,
          input [31:0] E_RD2,
          input [31:0] E_ALUout,
          input [31:0] E_PC,
          input [31:0] E_PC8,
          input [1:0] E_Tnew,
          input E_Wegrf,
          input E_WeDm,
          input [7:0] E_WhichtoReg,
          input [3:0] E_RegDst,
          input [5:0] E_DM_type,
          input       E_ALU_change,
          input [31:0] E_imm32,
          // input E_check_new,
          input [4:0] E_branch,

          input [4:0] E_ExcCode,
          input E_BD,
          input E_mfc0,
          input E_mtc0,
          input E_eret,
          input E_syscall,

          output reg [4:0] M_A2,
          output reg [4:0] M_A3,
          output reg [4:0] M_rd,
          output reg [31:0] M_RD2,
          output reg [31:0] M_ALUout,
          output reg [31:0] M_PC,
          output reg [31:0] M_PC8,
          output reg [1:0] M_Tnew,
          output reg M_Wegrf,
          output reg M_WeDm,
          output reg [7:0] M_WhichtoReg,
          output reg [3:0] M_RegDst,
          output reg [5:0] M_DM_type,
          output reg       M_ALU_change,
          output reg [31:0] M_imm32,
          // output reg M_check_new,
          output reg [4:0] M_branch,
          output reg [4:0] M_ExcCode,
          output reg M_BD,
          output reg M_mfc0,
          output reg M_mtc0,
          output reg M_eret,
          output reg M_syscall
          );
    always @(posedge clk)begin
        if (reset||req)begin
            M_A2         <= 0;
            M_A3         <= 0;
            M_RD2        <= 0;
            M_ALUout     <= 0;
            M_PC         <= reset?`PC_Initial:(req?`Error_Entry:`PC_Initial);
            M_PC8        <= 0;
            M_Wegrf      <= 0;
            M_WeDm       <= 0;
            M_WhichtoReg <= `WhichtoReg_Initial;
            M_RegDst     <= `RegDst_Initial;
            M_DM_type    <= `DM_type_Initial;
            M_imm32      <= 0;
            M_Tnew       <= 0;
            M_ALU_change <= 0;
            // M_check_new  <= 0;
            M_ExcCode    <= 0;
            M_BD         <=0;
            M_mfc0       <=0;
            M_mtc0       <=0;
            M_eret       <=0;
            M_syscall     <=0;
            M_branch    <=0;
            M_rd<=0;
        end
        else begin
            M_A2         <= E_A2;
            M_A3         <= E_A3;
            M_RD2        <= E_RD2;
            M_ALUout     <= E_ALUout;
            M_PC         <= E_PC;
            M_PC8        <= E_PC8;
            M_Wegrf      <= E_Wegrf;
            M_WeDm       <= E_WeDm;
            M_WhichtoReg <= E_WhichtoReg;
            M_RegDst     <= E_RegDst;
            M_DM_type    <= E_DM_type;
            M_imm32      <= E_imm32;
            if (E_Tnew>0)begin
                M_Tnew <= E_Tnew-1;
            end
            else begin
                M_Tnew <= 0;
            end
            M_ALU_change <= E_ALU_change;
            // M_check_new  <= E_check_new;
            M_ExcCode    <= E_ExcCode;
            M_BD         <= E_BD;
            M_mfc0       <= E_mfc0;
            M_mtc0       <= E_mtc0;
            M_eret       <= E_eret;
            M_syscall    <= E_syscall;
            M_branch    <=E_branch;
            M_rd        <= E_rd;
            //$display("%d E_A3: %d,E_ALUout:%d ,E_RD2:%d ,E_PC:%h",$time,E_A3,E_ALUout,E_RD2,E_PC);
        end
    end
endmodule
