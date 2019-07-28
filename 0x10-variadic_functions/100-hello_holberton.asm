SECTION .data
msg     db      'Hello, Holberton', 0Ah

SECTION .text
global  _start

_start:

    mov     edx, 17
    mov     ecx, msg
    mov     ebx, 1
    mov     eax, 4
    int     80h
