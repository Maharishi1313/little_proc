.globl _start
.section .text

_start:
    li x1, 0xdeadbeef
    lw x2, 3(x0)
    addi x1, x0, 0x2
    lh x4, 0(x0)
    nop
    lb x6, 4(x0)
    addi x2, x1, 0x1
    li x2, 0xfeadbeef
    li x3, 0x3
    mul x4, x1, x2
    add x4, x4, x3
    lh x5, 2(x0)
    lh x7, 3(x0)
    li x5, 0xcafebabe
    li x5, 0xdeadbeef
    li x5, 0xcafebabe
    li x5, 0xdeadbeef
    ret