.data
a:.space 4000
enter:.asciiz "\n"
.macro get(%des,%i)
	sll %des,%i,2
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
  li $t8,10#constant->10
  li $t9,1#constant->1
        
  scanf($s0)#s0->n
  li $t0,1#a[0]->1,t0->i
  sw $t0,a($zero)
  li $s1,1#s1->len
    for_1_begin:
      bgt $t0,$s0,for_1_end
      clac:
      ################
        li $s2,0 #s2->res
        li $t1,0 #t1->j
          begin:
          bge $t1,$s1,end
            get($t2,$t1)
            lw $t3,a($t2)
            mult $t3,$t0
            mflo $t3
            add $t3,$t3,$s2
            div $t3,$t8
            mfhi $t3
            mflo $s2
            sw $t3,a($t2)
           # print($s2)
           # print_enter()
          addi $t1,$t1,1
          j begin
          end:
        beq $s2,$zero,repeat
          get($t2,$s1)
          sw $s2,a($t2)
          addi $s1,$s1,1
          # print($s1)
          # print_enter()
            now:
            subi $t3,$s1,1
            get($t4,$t3)
            lw $t5,a($t4)
            blt $t5,$t8,repeat
              div $t5,$t8
              get($t6,$s1)
              mflo $t7
              	#print($t7)
           		#print_enter()
              sw $t7,a($t6)
              mfhi $t5
              sw $t5,a($t4)
              addi $s1,$s1,1
            j now
          repeat:
            subi $t3,$s1,1
            get($t4,$t3)
            lw $t5,a($t4)
            bne $t5,$zero,end_while
            ble $s1,$t9,end_while
            subi $s1,$s1,1
          j repeat
          end_while:
      ################
      addi $t0,$t0,1
      j for_1_begin
    for_1_end:
  
  
 output:
   	subi $t0,$s1,1
    for_2_begin:
      beq $t0,$zero,for_2_end
      get($t2,$t0)
      lw $t3,a($t2)
      print($t3)
      subi $t0,$t0,1
      j for_2_begin
    for_2_end:
  lw $t0,a($zero)
  print($t0)
  end()
	
