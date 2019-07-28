SECTION .data
msg     db      'Hello, Holberton', 0Ah
 
SECTION .text
global  main
 
main:
 
    mov     edx, 17
    mov     ecx, msg
    mov     ebx, 1
    mov     eax, 4
    int     80h
 
    mov     ebx, 0
    mov     eax, 1
    int     80h
