	global   _start

	section    .text
_start:
	mov	     rax, 1
	mov	     rdi, 1
	mov	     rsi, massage
	mov	     rdx, 18
	syscall
	mov	     rax, 60
	xor	     rdi, rdi
	syscall


	section     .data
massage: db	     "Hello, Holberton", 10
