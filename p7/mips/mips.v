`timescale 1ns / 1ps
`include "macro.v"
module mips(input clk,
            input reset,
            input interrupt,
            input [31:0] i_inst_rdata,//IM_RD
            input [31:0] m_data_rdata,//DM_RD

            output [31:0] macroscopic_pc,//PC
            output [31:0] i_inst_addr,//IM_Address
            output [31:0] m_data_addr,//DM_Address
            output [31:0] m_data_wdata,//DM_WD
            output [3:0] m_data_byteen,//DM_en
            output [31:0] m_int_addr,//Int_Address
            output [3:0] m_int_byteen,//Int_en
            output [31:0] m_inst_addr,//M_PC
            output w_grf_we,//Grf_en
            output [4:0] w_grf_addr,//Grf_Address
            output [31:0] w_grf_wdata,//Grf_WD
            output [31:0] w_inst_addr//W_PC
            );
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////cpu
    wire inter_T0,inter_T1;
    //Bridge
    wire [31:0] WD_out,RD_out;
    wire [31:0] Address_out;
    wire [3:0] DM_en;
    wire T0_WE,T1_WE;
    //TC
    wire [31:2] TC_Addr;
    wire [31:0] T0_RD,T1_RD;
    assign TC_Addr=Address_out[31:2];
    //interrupt
    //cpu
    cpu cpu (
    .clk(clk), //
    .reset(reset),// 
    .interrupt(interrupt), //
    .inter_T0(inter_T0), //
    .inter_T1(inter_T1), //

    .i_inst_rdata(i_inst_rdata),// 
    .Rdata(RD_out), //dm_read_data

    .macroscopic_pc(macroscopic_pc),//
    .i_inst_addr(i_inst_addr),// 
    .m_data_addr(m_data_addr), //
    .m_data_wdata(m_data_wdata), //dm_write_data
    .Byteen(m_data_byteen),// 
    .m_int_addr(m_int_addr),//Int_Address
    .m_int_byteen(m_int_byteen),//Int_en
    .m_inst_addr(m_inst_addr), 
    .w_grf_we(w_grf_we), //
    .w_grf_addr(w_grf_addr), //
    .w_grf_wdata(w_grf_wdata), //
    .w_inst_addr(w_inst_addr)//
    );

    //Bridge
    Bridge bridge (
    .Address_in(m_int_addr), 
    .WD_in(m_data_wdata), 
    .byteen(m_data_byteen), 
    .DM_RD(m_data_rdata), //
    .T0_RD(T0_RD), 
    .T1_RD(T1_RD),

    .DM_WE(DM_en),
    .T0_WE(T0_WE), 
    .T1_WE(T1_WE), 
    .Address_out(Address_out), 
    .WD_out(WD_out), //DM
    .RD_out(RD_out)
    );


    ////T0
    TC T0 (
    .clk(clk), 
    .reset(reset), 
    .Addr(TC_Addr), 
    .WE(T0_WE), 
    .Din(WD_out), 

    .Dout(T0_RD), 
    .IRQ(inter_T0)
    );

    ////T1
    TC T1 (
    .clk(clk), 
    .reset(reset), 
    .Addr(TC_Addr), 
    .WE(T1_WE), 
    .Din(WD_out), 

    .Dout(T1_RD), 
    .IRQ(inter_T1)
    );

endmodule