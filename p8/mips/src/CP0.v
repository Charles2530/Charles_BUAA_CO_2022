`timescale 1ns / 1ps
`include "macro.v"
module CP0(input clk,
           input reset,
           input WE,
           input [4:0] Address,
           input [31:0] WD,
           input BD_in,//branch delay
           input [31:0] VPC,
           input [4:0] ExcCode_in,
           input [7:2] HWInt,
           input EXLClr,

           output req,
           output reg [31:0] EPC,
           output [31:0] D_out
           );
    reg [31:0] SR;
    reg [31:0] Cause;
    assign InterInt = (ExcCode_in!= `Error_None)&&(!`EXL);
    assign ExterInt = (|(HWInt&`IM))&&`IE&&(!`EXL);
    always @(posedge clk)begin
        if (reset)begin
            SR    <= 0;
            Cause <= 0;
            EPC   <= 0;
        end
        else begin
            if (EXLClr) begin
                `EXL <= 0;
            end
            else if (req) begin
                `BD      <= BD_in;
                EPC      <= BD_in?(VPC-32'd4):VPC;
                `ExcCode <= ExterInt?`Error_Int:ExcCode_in;
                `EXL     <= 1'b1;
                `IP      <= HWInt;
                // $display("BD: %h,EPC: %h,ExcCode: %h,EXL: %h",`BD,EPC,`ExcCode,`EXL);
            end
            else if (WE)begin
                if (Address == `SR_Address)begin
                    SR <= WD;
                    //$display("SR: %h",WD);
                end
                else if (Address == `EPC_Address)begin
                    EPC <= WD;
                    // $display("EPC: %h",WD);
                end
            end
        end
    end
    assign req =(ExterInt||InterInt);
    assign D_out =  (Address == `SR_Address)?SR://mfc0,mtc0
                    (Address == `Cause_Address)?Cause:
                    (Address == `EPC_Address)?EPC://eret
                    32'b0;
endmodule
