        sub     rsp, 16

        mov     rax, 0x00000A21646C726F
        push    rax

        mov     rax, 0x57202C6F6C6C6548
        push    rax

        mov     rax, 0x01
        mov     rdi, 0x01
        mov     rsi, rsp
        mov     rdx, 0x07
        syscall
        add     rsp, 7
        mov     rax, 0x01
        mov     rdi, 0x01
        mov     rsi, rsp
        mov     rdx, 0x07
        syscall

        add     rsp, 9
        mov     rax, 0x00

        mov     rax, 0x3c
        xor     rdi, rdi
        syscall
