	.file	"lab06ex05.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "n? \0"
LC1:
	.ascii "%d\0"
LC4:
	.ascii "%.6lf\12\0"
LC5:
	.ascii "...\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$80, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	39(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	fldl	LC2
	fstpl	48(%esp)
	fldl	48(%esp)
	fldl	LC3
	faddp	%st, %st(1)
	fstpl	40(%esp)
	fldl	48(%esp)
	fstpl	4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movzbl	39(%esp), %eax
	cmpb	$1, %al
	jne	L2
	movl	$0, %eax
	jmp	L10
L2:
	fldl	40(%esp)
	fstpl	4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movzbl	39(%esp), %eax
	cmpb	$2, %al
	jne	L4
	movl	$0, %eax
	jmp	L10
L4:
	movzbl	39(%esp), %eax
	cmpb	$4, %al
	jbe	L5
	movl	$LC5, (%esp)
	call	_puts
L5:
	movb	$-1, 79(%esp)
	fldl	40(%esp)
	fstpl	64(%esp)
	movl	$2, 60(%esp)
	jmp	L6
L7:
	movsbw	79(%esp), %ax
	movw	%ax, 28(%esp)
	filds	28(%esp)
	fldl	LC6
	fmulp	%st, %st(1)
	movl	60(%esp), %eax
	leal	(%eax,%eax), %edx
	movl	60(%esp), %eax
	addl	%eax, %eax
	addl	$1, %eax
	imull	%edx, %eax
	movl	60(%esp), %edx
	addl	$1, %edx
	addl	%edx, %edx
	imull	%edx, %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fdivrp	%st, %st(1)
	fldl	64(%esp)
	faddp	%st, %st(1)
	fstpl	64(%esp)
	movzbl	79(%esp), %eax
	negl	%eax
	movb	%al, 79(%esp)
	addl	$1, 60(%esp)
L6:
	movzbl	39(%esp), %eax
	movzbl	%al, %eax
	subl	$2, %eax
	cmpl	60(%esp), %eax
	jg	L7
	movzbl	39(%esp), %eax
	movzbl	%al, %eax
	subl	$2, %eax
	movl	%eax, 56(%esp)
	jmp	L8
L9:
	movsbw	79(%esp), %ax
	movw	%ax, 28(%esp)
	filds	28(%esp)
	fldl	LC6
	fmulp	%st, %st(1)
	movl	56(%esp), %eax
	leal	(%eax,%eax), %edx
	movl	56(%esp), %eax
	addl	%eax, %eax
	addl	$1, %eax
	imull	%edx, %eax
	movl	56(%esp), %edx
	addl	$1, %edx
	addl	%edx, %edx
	imull	%edx, %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fdivrp	%st, %st(1)
	fldl	64(%esp)
	faddp	%st, %st(1)
	fstpl	64(%esp)
	movzbl	79(%esp), %eax
	negl	%eax
	movb	%al, 79(%esp)
	fldl	64(%esp)
	fstpl	4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	addl	$1, 56(%esp)
L8:
	movzbl	39(%esp), %eax
	movzbl	%al, %eax
	cmpl	56(%esp), %eax
	jg	L9
	movl	$0, %eax
L10:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
	.align 8
LC2:
	.long	0
	.long	1074266112
	.align 8
LC3:
	.long	1431655765
	.long	1069897045
	.align 8
LC6:
	.long	0
	.long	1074790400
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
