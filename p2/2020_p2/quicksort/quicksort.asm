.data 
	array:.space 400
	space:.asciiz " "
	flag:.asciiz "flag"
	.macro scanf(%i)
      li $v0,5
      syscall
      move %i,$v0
	.end_macro	
	
	.macro printf(%i)
      move $a0,%i
      li $v0,1
      syscall
	.end_macro
	
	.macro end()
      li $v0,10
      syscall
	.end_macro
	
	.macro push(%src)
      sw %src 0($sp)
      subi $sp,$sp,4
	.end_macro
	
	.macro pop(%des)
      addi $sp $sp,4
      lw %des 0($sp)
	.end_macro
	
	.macro	print_space()
      la $a0,space
      li $v0,4
      syscall
	.end_macro
	
	.macro	print_flag()
      la $a0,flag
      li $v0,4
      syscall
	.end_macro
.text
input:
	scanf($s0)#s0->n
	li $t0,0
	for_1_begin:
		bge $t0,$s0,for_1_end
		scanf($t1)#t1->tmp
		sll $t2,$t0,2
		sw $t1,array($t2)
		addi $t0,$t0,1
		j for_1_begin
	for_1_end:
	li $a0,0
	subi $t1,$s0,1
	move $a1,$t1
	jal quicksort
	
	
print:
	li $t0,0
	for_3_begin:
		bge $t0,$s0,for_3_end
		sll $t2,$t0,2
		lw $t3,array($t2)
		printf($t3)
		print_space()
		addi $t0,$t0,1
		j for_3_begin
	for_3_end:
	end()
	
	
quicksort:
	move $t1,$a0#t1->l
	move $t2,$a1#t2->r
	bge $t1,$t2,else
	move $t3,$t1#t3->p
	addi $t0,$t1,1
    for_2_begin:
      bgt $t0,$t2,for_2_end
      sll $t4,$t0,2
      lw $t5,array($t4)#t5->a[i]
      sll $t6,$t1,2
      lw $t7,array($t6)#t7->a[l]
      bge $t5,$t7,for_else
      addi $t3,$t3,1
      sll $t8,$t3,2
      lw $t9,array($t8)#t9->a[p]
      sw $t5,array($t8)
      sw $t9,array($t4)
   		 for_else:
   		 addi $t0,$t0,1
   		 j for_2_begin
    for_2_end:
      sll $t6,$t1,2
      lw $t7,array($t6)	
      sll $t8,$t3,2
      lw $t9,array($t8)
      sw $t7,array($t8)
      sw $t9,array($t6)
    	push($ra)
	push($t0)#t0->i
	push($t1)
	push($t2)
	push($t3)
    move $a0,$t1
    subi $t4,$t3,1
    move $a1,$t4
    jal quicksort
    	pop($t3)
	pop($t2)
	pop($t1)
	pop($t0)
	pop($ra)
    addi $t4,$t3,1
    	push($ra)
	push($t0)#t0->i
	push($t1)
	push($t2)
	push($t3)
    move $a0,$t4
    move $a1,$t2
    jal quicksort
    	pop($t3)
	pop($t2)
	pop($t1)
	pop($t0)
	pop($ra)
	else:
	jr $ra

	

