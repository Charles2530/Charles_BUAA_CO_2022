ori $a0,$0,1999  
ori $a1,$a0,111 
lui $a2,12345
lui $a3,0xffff
nop
ori $a3,$a3,0xffff
add $s0,$a0,$a1 
add $s1,$a3,$a3
add $s2,$a3,$s0
beq $s2,$s3,eee
nop
sub $s0,$a0,$s2 
sub $s1,$a3,$a3
eee:
sub $s2,$a3,$a0
sub $s3,$s2,$s1
ori $t0,$0,0x0000
sw $a0,0($t0)
nop
sw $a1,4($t0)
sw $s0,8($t0)
sw $s1,12($t0)
sw $s2,16($t0)
sw $s5,20($t0)
lw $t1,20($t0)
lw $t7,0($t0)
lw $t6,20($t0)
sw $t6,24($t0)
lw $t5,12($t0)
jal end
nop
ori $t0,$t0,1
ori $t1,$t1,1
ori $t2,$t2,2
beq $t0,$t2,eee
nop
lui $t3,1111
jal out
nop
end:
add $t0,$t0,$t7
jr $ra
nop
out:
add $t0,$t0,$t3
ori $t2,$t0,0
beq $t0,$t2,qqq
nop
lui $v0,10
qqq:
lui $v0,11
