.data
	k: .space 4
	w: .space 28
	v: .word 4, 2, 1, 2, 2, 1, 3
	n: .word 7
	
	
.text
	main:
	li $t0, 0
	li $t9, 4
	li $t8, 1
	li $t7, 0
	lw $s0, n

	loop1:
	
	bge $t0, $s0, sfarsit
	mul $t1, $t0, $t9 
	lw $t2, v($t1)

	move $t3, $t0
	sub $t3, $t3, $t8
	addi $t0, $t0, 1

	

	loop2:
	bltz $t3, punew
	mul $t4, $t3, $t9
	lw $t5, v($t4)
	sub $t3, $t3, $t8
	beq $t5, $t2, loop1
	b loop2
	
	punew:

	move $a0, $t2
	li $v0, 1
	syscall

	mul $t6, $t7, $t9
	sw $t2, w($t6)
	addi $t7, $t7, 1
	b loop1

	sfarsit:
	move $a0, $t7
	li $v0, 1
	syscall
	sw $t7, k
	li $v0, 10
	syscall
	