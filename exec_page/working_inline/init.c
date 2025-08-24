#include <stdio.h>
#include <inttypes.h>

void print_u128(__uint128_t value) {
    if (value == 0) {
        putchar('0');
        return;
    }

    char buf[40]; // enough for 2^128 - 1 (39 digits max)
    int i = 0;

    while (value > 0) {
        unsigned digit = value % 10;
        buf[i++] = '0' + digit;
        value /= 10;
    }

    // print in reverse
    while (i--) {
        putchar(buf[i]);
    }
}

int main()
{
        //size 15 bytes (16 implicit)
        char hw[] = "Hello, World!\n\0";

        print_u128(*(__uint128_t *)hw);

        return 0;
}
