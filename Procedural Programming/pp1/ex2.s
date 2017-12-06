	.file	"ex2.c"
	.section	.rodata
.LC0:
	.string	"%d%d%d"
.LC1:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	-4(%rbp), %rcx
	leaq	-8(%rbp), %rdx
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	cmpl	%eax, %edx
	jl	.L2
	movl	-12(%rbp), %edx
	movl	-4(%rbp), %eax
	cmpl	%eax, %edx
	jge	.L3
.L2:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	cmpl	%eax, %edx
	jl	.L4
	movl	-8(%rbp), %edx
	movl	-12(%rbp), %eax
	cmpl	%eax, %edx
	jl	.L4
	movl	-8(%rbp), %eax
	jmp	.L5
.L4:
	movl	-4(%rbp), %eax
.L5:
	jmp	.L6
.L3:
	movl	-12(%rbp), %eax
.L6:
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
