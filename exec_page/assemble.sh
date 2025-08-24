#!/usr/bin/env bash
rm main.o
rm a.out

nasm -g -f elf64 main.asm 
ld main.o
