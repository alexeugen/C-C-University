#SUMA ELEMENTE VECTOR

.data
	suma: .space 4
	v: .word 3, 2, 9, 6
	n: .word 4
	
.text
   main:
	li $t0, 0	# in t0 calculam suma
	lw $t2, n	# t2 este marimea vectorului
	lw $t1, n	# t1 este indicele i
	li $t6, 1
	sub $t1, $t1, $t6
	li $t5, 0
	

   loop:
	blt $t1, $t5, sfarsit
	move $t3, $t1
	add $t3, $t3, $t3	# t3 *= 4
	add $t3, $t3, $t3
	
	lw $t4, v($t3)
	add $t0, $t0, $t4		# adaugam la suma
	
	
	sub $t1, $t1, $t6	# scade indicele i

	b loop
 
   sfarsit:
	move $a0, $t0
	li $v0, 1
	sw $t0, suma
	syscall	
	li $v0, 10
	syscall
