.text
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
li $s6,0x21373191
#Constant
li $t6,10000000 #per second

Calculate_Mode:
    lw	$t1, 4($s3)
    lw	$t2, 0($s3)
    lbu	$t0, 0($s4)
	move $t5,$t2
    switch:
    		lw	$t2, 0($s3)
    		lbu	$t0, 0($s4)
		bne $t2,$t5,Calculate_Mode
		nop
		
        op_1:
        li	$t3, 4
        bne	$t0, $t3, op_2
        nop
        add	$t4, $t1, $t2
        j	switch_end
		nop
        
        op_2:
        li	$t3, 8
        bne	$t0, $t3, op_3
        nop
        sub	$t4, $t1, $t2
        j	switch_end
		    nop
        
        op_3:
        li	$t3, 16
        bne	$t0, $t3, op_4
        nop
        mult $t1, $t2
        mflo $t4
        j	switch_end
		    nop
        
        op_4:
        li	$t3, 32
        bne	$t0, $t3, switch_end
        nop
        div  $t1, $t2
        mflo $t4
        j	switch_end
		    nop
        

    switch_end:
		beq $t4,$zero,end
		li  $v0,0
		counter:
		addi $v0,$v0,1
		bne $v0,$t6,counter
		nop
		jal Display_sel
		nop
        j	switch
        nop


#t2,t3,t4,t5,t8
Display_sel:
    move $t1,$t4
    andi $t3,$t1,0x0001
    beq $t3,$zero,UART_display
    nop
	LED_display:
    sw	$t4, 0($s2) 
	sw  $t4, 0($s5)
    jr $ra
    nop
    UART_display:
    sw $zero, 0($s2) 
	sw $zero, 0($s5)
	nop
	nop
    sb $t4,0($s1)
    nop
    nop
    jr $ra
    nop
	
#t0,t4		
.ktext 0x4180	
interrupt:
	sw	$s6, 0($s2) 
	sw  $s6, 0($s5)
	
end:
	beq $0,$0,end
