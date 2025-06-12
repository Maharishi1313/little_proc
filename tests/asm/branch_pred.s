.globl _start
.section .text

_start:
    addi x3, x0, 0xF

hello:
    addi x2, x0, 0x0
    bne x2, x3, hello
    ret 