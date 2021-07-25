section .data

message db  "We will now go through Jumps", 10
jumped_message dw "Jump has successfully taken place", 10
rcxval db "Test", 10

section .text
global _start

_start:

	
        mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 29
	syscall

	xor eax, eax
	cmp eax, 0
	je _jumpexecute
_exit:

	mov rax, 60
	mov rdi, 0
	syscall 

_jumpexecute:
	mov rax, 1
	mov rdi, 1
	mov rsi, jumped_message
	mov rdx, 35
	syscall
;	mov eax, 0
	cmp eax, 0
	je _valueofrcx

_valueofrcx:
	mov rax, 1
	mov rdi, 1
	lea rcx, [rcxval]
	mov rsi,rcx
	mov rdx, 5
	syscall
	mov eax, 0
	cmp eax, 0
	je  _exit	
