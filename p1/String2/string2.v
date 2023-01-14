`timescale 1ns/1ps
module string2(input clk,
              input clr,
              input [7:0] in,
              output out);
    parameter s0 = 0,s1 = 1,s2 = 2,s3 = 3 ,s4 = 4 ;
    //s1->"(",s2->digit,s3->"+,*",s4->")"
    reg [5:0] state=s0 ;
    reg [1:0] cnt=0;
    reg error=0;
    wire is_digit,is_op;
    assign is_digit = ("0"<= in&&in<= "9");
    assign is_op = (in=="+"|in=="*");
    always @(posedge clk or posedge clr) begin
        if (clr)begin
            state <= s0;
            cnt<=0;
            error<=0;
        end
        else begin
            case (state)
            s0:begin
              if(in=="(")begin
                state<=s1;
                cnt<=cnt+1;
                if(cnt==1)begin
                  error<=1;
                end
              end
              else if(is_digit)begin
                state<=s2;
              end
              else begin 
                state<=s0;
                error<=1;
              end
            end
            s1:begin
              if(is_digit)begin
                state<=s2;
              end
              else begin 
                state<=s0;
                error<=1;
              end
            end
            s2:begin
              if(is_op)begin
                state<=s3;
              end
              else if(in==")")begin
                cnt<=cnt-1;
                if(cnt==0)begin
                  error<=1;
                end
                state<=s4;
              end
              else begin 
                state<=s0;
                error<=1;
              end
            end
            s3:begin
              if(is_digit)begin
                state<=s2;
              end
              else if(in=="(")begin
                state<=s1;
                cnt<=cnt+1;
                if(cnt==1)begin
                  error<=1;
                end
              end
              else begin 
                state<=s0;
                error<=1;
              end
            end
            s4:begin
              if(is_op)begin
                state<=s3;
              end
              else begin 
                state<=s0;
                error<=1;
              end
            end
            endcase
        end
    end
    assign out = ((state==s2)|(state==s4))&&(cnt==0)&&(error==0);
endmodule
