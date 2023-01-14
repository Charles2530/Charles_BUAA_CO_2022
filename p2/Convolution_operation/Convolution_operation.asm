.data
f:.space 1024
h:.space 1024
space:.asciiz" "
enter:.asciiz"\n"
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
.macro get(%des,%i,%j)
	sll %des,%i,4
	add %des,%des,%j
	sll %des,%des,2
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
	scanf($s0)#s0->m1
	scanf($s1)#s1->n1
	scanf($s2)#s2->m2
	scanf($s3)#s3->n2
	li $t0,0#t0->i
	for_1_begin_1:
		bge $t0,$s0,for_1_end_1
		li $t1,0#t1->j
		for_1_begin_2:
			bge $t1,$s1,for_1_end_2
			scanf($t2)#t2->tmp
			get($t3,$t0,$t1)
			sw $t2,f($t3)
			addi $t1,$t1,1
			j for_1_begin_2
		for_1_end_2:
		addi $t0,$t0,1
		j for_1_begin_1
	for_1_end_1:
	li $t0,0#t0->i
	for_2_begin_1:
		bge $t0,$s2,for_2_end_1
		li $t1,0#t1->j
		for_2_begin_2:
			bge $t1,$s3,for_2_end_2
			scanf($t2)#t2->tmp
			get($t3,$t0,$t1)
			sw $t2,h($t3)
			addi $t1,$t1,1
			j for_2_begin_2
		for_2_end_2:
		addi $t0,$t0,1
		j for_2_begin_1
	for_2_end_1:	
	li $t0,0#t0->i
	sub $s4,$s0,$s2
	addi $s4,$s4,1
	sub $s5,$s1,$s3
	addi $s5,$s5,1
	for_3_begin_1:
		bge $t0,$s4,for_3_end_1
		li $t1,0#t1->j
		for_3_begin_2:
			bge $t1,$s5,for_3_end_2
			li $s6,0#s6->temp
			li $t2,0#t2->k
			for_3_begin_3:
				bge $t2,$s2,for_3_end_3
				li $t3,0#t3->l
				for_3_begin_4:
					bge $t3,$s3,for_3_end_4
					add $t4,$t0,$t2
					add $t5,$t1,$t3
					get($t6,$t4,$t5)
					lw $t7,f($t6)
					get($t8,$t2,$t3)
					lw $t9,h($t8)
					mult $t7,$t9
					mflo $t7
					add $s6,$s6,$t7
					addi $t3,$t3,1
					j for_3_begin_4
				for_3_end_4:
				addi $t2,$t2,1
				j for_3_begin_3
			for_3_end_3:
			printf($s6)
			print_space()	
			addi $t1,$t1,1
			j for_3_begin_2
		for_3_end_2:
		print_enter()
		addi $t0,$t0,1
		j for_3_begin_1
	for_3_end_1:
	end()
