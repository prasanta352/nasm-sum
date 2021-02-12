#!/bin/bash
nasm -felf64 sum.asm 
gcc -std=c99 sum.o sum.c -o sum.out
# ld -o sum.out sum.o
./sum.out