.data
	n: .word 88
	x: .word 1


.text
	main:
	li $t2, 2
	lw $t0, n
	div $t0, $t2
	mflo $t1
	
	loop:
	blt $t1, $t2, sfarsit
	div $t0, $t1
	mfhi $t3
	beqz  $t3, sfarsit_negativ
	addi $t1, $t1, -1
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
