.data
 .macro end()
 	li $v0,10
 	syscall
 .end_macro
 .macro scanf(%src)
 	li $v0,5
 	syscall
 	move %src,$v0
 .end_macro
 .macro push(%src)
  	sw %src,0($sp)
 	subi $sp,$sp,4
 .end_macro
 .macro pop(%des)
 	addi $sp,$sp,4
 	lw %des,0($sp)
 .end_macro
 .macro printf(%src)
 	move $a0,%src
 	li $v0,1
 	syscall
 .end_macro
.text
	li $t1,1#constant 1
	scanf($s0)#s0->n
	move $a0,$s0
	jal fibonacci
	move $s2,$v0
	printf($s2)
	end()
	
fibonacci:
	move $s1,$a0#s1->p
	beq $s1,$zero,else
	beq $s1,$t1,else
	subi $s1,$s1,1
	push($ra)
	push($a0)
	push($s2)
	move $a0,$s1
	push($a0)
	jal fibonacci
	move $s2,$v0
	pop($a0)
	push($s2)
	subi $a0,$a0,1
	jal fibonacci
	pop($s2)
	add $v0,$s2,$v0
	pop($s2)
	pop($a0)
	pop($ra)
	jr $ra
	
else:
	li $v0,1
	jr $ra
	
	
