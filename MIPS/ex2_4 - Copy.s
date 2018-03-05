.data
	n: .word 86
	x: .word 1


.text
	main:
	li $t2, 2
	lw $t0, n
	div $t0, $t2
	mflo $t1
	
	loop:
	mul $t2, $t1, $t1
	bge $t2, $t0, sfarsit
	div $t0, $t1
	mfhi $t3
	beqz  $t3, sfarsit_negativ
	addi $t1, $t1, 1
	b loop
	
	sfarsit_negativ:
	li $t4, 0
	sw $t4, x
	b sfarsit	

	sfarsit:
	lw $a0, x
	li $v0, 1
	syscall
	li $v0, 10
	syscall 
