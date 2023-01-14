module vote(input [31:0] np,
            input [7:0] vip,
            input vvip,
            output res);
reg [7:0]cnt ;
integer i,j;
always @(*) begin
    cnt = 0;
    for(i = 0;i < 32;i = i+1)begin
        if (np[i] == 1'b1)begin
            cnt = cnt+1;
        end
    end
    for(j = 0;j < 8;j++)begin
        if (vip[j] == 1'b1)begin
            cnt = cnt+4;
        end
    end
    if (vvip == 1'b1)begin
        cnt = cnt+16;
    end
end
assign res = (cnt>32);
endmodule
