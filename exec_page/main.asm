        bits 64
                                ;args: 128 bit integer [rdi - rsi] 
        mov     r10, rsi        ;rsi -> r10 (temporary store) [x]

        mov     rax, 0x01
        mov     rsi, rdi        ;rdi -> rsi (for first write call) [x]
        mov     rdi, 0x01
        mov     rdx, 0x0e
        syscall

        mov     rax, 0x00

        mov     rax, 0x3c
        xor     rdi, rdi
        syscall
