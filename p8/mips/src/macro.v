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
//MulDivUnit
`define  IDLE 2'b00
`define  MUL  2'b01
`define  DIV  2'b10
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
`define Error_Entry   32'h0000_4180
`define Data_Begin    32'h0000_0000
`define Data_End      32'h0000_2fff
`define Text_Begin    32'h0000_3000
`define Text_End      32'h0000_6fff
`define Timer_Begin   32'h0000_7f00
`define Timer_End     32'h0000_7f0b
`define Echo_Begin    32'h0000_7f20
`define Echo_End      32'h0000_7f23
`define UART_Begin    32'h0000_7f30
`define UART_End      32'h0000_7f3f
`define Tube_Begin    32'h0000_7f50
`define Tube_End      32'h0000_7f57
`define SWITCH_Begin  32'h0000_7f60
`define SWITCH_End    32'h0000_7f67
`define KEY_Begin     32'h0000_7f68
`define KEY_End       32'h0000_7f6b
`define LED_Begin     32'h0000_7f70
`define LED_End       32'h0000_7f73
//GPIO
`define SWITCH_1_Begin    32'h0000_7f60
`define SWITCH_1_End      32'h0000_7f63
`define SWITCH_2_Begin    32'h0000_7f64
`define SWITCH_2_End      32'h0000_7f67
//Tube
`define Tube_1_Begin    32'h0000_7f50
`define Tube_1_End      32'h0000_7f53
`define Tube_2_Begin    32'h0000_7f54
`define Tube_2_End      32'h0000_7f57    
//Error_Stream
`define Error_None    5'd0
`define Error_Int     5'd0
`define Error_AdEL    5'd4
`define Error_AdES    5'd5
`define Error_Syscall 5'd8
`define Error_RI      5'd10
`define Error_Ov      5'd12



//UART
//`define LINE_H      1'b1
//`define LINE_L      1'b0
//`define LINE_IDLE   1'b1
//`define LINE_START  1'b0

`define OFF_UART_DATA       3'h0
`define OFF_UART_LSR        3'h1
`define OFF_UART_DIVR       3'h2
`define OFF_UART_DIVT       3'h3

`define PERIOD_BAUD_9600    16'd2604    // 25M / 9600
`define PERIOD_BAUD_38400   16'd651
`define PERIOD_BAUD_57600   16'd434
`define PERIOD_BAUD_115200  16'd217

/* For simulation only, the frequency of system clock is set at 100KHz.
   You must understand its frequency is too low so that only 9600 BAUD
   could be supported!!!*/
// `define CLK_FRQ             32'd25_000_000      // 25MHz : system clock
// `define CYCLE               (1000000000/`CLK_FRQ)

// `define     SAMPLE_FREQUENCE        8
// `define     HALF_BIT                (`SAMPLE_FREQUENCE/2-1)

// // define receive-baud rate divisor
// `define BAUD_RCV_9600       (`CLK_FRQ/(9600*`SAMPLE_FREQUENCE)-1)
// `define BAUD_RCV_19200      (`CLK_FRQ/(19200*`SAMPLE_FREQUENCE)-1)
// `define BAUD_RCV_38400      (`CLK_FRQ/(38400*`SAMPLE_FREQUENCE)-1)
// `define BAUD_RCV_57600      (`CLK_FRQ/(57600*`SAMPLE_FREQUENCE)-1)
// `define BAUD_RCV_115200     (`CLK_FRQ/(115200*`SAMPLE_FREQUENCE)-1)
// // define send-baud rate divisor
// `define BAUD_SND_9600       (`CLK_FRQ/9600-1)
// `define BAUD_SND_19200      (`CLK_FRQ/19200-1)
// `define BAUD_SND_38400      (`CLK_FRQ/38400-1)
// `define BAUD_SND_57600      (`CLK_FRQ/57600-1)
// `define BAUD_SND_115200     (`CLK_FRQ/115200-1)