.data
array:.space 400
book:.space 400
dir:.space 100
enter:.asciiz "\n"
.macro push(%src)
	sw %src,0($sp)
	subi $sp,$sp,4
.end_macro
.macro pop(%des)
	addi $sp,$sp,4
	lw %des,0($sp)
.end_macro
.macro get(%des,%i,%j)
	sll %des,%i,3
	add %des,%des,%j
	sll %des,%des,2
.end_macro
.macro get_dir(%des,%i,%j)
	sll %des,%i,2
	add %des,%des,%j
	sll %des,%des,2
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
.macro end()
	li $v0,10
	syscall
.end_macro
.macro print_enter()
	la $a0,enter
	li $v0,4
	syscall
.end_macro
.text
initial:
	li $s7,1	  #constant->1
	li $s6,-1   #constant->-1
	#print($s6)
	li $t0,0    #t0->i
	li $t1,0	  #t1->j
	get_dir($t2,$t0,$t1)
	sw $zero,dir($t2)
	addi $t0,$t0,1
	get_dir($t2,$t0,$t1)
	sw $s7,dir($t2)
	addi $t0,$t0,1
	get_dir($t2,$t0,$t1)
	sw $zero,dir($t2)
	addi $t0,$t0,1
	get_dir($t2,$t0,$t1)
	sw $s6,dir($t2)
	li $t0,0
	addi $t1,$t1,1
	#######
	get_dir($t2,$t0,$t1)
	sw $s7,dir($t2)
	addi $t0,$t0,1
	get_dir($t2,$t0,$t1)
	sw $zero,dir($t2)
	addi $t0,$t0,1
	get_dir($t2,$t0,$t1)
	sw $s6,dir($t2)
	addi $t0,$t0,1
	get_dir($t2,$t0,$t1)
	sw $zero,dir($t2)
	li $s2,0#s2->cnt
	
	
input:
	scanf($s0)#s0->n
	scanf($s1)#s1->m
	li $t0,1#t0->i
	for_1_begin:
    bgt $t0,$s0,for_1_end
    li $t1,1#t1->j
      for_2_begin:
        bgt $t1,$s1,for_2_end
          scanf($t2)#t2->temp
          get($t3,$t0,$t1)
          sw $t2,array($t3)
        addi $t1,$t1,1
      j for_2_begin
      for_2_end:
    addi $t0,$t0,1
  j for_1_begin
	for_1_end:
	scanf($s3)#s3->start_x
	scanf($s4)#s4->start_y
	scanf($s5)#s5->end_x
	scanf($s6)#s6->end_y
	get($t3,$s3,$s4)
	sw $s7,book($t3)
	li $t0,0
    	move $a0,$s3
	move $a1,$s4
	jal dfs
	print($s2)
	end()
	
	dfs:
	bne $a0,$s5,else
	bne $a1,$s6,else
	addi $s2,$s2,1
	jr $ra
	else:
    li $t0,0
    li $t8,4#constant->4
    dfs_1_begin:
      bge $t0,$t8,dfs_1_end
      get_dir($t1,$t0,$zero)
      lw $t2,dir($t1)
      add $t2,$t2,$a0#t2->tx
      get_dir($t1,$t0,$s7)
      lw $t3,dir($t1)
      add $t3,$t3,$a1#t3->ty
      ble $t2,$zero,continue
      bgt $t2,$s0,continue
      ble $t3,$zero,continue
      bgt $t3,$s1,continue
      get($t4,$t2,$t3)
      lw $t5,book($t4)
      beq $t5,$s7,continue
      get($t4,$t2,$t3)
      lw $t5,array($t4)
      beq $t5,$s7,continue
      get($t4,$t2,$t3)
      sw $s7,book($t4)
      	push($ra)
    		push($a0)
    		push($a1)
    		push($t0)
    		push($t2)
    		push($t3)
      move $a0,$t2
      move $a1,$t3
      jal dfs
      	pop($t3)
		pop($t2)
		pop($t0)
		pop($a1)
		pop($a0)
		pop($ra)
      get ($t4,$t2,$t3)
      sw $zero,book($t4)
    continue:
    addi $t0,$t0,1
	j dfs_1_begin
	dfs_1_end:
	jr $ra
