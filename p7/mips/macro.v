`timescale 1ns / 1ps
//alu
`define _ADD    12'b000000000001
`define _SUB    12'b000000000010
`define _AND    12'b000000000100
`define _OR     12'b000000001000
`define _XOR    12'b000000010000
`define _NOR    12'b000000100000
`define _SLL    12'b000001000000
`define _SRA    12'b000010000000
`define _SRL    12'b000100000000
`define _SLT    12'b001000000000
`define _SLTU   12'b010000000000
`define _ALUNew 12'b100000000000
//ifu
`define PC_Initial 32'h0000_3000
//ext
`define Zero_Ext 3'b001
`define Sign_Ext 3'b010
`define Lui_Ext  3'b100
//NPC
`define PC4_NPC         5'b00001
`define B_transfer_NPC  5'b00010
`define J_transfer_NPC  5'b00100
`define Jr_NPC          5'b01000
`define NEW_NPC         5'b10000
//Controller_for_Reg
`define ALUop_Initial       7'b0000001
`define AluSrc1_Initial     4'b0001
`define AluSrc2_Initial     4'b0001
`define WhichtoReg_Initial  8'b00000001
`define RegDst_Initial      4'b0001
`define DM_type_Initial     6'b000001
//DM
`define Word_DM           6'b000001
`define Half_DM           6'b000010
`define Byte_DM           6'b000100
`define Unsigned_Half_DM  6'b001000
`define Unsigned_Byte_DM  6'b010000
//B_transfer
`define nop_B_trans   4'b0000
`define beq_B_trans   4'b0001
`define bgez_B_trans  4'b0010
`define bgtz_B_trans  4'b0011
`define blez_B_trans  4'b0100
`define bltz_B_trans  4'b0101
`define bne_B_trans   4'b0110
//MD_Unit
`define nop_MDU   4'b0000
`define mult_MDU  4'b0001
`define multu_MDU 4'b0010
`define div_MDU   4'b0011
`define divu_MDU  4'b0100
`define mfhi_MDU  4'b0101
`define mflo_MDU  4'b0110
`define mthi_MDU  4'b0111
`define mtlo_MDU  4'b1000
//TC
`define IDLE 2'b00
`define LOAD 2'b01
`define CNT  2'b10
`define INT  2'b11
`define ctrl   mem[0]
`define preset mem[1]
`define count  mem[2]
//CP0
`define IM      SR[15:10]
`define EXL     SR[1]
`define IE      SR[0]
`define BD      Cause[31]
`define IP      Cause[15:10]
`define ExcCode Cause[6:2]
`define SR_Address    5'd12
`define Cause_Address 5'd13
`define EPC_Address   5'd14
//Bridge
`define Data_Begin    32'h0000_0000
`define Data_End      32'h0000_2fff
`define Text_Begin    32'h0000_3000
`define Text_End      32'h0000_6fff
`define Error_Entry   32'h0000_4180
`define T0_Begin      32'h0000_7f00
`define T0_End        32'h0000_7f0b
`define T1_Begin      32'h0000_7f10
`define T1_End        32'h0000_7f1b
`define Echo_Begin    32'h0000_7f20
`define Echo_End      32'h0000_7f23
//Error_Stream
`define Error_None    5'd0
`define Error_Int     5'd0
`define Error_AdEL    5'd4
`define Error_AdES    5'd5
`define Error_Syscall 5'd8
`define Error_RI      5'd10
`define Error_Ov      5'd12