.data 
	small:.asciiz"m is too small"
	large:.asciiz"m is too large"
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
	.macro print_s(%flag)
		.data 
		tempflag:.asciiz %flag
		.text
		la $a0,tempflag
		li $v0,4
		syscall
	.end_macro
	.macro end()
		li $v0,10
		syscall
	.end_macro
.text
	scanf($s0)#s0->m
	li $s7,100
	li $s6,999
	li $s5,10
	bge $s0,$s7,else1
		print_s("m is too small")
		end()
	else1:
	ble $s0,$s6,else2
		print_s("m is too large")
		end()
	else2:
	move $t1,$s0
	div $t1,$s7
	mfhi $t2
	mflo $t1
	div $t2,$s5
	mflo $t2
	div $s0,$s5
	mfhi $t3
	printf($t3)
	printf($t2)
	printf($t1)
	end()