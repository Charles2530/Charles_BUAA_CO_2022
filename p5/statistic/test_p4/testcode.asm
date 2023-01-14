ori $t0,1
ori $t1,2
add $t2,$t1,$t0
jal label
nop
add $ra,$ra,1
jal loop
nop
label:
sw $ra,4($t2)
add $ra,$ra,1
lw $t3,4($t2)
jr $ra
nop
loop:
sw $ra,0($0)