#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <stdlib.h>

//init:
/*
 *char hw[] = "Hello, World!\n"
 *store in reverse because of endianness
 *
 */

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
        //8 + 4 + 2
        //unsigned long long + unsigned long + unsigned short

        //size 15 bytes (16 implicit)
        char hw[] = "Hello, World!\n\0";

        /*
        unsigned long long _p1;
        unsigned long      _p2;
        unsigned short     _p3;

        void * _pstream = (void *)malloc(14 * sizeof(char));

        printf("%s\n\n", "stage 1 -- loading values");
       
        for (unsigned long int i = 14; i != 0; i--)
        {
                ((char *)_pstream)[i] = hw[i];
                printf("moved %c to %d\n", hw[i], (int)_pstream);
        }

        printf("%s\n\n", "stage 2 -- punning data");

        _p1 = (unsigned long long)_pstream;
        printf("_p1 loaded as %llu\n", _p1); 
        _pstream += 8;
        _p2 = (unsigned long)_pstream;
        printf("_p2 loaded as %lu\n", _p2); 
        _pstream += 4;
        _p3 = (unsigned short)_pstream;
        printf("_p3 loaded as %hu\n", _p3); 

        
        printf("%s\n\n", "stage 3 -- masking data");
        */

/*
        __uint128_t final =
        (_p1 & 0xFFFFFFFF00000000) |
        (_p2 & 0x00000000FFFF0000) |
        (_p3 & 0x000000000000FFFF);     //final two bytes unused
        __uint128_t final =
        (_p1 & 0x00000000FFFFFFFF) |
        (_p2 & 0x0000FFFF00000000) |
        (_p3 & 0xFFFF000000000000);     //final two bytes unused
*/
        print_u128(*(__uint128_t *)hw);
        //print_u128(final);

        return 0;
}
