.data
	addlog:.asciiz"+"
	enter:.asciiz"\n"
	array:.space 400
	.macro print_add()
		la $a0,addlog
		li $v0,4
		syscall
	.end_macro
	.macro print_enter()
		la $a0,enter
		li $v0,4
		syscall
	.end_macro
	.macro scanf(%des)
		li $v0,5
		syscall
		move %des,$v0
	.end_macro
	.macro print(%src)
		move $a0,%src
		li $v0,1
		syscall
	.end_macro
	.macro push(%src)
		sw %src,0($sp)
		addi $sp,$sp,-4
	.end_macro
	.macro pop(%des)
		addi $sp,$sp,4
		lw %des,0($sp)
	.end_macro
	.macro end()
		li $v0,10
		syscall
	.end_macro
	.macro get(%des,%temp,%i)
		sll %temp,%i,2
		lw %des,array(%temp)
	.end_macro
	.macro set(%src,%temp,%i)
		sll %temp,%i,2
		sw %src,array(%temp)
	.end_macro
.text
input:
	scanf($s0)#s0->n
	move $a0,$s0
	li $a1,1
	jal js
	end()
	
js:
	bne $a0,$zero,else_
	addi $s2,$a1,-1#s2->t
	push($ra)
	push($a0)
	jal print
	pop($a0)
	pop($ra)
	else_:
	li $t0,1#t0->i
	for_1_begin:
	bgt $t0,$a0,for_1_end
		subi $t1,$a1,1
		get($t2,$t6,$t1)
		bgt $t2,$t0,else
		bge $t0,$s0,else
			set($t0,$t6,$a1)
			push($a0)
			push($t0)
			push($a1)
			push($ra)
			sub $a0,$a0,$t0
			addi $a1,$a1,1
			jal js
				pop($ra)
	pop($a1)
	pop($t0)
	pop($a0)
		else:
		addi $t0,$t0,1
	j for_1_begin
	for_1_end:
	jr $ra
	
print:
	li $t5,1
	loop1:
	bge $t5,$s2,end1
		get($t4,$t6,$t5)
		print($t4)
		print_add()
	addi $t5,$t5,1
	j loop1
	end1:
	get($t4,$t6,$s2)
	print($t4)
	print_enter()
	jr $ra
	
