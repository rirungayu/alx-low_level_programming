section .data
message: db "Hello, Holberton",0x0a
msglen equ $-msg

section .text
global main

main:
mov eax, 1 ; syscall for write
mov edi, 1
mov rsi, message
mov edx, msglen
syscall
mov eax, 60 ; 60 is exit
xor edi, edi ; exit (0)
syscall
