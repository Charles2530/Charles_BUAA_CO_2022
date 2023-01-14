.data
	a:.space 1024
	b:.space 1024
	c:.space 1024
	space:.asciiz " "
	enter:.asciiz "\n"
.macro get(%des,%i,%j)
	sll %des,%i,4
	add %des,%des,%j
	sll %des,%des,2
.end_macro
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
.macro end()
	li $v0,10
	syscall
.end_macro

.text
input:
	scanf($s0)#s0->n
	li $t0,0#t0->i
	for_1_begin_1:
		bge $t0,$s0,for_1_end_1
		li $t1,0#t1->j
		for_1_begin_2:
			bge $t1,$s0,for_1_end_2
				scanf($t4)#t4->tmp
				get($t3,$t0,$t1)
				sw $t4 a($t3)
			addi $t1,$t1,1
			j for_1_begin_2
		for_1_end_2:
		addi $t0,$t0,1
		j for_1_begin_1
	for_1_end_1:
	li $t0,0
	for_2_begin_1:
		bge $t0,$s0,for_2_end_1
		li $t1,0
		for_2_begin_2:
			bge $t1,$s0,for_2_end_2
				scanf($t4)
				get($t3,$t0,$t1)
				sw $t4 b($t3)
			addi $t1,$t1,1
			j for_2_begin_2
		for_2_end_2:
		addi $t0,$t0,1
		j for_2_begin_1
	for_2_end_1:
	li $t0,0
	for_3_begin_1:
		bge $t0,$s0,for_3_end_1
		li $t1,0
		for_3_begin_2:
			bge $t1,$s0,for_3_end_2
			li $t2,0#t2->k
			for_3_begin_3:
				bge $t2,$s0,for_3_end_3
					get($t3,$t0,$t2)
					lw $t4,a($t3)#t4->a[i][k]
					get($t5,$t2,$t1)
					lw $t6,b($t5)#t6->b[k][j]
					get($t7,$t0,$t1)
					lw $t8,c($t7)#t8->c[i][j]
					mult $t4,$t6
					mflo $t4
					add $t8,$t8,$t4
					sw $t8,c($t7)
				addi $t2,$t2,1
				j for_3_begin_3
			for_3_end_3:
			addi $t1,$t1,1
			j for_3_begin_2
		for_3_end_2:
		addi $t0,$t0,1
		j for_3_begin_1
	for_3_end_1:
	
output:
	li $t0,0
	for_4_begin_1:
		bge $t0,$s0,for_4_end_1
		li $t1,0
		for_4_begin_2:
			bge $t1,$s0,for_4_end_2
				get($t3,$t0,$t1)
				lw $t4,c($t3)
				printf($t4)
				print_space()
			addi $t1,$t1,1
			j for_4_begin_2
		for_4_end_2:
		print_enter()
		addi $t0,$t0,1
		j for_4_begin_1
	for_4_end_1:
	end()
		
		
		
