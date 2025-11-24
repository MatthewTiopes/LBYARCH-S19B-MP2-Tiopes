; Matthew Gavin A. Tiopes S19B
section .data
const dd 255.0

section .text
default rel
bits 64

global imgCvtGrayFloatToInt
imgCvtGrayFloatToInt:
    ; size@RCX, ogArray@RDX, finalArray@R8
    ; formula: int value = 255 * float value
    movss xmm5, [const]
L1:       
    xor rbx, rbx
    movss xmm4, [rdx] ; store the curr elem of float array
    mulss xmm4, xmm5
    roundss xmm4, xmm4, 1 ; round down
    cvtss2si ebx, xmm4 ; convert to int
    mov [r8], ebx ; store in int array
    
    add rdx, 4
    add r8, 4
    loop L1 ;rcx <- size
    
    xor rax, rax
    ret