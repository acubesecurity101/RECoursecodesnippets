section .data

message db "Congratulations! You just wrote your first program", 10 


section .text
global _start




%macro printmessage 1

mov rax, 1
mov rdi, 1
mov rsi, message 
mov rdx, 52 
syscall

%endmacro


%macro exit 0

mov rax, 60
mov rdi, 0
syscall

%endmacro


_start:

printmessage 4
exit
