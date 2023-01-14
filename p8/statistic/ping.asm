.text
li	$s0, 0x7f30
li	$s1, 0xfff1
mtc0	$s1, $12
li  $t1, 2604 
sw  $t1,8($s0)
sw  $t1,12($s0)
sw  $t1,0($s0)


loop:	
beq	$0, $0, loop
nop

.ktext 0x4180
lw	$k0, 0($s0)
sw	$k0, 0($s0)
eret
