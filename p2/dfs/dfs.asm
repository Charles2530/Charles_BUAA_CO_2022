.data
	a:.space 32
	book:.space 32
	space:.asciiz " "
	enter:.asciiz "\n"
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
	.macro push(%src)
		sw %src,0($sp)
		subi $sp,$sp,4
	.end_macro
	.macro pop(%des)
		addi $sp,$sp,4
		lw %des,0($sp)
	.end_macro
	.macro end()
		li $v0,10
		syscall
	.end_macro
	.macro print_space()
		la $a0,space
		li $v0,4
		syscall
	.end_macro
	.macro print_enter()
		la $a0,enter
		li $v0,4
		syscall
	.end_macro
.text
input:
	li $t8,1#t8->1
	scanf($s0)#s0->n
	move $a0,$zero
	jal dfs
	end()
	
dfs:
	bne $a0,$s0,else
		li $t5,0#t5->j
		for_1_begin:
		bge $t5,$s0,for_1_end
		sll $t1,$t5,2
		lw $t2,a($t1)
		printf($t2)
		print_space()
		addi $t5,$t5,1
		j for_1_begin
		for_1_end:
		print_enter()
		jr $ra
	else:
	li $t0,1
	for_2_begin:
		bgt $t0,$s0,for_2_end
		sll $t1,$t0,2
		lw $t2,book($t1)
		bne $t2,$zero,else2
			sll $t1,$t0,2
		 	sw $t8,book($t1)
		 	sll $t4,$a0,2
		 	sw $t0,a($t4)
		 		push($ra)
				push($t0)
				push($a0)
		 	addi $a0,$a0,1
		 	jal dfs
		 		pop($a0)
				pop($t0)
				pop($ra)
		 	sll $t1,$t0,2
		 	sw $zero,book($t1)
		else2:
		addi $t0,$t0,1
		j for_2_begin
	for_2_end:
	jr $ra
	
