`timescale 1ns / 1ps
`include "macro.v"
module HazardUnit(input [4:0] D_A1,
                  input [4:0] D_A2,
                  input [4:0] E_A1,
                  input [4:0] E_A2,
                  input [4:0] M_A2,
                  input [4:0] E_A3,
                  input [4:0] M_A3,
                  input [4:0] W_A3,

                  input [1:0] D_Tuse_rs,
                  input [1:0] D_Tuse_rt,
                  input [1:0] E_Tnew,
                  input [1:0] M_Tnew,
                  input [1:0] W_Tnew,
                  input D_check_new,
                  input E_check_new,
                  input M_check_new,

                  input E_Wegrf,
                  input M_Wegrf,
                  input W_Wegrf,
                  input [7:0] E_WhichtoReg,
                  input [7:0] M_WhichtoReg,
                  input start,
                  input busy,
                  input MDU_en,
                  input Is_nop,

                  output [2:0] SelB_D1,
                  output [2:0] SelB_D2,
                  output [2:0] SelALU_A,
                  output [2:0] SelALU_B,
                  output SelDM,
                  output stall
                  );


//stall
wire stall_rs,stall_rt,stall_md;
//stop
// assign stall_rs = (D_A1!= 0)&&((D_Tuse_rs<E_Tnew)&&(D_check_new===1'd1?(D_A1==E_A3||D_A1==5'd31):(D_A1 == E_A3))&&E_Wegrf||
//                   (D_Tuse_rs<M_Tnew)&&(E_check_new===1'd1?(D_A1==M_A3||D_A1==5'd31):(D_A1 == M_A3))&&M_Wegrf||
//                   (D_Tuse_rs<W_Tnew)&&(M_check_new===1'd1?(D_A1==W_A3||D_A1==5'd31):(D_A1 == W_A3))&&W_Wegrf);
// //the pre is the condition
// assign stall_rt = (D_A2!= 0)&&((D_Tuse_rt<E_Tnew)&&(D_check_new===1'd1?(D_A2 == E_A3||D_A2==5'd31):(D_A2==E_A3))&&E_Wegrf||
//                   (D_Tuse_rt<M_Tnew)&&(D_check_new===1'd1?(D_A2 == M_A3||D_A2==5'd31):(D_A2==M_A3))&&M_Wegrf||
//                   (D_Tuse_rt<W_Tnew)&&(D_check_new===1'd1?(D_A2 == W_A3||D_A2==5'd31):(D_A2==W_A3))&&W_Wegrf);
assign stall_rs = (D_A1!= 0)&&((D_Tuse_rs<E_Tnew)&&(D_A1 == E_A3)&&E_Wegrf||
                  (D_Tuse_rs<M_Tnew)&&(D_A1 == M_A3)&&M_Wegrf||
                  (D_Tuse_rs<W_Tnew)&&(D_A1 == W_A3)&&W_Wegrf);
//the pre is the condition
assign stall_rt = (D_A2!= 0)&&((D_Tuse_rt<E_Tnew)&&(D_A2 == E_A3)&&E_Wegrf||
                  (D_Tuse_rt<M_Tnew)&&(D_A2 == M_A3)&&M_Wegrf||
                  (D_Tuse_rt<W_Tnew)&&(D_A2 == W_A3)&&W_Wegrf);

assign stall_md=(start||busy)&&(MDU_en);

//output

assign SelB_D1 =(D_A1 == E_A3)&&(E_Tnew == 0)&&D_A1&&E_Wegrf?3'b011://ED
                (D_A1 == M_A3)&&(M_Tnew == 0)&&D_A1&&M_Wegrf?3'b010://MD
                (D_A1 == W_A3)&&(W_Tnew == 0)&&D_A1&&W_Wegrf?3'b001://WD
                3'b000;//d_RD1

assign SelB_D2 =(D_A2 == E_A3)&&(E_Tnew == 0)&&D_A2&&E_Wegrf?3'b011://ED
                (D_A2 == M_A3)&&(M_Tnew == 0)&&D_A2&&M_Wegrf?3'b010://MD
                (D_A2 == W_A3)&&(W_Tnew == 0)&&D_A2&&W_Wegrf?3'b001://WD
                3'b000;//d_RD2

assign SelALU_A = (E_A1 == M_A3)&&(M_Tnew == 0)&&E_A1&&M_Wegrf?3'b010://MD
						      (E_A1 == W_A3)&&(W_Tnew == 0)&&E_A1&&W_Wegrf?3'b001://WD
						      3'b000;//e_RD1

assign SelALU_B = (E_A2 == M_A3)&&(M_Tnew == 0)&&E_A2&&M_Wegrf?3'b010://MD
						      (E_A2 == W_A3)&&(W_Tnew == 0)&&E_A2&&W_Wegrf?3'b001://WD
						      3'b000;//e_RD2

assign SelDM   = (M_A3 == W_A3)&&M_A3&&(W_Tnew == 0)&&W_Wegrf;

assign stall = (stall_rs||stall_rt||stall_md)&&(~Is_nop);

endmodule
