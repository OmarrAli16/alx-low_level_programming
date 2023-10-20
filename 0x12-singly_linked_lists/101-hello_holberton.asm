section		.data
	msg db 'Hello, Holberton', 0xa, 0

section		.text
	extern word
	global code
code:
	mov	edi, msg
	mov	eax, 0
	call	word
