`timescale 1ns/1ps
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
);
parameter s0=0,s1=1,s2=2,s3=3,s4=4,s5=5,s6=6,s7=7,s8=8,s9=9,s10=10;
//s0,s1->" ",s2->"b",s3->"e",s4->"g",s5->"i",s6->"n",s7->" ",s8->"e",s9->"n",s10->"d",s11->" "
reg [31:0] cnt=0;
reg [4:0] state=s1;
reg error=0;
reg [1:0] flag=0;
always @(posedge clk or posedge reset)begin
    if(reset)begin
        cnt<=0;
        state<=s1;
        error<=0;
        flag<=0;
    end
    else begin
        case(state)
            s0:begin
                if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end
            s1:begin
                if(in=="B"|in=="b")begin
                    state<=s2;
                end
                else if(in=="E"|in=="e")begin
                    state<=s8;
                end
                else if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end
            s2:begin
                if(in=="E"|in=="e")begin
                    state<=s3;
                end
                else if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end
            s3:begin
                if(in=="G"|in=="g")begin
                    state<=s4;
                end
                else if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end
            s4:begin
                if(in=="I"|in=="i")begin
                    state<=s5;
                end
                else if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end 
            s5:begin
                if(in=="N"|in=="n")begin
                    cnt<=cnt+1;
                    state<=s6;
                end
                else if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end 
            s6:begin
                if(in==" ")begin
                    state<=s1;
                end
                else begin
                    cnt<=cnt-1;
                    state<=s0;
                end
            end
            s8:begin
                if(in=="N"|in=="n")begin
                    state<=s9;
                end
                else if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end 
            s9:begin
                if(in=="D"|in=="d")begin
                    cnt<=cnt-1;
                    state<=s10;
                    if(cnt==0&&flag==0)begin
                        error<=1;
                        flag<=1;
                    end
                end
                else if(in==" ")begin
                    state<=s1;
                end
                else state<=s0;
            end
            s10:begin
                if(in==" ")begin
                    state<=s1;
                    if(flag==1)begin
                        flag<=2;
                    end
                end
                else begin 
                    cnt<=cnt+1;
                    if(flag==1)begin
                        error<=0;
                        flag=0;
                    end
                    state<=s0;
                end
            end
            default:state<=s0;
        endcase 
    end
end

assign result=((cnt==0)&&(error==0));

endmodule