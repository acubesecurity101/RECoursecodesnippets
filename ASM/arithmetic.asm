section .data

message db "After Substraction", 10
variable db 0, 10



section .text
 global _start

_start:
	call _addition
	call _exit


_addition:
	mov rax, 25
	add  rax, 25
	add rax,2
	mov [variable], rax
	mov rax, 1
	mov rdi, 1
	mov rsi,variable
	mov rdx, 5
	syscall
	ret


_exit:
	mov rax, 60
	mov rdi, 0
	syscall
