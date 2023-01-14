.data
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
	.macro end()
		li $v0,10
		syscall
	.end_macro
.text
	input:
		scanf($s0)#s0->n
		li $s1,1
		li $t0,2#t0->i
		blt $s0,$t0,else
			loop:
			bge $t0,$s0,end
				div $s0,$t0
				mfhi $t1
				beq $t1,$zero,next
			addi $t0,$t0,1
			j loop
			end:
		else:
		print($zero)
		end()
		next:
		print($s1)
		end()