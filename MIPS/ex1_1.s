#MAXIMUL A 3 NUMERE
.data
	x: .word 3
	y: .word 4
	z: .word 4
	max: .space 4
.text
   main:
	lw $t0, x
	lw $t1, y
	bge $t0, $t1, et1
	b et2

   et1:
	lw $t1, z
	bge $t0, $t1, sfarsit
	move $t0, $t1
	b sfarsit
   et2:
	lw $t0, y
	b et1
   sfarsit:
	sw $t0, max
	move $a0, $t0
	li $v0, 1
	syscall	
	li $v0, 10
	syscall