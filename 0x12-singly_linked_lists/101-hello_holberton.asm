section .data
	msg	db "Hello, Holberton", 10, 0

section .text
	extern	printf
	global	main

main:
	mov	edi, msg
	mov	eax, 0
	call	printf

	mov	ebx, 0
	mov	eax, 1
	ret
