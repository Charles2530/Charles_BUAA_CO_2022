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
	.macro push(%src)
		sw %src,0($sp)
		addi $sp,$sp,-4
	.end_macro
	.macro pop(%des)
		addi $sp,$sp,4
		lw %des,0($sp)
	.end_macro
.text	
		li $s3,1#constant->1
	input:
		scanf($s0)#s0->n
		scanf($s1)#s1->m
		scanf($s2)#s2->q
		move $a0,$s0
		move $a1,$s1
		jal calc
		add $s7,$v0,$s2#s7->num
		addi $s7,$s7,-1
		div $s7,$s0
		mfhi $s7
		bne $s7,$zero,else
			move $s7,$s0
		else:
		print($s7)
		end()
		
	calc:
			bne $a0,$s3,npc
			move $v0,$a0
			jr $ra
		npc:
			push($a0)
			push($a1)
			push($ra)
			addi $a0,$a0,-1
			jal calc
			pop($ra)
			pop($a1)
			pop($a0)
			add $v0,$v0,$a1
			addi $v0,$v0,-1
			div $v0,$a0
			mfhi $v0
			addi $v0,$v0,1
			jr $ra
		
		
