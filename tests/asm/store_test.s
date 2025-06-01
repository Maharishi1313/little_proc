.globl _start
.section .text

_start:
   
    # Aligned, Halfword store
    li x31, 0xdead
    sh x31, 4(x0)
    addi x3, x0, 0x347
    addi x2, x0, 0x7fe
    mul x4, x3, x2
    lhu x5, 3(x0)

    ret