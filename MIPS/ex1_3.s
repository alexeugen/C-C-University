#SUMA ELEMENTE VECTOR

.data
	v: .word 3, 2, 9, 6
	n: .word 4
.text
   main:
	li $t0, 0	# in t0 calculam suma
	lw $t2, n	# t2 este marimea vectorului
	li $t1, 0	# t1 este indicele i
   	b loop
   loop:
	bge $t1, $t2, sfarsit
	move $t3, $t1
	add $t3, $t3, $t3	# t3 *= 4
	add $t3, $t3, $t3
	
	lw $t4, v($t3)
	add $t0, $t0, $t4		# adaugam la suma

	addi $t1, $t1, 1	# creste indicele i

	b loop
 
   sfarsit:
	move $a0, $t0
	li $v0, 1
	syscall	
	li $v0, 10
	syscall
