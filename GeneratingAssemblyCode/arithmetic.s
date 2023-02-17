	.file	"arithmetic.c"
	.text
	.globl	arith
	.def	arith;	.scl	2;	.type	32;	.endef
	.seh_proc	arith
arith:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	%r8d, 32(%rbp)
	movl	16(%rbp), %edx
	movl	24(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	32(%rbp), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	16(%rbp), %eax
	addl	$4, %eax
	movl	%eax, -12(%rbp)
	movl	24(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, -16(%rbp)
	movl	-12(%rbp), %eax
	imull	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-8(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 11.2.0"
