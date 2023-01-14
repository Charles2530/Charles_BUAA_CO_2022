`timescale 1ns / 1ps
module mips(input clk,
            input reset);
    wire [31:0]Instr;
    //datapath
    wire  [5:0] opcode,func;
    wire  [4:0] rs,rt,rd,shamt;
    wire  [15:0] imm16;
    wire  [25:0] J_address;
    //Controller
    wire  [6:0] ALUop;
    wire  Wegrf;
    wire  WeDm;
    wire  [3:0] AluSrc1;
    wire  [3:0] AluSrc2;
    wire  [7:0] WhichtoReg;
    wire  [3:0] RegDst;
    wire  SignExt;
    wire 	[3:0] B_change;
    wire  [3:0] DM_type;
    //IFU
    wire  [3:0]branch;
    wire  ALU_change;
    wire  [31:0] imm32;
    wire  [31:0] IFU_imm32;
    wire  [31:0] PC4;
    wire  [31:0] PC;
    //GRF
    wire  [4:0] A3;
    wire  [31:0] WD;
    wire  [31:0] RD1;
    wire  [31:0] RD2;
    //ALU
    wire  [31:0] A;
    wire  [31:0] B;
    wire  [31:0] res;
    //DM
    wire  [31:0] Address;
    wire  [31:0] RD;
    
    //datapath
    assign 	opcode    = Instr[31:26];
    assign 	rs        = Instr[25:21];
    assign 	rt        = Instr[20:16];
    assign 	rd        = Instr[15:11];
    assign 	shamt     = Instr[10:6];
    assign 	func      = Instr[5:0];
    assign 	imm16     = Instr[15:0];
    assign 	J_address = Instr[25:0];
    
    //IFU
    assign IFU_imm32 =  (branch == 4'b0001||branch == 4'b0010)?imm32:
                        (branch == 4'b0100)?{{6{1'b0}},J_address}:
                        RD1;
    IFU ifu(	
    .branch(branch),
    .ALU_change(ALU_change),
    .imm32(IFU_imm32),
    .clk(clk),
    .reset(reset),
    .Instr(Instr),
    .PC4(PC4),
    .PC(PC)
    );
    
    //Controller
    Controller controller(
    .op(opcode),
    .func(func),

    .ALUop(ALUop),
    .Wegrf(Wegrf),
    .WeDm(WeDm),
    .branch(branch),
    .AluSrc1(AluSrc1),
    .AluSrc2(AluSrc2),
    .WhichtoReg(WhichtoReg),
    .RegDst(RegDst),
    .SignExt(SignExt),
    .B_change(B_change),
    .DM_type(DM_type)
    );
    //GRF
    assign 	A3 =  (RegDst == 4'b0001)?rd:
                  (RegDst == 4'b0010)?rt:
                  5'b11111;
    assign 	WD =  (WhichtoReg == 8'b0000_0001)?res:
                  (WhichtoReg == 8'b0000_0010)?RD:
                  (WhichtoReg == 8'b0000_0100)?{imm32[15:0],{16{1'b0}}}:
                  (WhichtoReg == 8'b0000_1000)?PC4:
                  ALU_change;
    GRF grf(	
    .A1(rs),
    .A2(rt),
    .A3(A3),
    .WD(WD),
    .clk(clk),
    .reset(reset),
    .WE(Wegrf),
    .WPC(PC),
    .RD1(RD1),
    .RD2(RD2)
    );
    
    
    //ALU
    assign A = 	(AluSrc1 == 4'b0001)?RD1:RD2;
    assign B = 	(AluSrc2 == 4'b0001)?RD2:
                (AluSrc2 == 4'b0010)?imm32:
                                    {{27{1'b0}},shamt};
    ALU alu(
  	.A(A),
    .B(B),
    .ALUop(ALUop),
    .change(B_change),
    .res(res),
    .ALU_change(ALU_change)
    );
    
    //DM
    assign Address = {res[31:2],{2{1'b0}}};
    DM dm(
    .Address(Address),
    .WD(RD2),
    .clk(clk),
    .reset(reset),
    .pc(PC),
    .WE(WeDm),
    .DM_type(DM_type),
    .RD(RD)
    );
    
    
    //EXT
    EXT ext(	
    .imm16(imm16),
    .sign(SignExt),
    .imm32(imm32)
    );
endmodule
