global main

section .data
message: db "Hello, Holberton",0

section .text
main:
mov eax, 1 ; syscall for write
mov edi, 1
mov rsi, msg
mov edx, msglen
syscall
mov eax, 60 ; 60 is exit
xor edi, edi ; exit (0)
syscall
