.ktext 0x4180
handler:
	beq	$t2, $0, end
	nop
	addi	$t2, $t2, -1
	end: eret
	
	
.text
#interrupt  enable
ori	$s0, 0xfff1
mtc0	$s0, $12

li	$s0, 0x7f60    #input
li	$s1, 0x7f50    #display
li	$s2, 0x7f00
li	$s3, 0x7f04
li	$s4, 0xb
li	$s5, 25000000
li	$s5, 25

# t0 is input-value
# t1 is max-value
# t2 is value counter

loop: 
	lw	$t0, 0($s0)
	sw	$t2, 0($s1)
	beq	$t0, $t1, loop
	nop


begin:
	sw	$0, 0($s2)
	move	$t1, $t0
	move	$t2, $t0
	sw	$s5, 0($s3)
	sw	$s4, 0($s2)
	j	loop
	nop