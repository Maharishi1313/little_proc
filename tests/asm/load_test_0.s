.globl _start
.section .text

_start:
    lw x2, 1(x0)
    lh x3, 2(x0)
    lh x4, 3(x0)
    lb x5, 3(x0)
    lb x6, 12(x0)
    lbu x7, 14(x0)
    lhu x8, 13(x0)
    addi x3, x0, 0x123
    
    ret
