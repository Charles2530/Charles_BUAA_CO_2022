ori $t0,1
jal label_0
nop
jal label_1
nop
jal label_2
nop

label_0:
add $t0,$t0,1
jr $ra
label_1:
add $ra,$ra,4
jr $ra
label_2:
add $t2,$t2,1