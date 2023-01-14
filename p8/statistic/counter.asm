.text
#interrupt  enable
ori	$s0, 0xfff1
mtc0	$s0, $12

#Address
li	$s0, 0x7f60 #SWITCH1
li	$s1, 0x7f50 #TUBE
li	$s2, 0x7f00	#CTRL
li	$s3, 0x7f04	#PRESET
li	$s4, 0xb	#4'b1011
li	$s5, 25000000 #per second
#li	$s5, 25
li  $s6, 0x7f68	#KEY
li  $s7, 0x7f70 #LED


# t0 is input-value
# t1 is max-value
# t2 is value counter

#mode judge
begin:
	lw $t3,0($s6)
	andi $t4,$t3,0x0004
	li $t5,4
	beq $t5,$t4,in_order
	nop
###############################################################################

	
not_order:
	not_loop:
	sw $0,0($s2)
	li $t2,0
	move $t1,$t0
	sw	$s5, 0($s3)
	sw	$s4, 0($s2)#mode1
	j loop1
	nop

loop1: 
	lw	$t0, 0($s0)
	sw	$t2, 0($s1)	#display
	sw  $t2, 0($s7)
	beq	$t0, $t1, loop1
	nop
	j begin
	nop

#interrupt  enable
ori	$at, 0xfff1
mtc0	$at, $12
#Address
li $s0,0x7f00 #counter
li $s1,0x7f30 #UART
li $s2,0x7f50 #TUBE
li $s3,0x7f60 #SWITCH
li $s4,0x7f68 #KEY
li $s5,0x7f70 #LED
#Constant
li $t8,2604 #Baudbits
li $t7,0xb  #Timer_mode1
li $t6,25000000 #per second

in_order:
	sw $0,0($s2)
	move $t1,$t0
	move $t2,$t0
	sw	$s5, 0($s3)
	sw	$s4, 0($s2)#mode1
	j loop2
	nop
	
loop2: 
	lw	$t0, 0($s0)
	sw	$t2, 0($s1)	#display
	sw  $t2, 0($s7)
	beq	$t0, $t1, loop2
	nop
	j begin
	nop
		
 .ktext 0x4180
 handler:
	bne $t5,$t4,add_part
	nop
	sub_part:
 	beq	$t2, $0, end
 	nop
 	addi	$t2, $t2, -1
 	j end
 	nop
	add_part:
	beq	$t2, $t0, end
 	nop
	addi	$t2, $t2, 1
 	end:
	eret
