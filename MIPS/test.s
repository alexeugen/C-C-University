.data
  var1: .word 3
  x: .word 3
  y: .space 12
.text
main:
  lw $t0, x
move $a0, $t0
	li $v0, 1
	syscall	
li $v0,10
syscall