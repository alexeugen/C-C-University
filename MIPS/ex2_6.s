.data
	n: .word 13
	x: .word 1


.text
	main:
	li $t2, 2
	li $t8, 4
	lw $t0, n
	div $t0, $t2			#int $t0  --> n
	mflo $t1			#in $t1 de la n/2 --> 2
	blt $t0, $t2, fas
	beq $t0, $t8, fas


	loop:
	ble $t1, $t2, sfarsit
	div $t0, $t1			
	mfhi $t3			#in $t3 -->restul 1

	addi $t1, $t1, -1
	div $t0, $t1
	mfhi $t5			##in $t5 -->restul 2		
	beqz  $t3, sfarsit_negativ
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

	fas:
	li $t7, 0
	sw $t7, x 
	lw $a0, x
	li $v0, 1
	syscall
	li $v0, 10
	syscall 
	
