 

.data
	y: .space 4
	v: .word 3, 2, 9, 6
	x: .word 5
	n: .word 4
.text
   main:
	li $t9, 4
	li $t7, 1
	li $t8, 0

	lw $t0, x	# cautatul
	lw $t1, n	
	sub $t1, $t1, $t7
	mul $t1, $t1, $t9

   loop:
	blt $t1, $t8, sfarsit_negativ
	
	lw $t4, v($t1)
	beq $t4, $t0, sfarsit

	sub $t1, $t1, $t9
	b loop

   sfarsit:
	li $a0, 1
	li $v0, 1

	sw $a0, y
	syscall	

	li $v0, 10
	syscall

   sfarsit_negativ:
	li $a0, 0
	li $v0, 1
	sw $a0, y
	syscall	

	li $v0, 10
	syscall
 