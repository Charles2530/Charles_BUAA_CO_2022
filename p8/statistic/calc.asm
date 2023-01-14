li	$s0, 0x7f68	#KEY
li	$s1, 0x7f64	#SWITCH2
li	$s2, 0x7f60	#SWITCH1
li	$s3, 0x7f50	#Tube
li  $s4, 0x7f30 #UART
li  $s5, 0x7f70 #LED
loop:
    lw	$t1, 0($s1)
    lw	$t2, 0($s2)
    lbu	$t0, 0($s0)
    
    switch:
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
        bne	$t0, $t3, op_5
        nop
        div  $t1, $t2
        mflo $t4
        j	switch_end
		nop
        
        op_5:
        li	$t3, 64
        bne	$t0, $t3, op_6
        nop
        and	$t4, $t1, $t2
        j	switch_end
		nop
        
        op_6:
        li	$t3, 128
        bne	$t0, $t3, switch_end
        nop
        or	$t4, $t1, $t2
        

    switch_end:
        
        
    j	loop
    nop
