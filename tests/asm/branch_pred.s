.globl _start
.section .text

_start:
    addi x3, x0, 0xF
    addi x2, x0, 0x0

hello:
    
    addi x2, x2, 0x1
    blt x2, x3, hello
    .include "eot_sequence.s"
    