`timescale 1ns / 1ps
`include "macro.v"
module ID(input clk,
          input reset,
          input clr,
          input req,
          input [31:0] D_Instr,
          input [31:0] D_RD1,
          input [31:0] D_RD2,
          input [4:0] D_instr_s,
          input [4:0] D_A1,
          input [4:0] D_A2,
          input [4:0] D_A3,
          input [31:0] D_imm32,
          input [31:0] D_PC,
          input [31:0] D_PC8,
          input [1:0] D_Tnew,
          input D_Wegrf,
          input D_WeDm,
          input [11:0] D_ALUop,
          input [3:0] D_AluSrc1,
          input [3:0] D_AluSrc2,
          input [7:0] D_WhichtoReg,
          input [3:0] D_RegDst,
          input [5:0] D_DM_type,
          input       D_ALU_change,
          input [3:0] D_MDop,
          // input D_check_new,
          input [4:0] D_branch,

          input [4:0] D_ExcCode,
          input D_BD,

          input D_mfc0,
          input D_mtc0,
          input D_eret,
          input D_syscall,

          input D_is_Alu,

          output reg [31:0] E_RD1,
          output reg [31:0] E_RD2,
          output reg [4:0] E_instr_s,
          output reg [4:0] E_A1,
          output reg [4:0] E_A2,
          output reg [4:0] E_A3,
          output reg [31:0] E_imm32,
          output reg [31:0] E_PC,
          output reg [31:0] E_PC8,
          output reg [1:0] E_Tnew,
          output reg E_Wegrf,
          output reg E_WeDm,
          output reg [11:0] E_ALUop,
          output reg [3:0] E_AluSrc1,
          output reg [3:0] E_AluSrc2,
          output reg [7:0] E_WhichtoReg,
          output reg [3:0] E_RegDst,
          output reg [5:0] E_DM_type,
          output reg       E_ALU_change,
          output reg [3:0] E_MDop,
          // output reg E_check_new,
          output reg [4:0] E_branch,
          output reg [4:0] E_ExcCode,
          output reg E_BD,
          output reg E_mfc0,
          output reg E_mtc0,
          output reg E_eret,
          output reg E_syscall,
          output reg E_is_Alu
          );
    always @(posedge clk)begin
        if (reset || clr || req)begin
            //if(reset)begin
            E_instr_s    <= 0;
            E_RD1        <= 0;
            E_RD2        <= 0;
            E_A1         <= 0;
            E_A2         <= 0;
            E_A3         <= 0;
            E_imm32      <= 0;
            E_PC         <= reset?`PC_Initial:(req?`Error_Entry:(clr?D_PC:`PC_Initial));
            E_PC8        <= 0;
            E_Tnew       <= 0;
            E_Wegrf      <= 0;
            E_WeDm       <= 0;
            E_ALUop      <= `ALUop_Initial;
            E_AluSrc1    <= `AluSrc1_Initial;
            E_AluSrc2    <= `AluSrc2_Initial;
            E_WhichtoReg <= `WhichtoReg_Initial;
            E_RegDst     <= `RegDst_Initial;
            E_DM_type    <= `DM_type_Initial;
            E_ALU_change <= 0;
            E_MDop       <= 0;
            // E_check_new  <= 0;
            E_ExcCode    <= 0;
            E_BD         <= reset?0:(req?0:(clr?D_BD:0));
            E_mfc0<=0;
            E_mtc0<=0;
            E_eret<=0;
            E_syscall<=0;
            E_branch<=0;
            E_is_Alu<=0;
        end
        else begin
            E_instr_s    <= D_instr_s;
            E_RD1        <= D_RD1;
            E_RD2        <= D_RD2;
            E_A1         <= D_A1;
            E_A2         <= D_A2;
            E_A3         <= D_A3;
            E_imm32      <= D_imm32;
            E_PC         <= D_PC;
            E_PC8        <= D_PC8;
            E_Wegrf      <= D_Wegrf;
            E_WeDm       <= D_WeDm;
            E_ALUop      <= D_ALUop;
            E_AluSrc1    <= D_AluSrc1;
            E_AluSrc2    <= D_AluSrc2;
            E_WhichtoReg <= D_WhichtoReg;
            E_RegDst     <= D_RegDst;
            E_DM_type    <= D_DM_type;
            if (D_Tnew>0)begin
                E_Tnew <= D_Tnew-1;
            end
            else begin
                E_Tnew <= 0;
            end
            E_ALU_change <= D_ALU_change;
            E_MDop       <= D_MDop;
            // E_check_new  <= D_check_new;
            E_ExcCode    <= D_ExcCode;
            E_BD         <= D_BD;
            E_mfc0       <= D_mfc0;
            E_mtc0       <= D_mtc0;
            E_eret       <= D_eret;
            E_syscall    <= D_syscall;
            E_branch     <= D_branch;
            E_is_Alu     <= D_is_Alu;
        end
        //$display("%d D_Instr:%h ,D_RD1:%d ,D_RD2:%d ,D_imm32:%d,D_PC:%h",$time,D_Instr, D_RD1,D_RD2,D_imm32,D_PC);
    end
endmodule
