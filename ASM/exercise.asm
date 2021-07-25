section .data

message1 dw "Hello I am", 10
name dw "ElementalX", 10
message2 dw "I am", 10
age db "20" , 10
country dw "from India", 10
message3 dw "I like", 10
hobby dw "Reverse Engineering", 10
message4 dw "and I program mostly in", 10
languages dw "C Rust x86", 10


section .text
global _start


_start:

	mov rax, 1
	mov rdi, 1
	mov rsi, message1
	mov rdx, 11
	syscall

	call _name
	;call _exit

_name:
	mov rax, 1
	mov rdi, 1
	mov rsi, name
	mov rdx, 10
	syscall
	mov eax, 0
	cmp eax, 0
	je _exit
_exit:
	mov rax, 60
	mov rdi, 0
	syscall
