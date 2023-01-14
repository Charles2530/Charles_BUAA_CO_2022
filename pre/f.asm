.data
	.macro scanf(%des)
		li $v0,5
		syscall
		move %des,$v0
	.end_macro
	.macro printf(%src)
		move $a0,%src
		li $v0,1
		syscall
	.end_macro
	.macro push(%des)
		sw %des,0($sp)
		addi $sp,$sp,-4
	.end_macro
	.macro pop(%src)
		addi $sp,$sp,4
		lw %src,0($sp)
	.end_macro
	.macro end()
		li $v0,10
		syscall
	.end_macro
.text
input:
	scanf($s0)#s0->n
	scanf($s1)#s1->p
	scanf($s2)#s2->q
	scanf($s3)#s3->a
	scanf($s4)#s4->b
	scanf($s5)#s5->c
	move $a0,$s0
	jal F
	printf($v0)
	end()
F:
	beq $a0,1,else1
	beq $a0,2,else2
	push($ra)
	push($a0)
	addi $a0,$a0,-1
	jal F
	pop($a0)
	move $s7,$v0
	mult $s7,$s3
	mflo $s7
	push($s7)
	push($a0)
	addi $a0,$a0,-2
	jal F
	pop($a0)
	pop($s7)
	mult $v0,$s4
	mflo $v0
	add $v0,$v0,$s7
	add $v0,$v0,$s5
	pop($ra)
	jr $ra
	
	
	else1:
	move $v0,$s1
	jr $ra
	else2:
	move $v0,$s2
	jr $ra
	
