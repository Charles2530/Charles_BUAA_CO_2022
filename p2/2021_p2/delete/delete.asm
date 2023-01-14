.data
char:.space 260
.macro scanf(%des)
	li $v0,5
	syscall
	move %des,$v0
.end_macro
.macro scanf_c(%des)
	li $v0,12
	syscall
	sb $v0,char(%des)
.end_macro
.macro print_c(%src)
	lb $a0,char(%src)
	li $v0,11
	syscall
.end_macro
.macro print(%src)
	move $a0,%src
	li $v0,1
	syscall
.end_macro
.macro end()
	li $v0,10
	syscall
.end_macro
.text
input:
	scanf($s0)#s0->len
	li $t0,0#t0->i
	loop1:
		bge $t0,$s0,end1
		scanf_c($t0)
		addi $t0,$t0,1
	j loop1
	end1:
	scanf($t1)#t1->k
	loop2:
	beq $t1,$zero,end2
		li $t2,0#t2->i
		addi $t3,$s0,-2#t3->len-2
		loop3:
		bgt $t2,$t3,end3
			lb $t4,char($t2)
			addi $t5,$t2,1
			lb $t6,char($t5)
			ble $t4,$t6,else
				move $t4,$t2#t4->j
				loop4:
					bgt $t4,$t3,end4
					addi $t5,$t4,1
					lb $t6,char($t5)
					sb $t6,char($t4)
					addi $t4,$t4,1
					j loop4
				end4:
				j end3
			else:
		addi $t2,$t2,1
		j loop3
		end3:
		addi $s0,$s0,-1
	addi $t1,$t1,-1
	j loop2
	end2:
	li $t2,0
	addi $t3,$s0,-1
	while:
	bgt $t2,$t3,else_
	lb $t4,char($t0)
	bne $t4,'0',else_
	addi $t2,$t2,1
	j while
	else_:
	bne $t2,$s0,then
	print($zero)
	j end_
	then:
		move $t3,$t2
		addi $t4,$s0,-1
		loop_:
		bgt $t3,$t4,end_
		print_c($t3)
		addi $t3,$t3,1
		j loop_
	end_:
	end()
	
