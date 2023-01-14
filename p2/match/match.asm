.data
	s:.space 100
	right:.asciiz "1"
	wrong:.asciiz "0"
	.macro scanf(%des)
		li $v0,5
		syscall
		move %des,$v0
	.end_macro
	.macro scanf_f(%des)
		li $v0,12
		syscall
		move %des,$v0
	.end_macro
	.macro end()
		li $v0,10
		syscall
	.end_macro
	
.text
	input:
		scanf($s0)#s0->len
		li $t0,0
		start:
		bge $t0,$s0,end
		scanf_f($t1)	
		sb $t1,s($t0)
		addi $t0,$t0,1
		j start
		end:
		li $t0,0
		li $s2,0 #s2->flag
		for_2_begin:
			bge $t0,$s0,for_2_end
			lb $t1,s($t0)#s[i]
			sub $t2,$s0,$t0
			subi $t2,$t2,1
			lb $t3 s($t2)#s[len-i-1]
			bne $t1,$t3,else
			addi $t0,$t0,1
			j for_2_begin
		for_2_end:
			li $s2,1 
		else:
			beq $s2,$zero,other
			la $a0,right
			li $v0,4
			syscall
			end()
		other:
			la $a0,wrong
			li $v0,4	
			syscall
			end()
		
		
		
