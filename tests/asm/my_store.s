.globl _start
.section .text

_start:
    lw x2, 0(x0)
    addi x3, x0, 0x123
    
    ret
