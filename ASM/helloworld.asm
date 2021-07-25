section .data
 message db "Congratulations! You just wrote your first program", 10 
section .text 

global _start
 _start: 
mov rax, 1
 mov rdi, 1
 mov rsi, message
 mov rdx, 52
 syscall

 mov rax, 60 
mov rdi, 0
 syscall
