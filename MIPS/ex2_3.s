.data
	n: .word 88
	x: .word 0


.text
	main:
	li $t2, 2
	li $t9, 0
	lw $t0, n
	div $t0, $t2
	mflo $t1
	
	loop:
	blt $t1, $t2, sfarsit
	div $t0, $t1
	mfhi $t3
	beqz  $t3, adaugare
	addi $t1, $t1, -1
	b loop
	
	adaugare:
	add $t4, $t3, $t9
	sw $t4, x
		

	sfarsit:
	lw $a0, x
	li $v0, 1
	syscall
	li $v0, 10
	syscall 
