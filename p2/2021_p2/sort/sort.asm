.data
    	array:.space 4000
    	space:.asciiz" "
    	enter:.asciiz"\n"
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
    	.macro cin(%des)
		li $v0,5
		syscall
		move %des,$v0
	.end_macro
	.macro scanf(%i)
		li $v0,5
		syscall
		sll %i,%i,3
		sw $v0,array(%i)
		addi %i,%i,4
		li $v0,5
		syscall
		sw $v0,array(%i)
		subi %i,%i,4
		srl %i,%i,3
	.end_macro
	.macro print(%i)
		sll %i,%i,3
		lw $a0,array(%i)
		li $v0,1
		syscall
		print_space()
		addi %i,%i,4
		lw $a0,array(%i)
		li $v0,1
		syscall
		print_enter()
		subi %i,%i,4
		srl %i,%i,3
	.end_macro
	.macro swap(%i)
		sll $t7,%i,3
		lw $t6,array($t7)
		addi $t7,$t7,4
		lw $t5,array($t7)
		addi $t7,$t7,-4
		srl $t7,$t7,1
		addi $t7,$t7,4
		sll $t7,$t7,1
		lw $t4,array($t7)
		addi $t7,$t7,4
		lw $t3,array($t7)
		sll $t7,%i,3
		lw $t4,array($t7)
		addi $t7,$t7,4
		lw $t3,array($t7)
		addi $t7,$t7,-4
		srl $t7,$t7,1
		addi $t7,$t7,4
		sll $t7,$t7,1
		lw $t6,array($t7)
		addi $t7,$t7,4
		lw $t5,array($t7)
	.end_macro
	.macro end()
		li $v0,10
		syscall
	.end_macro
.text
	cin($s0)#s0->n
	li $t0,0
	loop1:
		bge $t0,$s0,end1
		scanf($t0)
		addi $t0,$t0,1
		j loop1
	end1:
	li $t0,0
	addi $s0,$s0,-1
	loop2_1:
		bge $t0,$s0,end2_1
			sub $s1,$s0,$t0
			li $t1,0
			loop2_2:
				bge $t1,$s1,end2_2
					swap($t1)
				addi $t1,$t1,1
				j loop2_2
			end2_2:
		addi $t0,$t0,1
		j loop2_1
	end2_1:
	loop3:
		bge $t0,$s0,end3
		print($t0)
		addi $t0,$t0,1
		j loop1
	end3:
	end()
	
	
	
		
	