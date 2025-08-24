#include <inttypes.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

int volatile main()
{
        /*0x00000A21646C726F57202C6F6C6C6548;*/

        __uint128_t v =
        ((__uint128_t)0x00000A21646C726F << 64) |
         (__uint128_t)0x57202C6F6C6C6548;

        unsigned char _00000A21646C726F57202C6F6C6C6548[] = {
                0x49, 0x89, 0xF2,

                0xB8, 0x01, 0x00, 0x00, 0x00,
                0x48, 0x89, 0xFE,

                0xBF, 0x01, 0x00, 0x00, 0x00,
                0xBA, 0x0E, 0x00, 0x00, 0x00,
                0x0F, 0x05,

                0xB8, 0x00, 0x00, 0x00, 0x00,

                0xB8, 0x3C, 0x00, 0x00, 0x00,
                0x48, 0x31, 0xFF,
                0x0F, 0x05
        };

        void * _mem = mmap(NULL, 0x26,
                        PROT_READ | PROT_WRITE | PROT_EXEC,
                        MAP_PRIVATE | MAP_ANONYMOUS, -0x01, 0x00);

        memcpy(_mem, _00000A21646C726F57202C6F6C6C6548, 0x26);

        __uint128_t * _vp = &v;
        int (*_)(__uint128_t *) = (int (*)(__uint128_t *))_mem;
        _(_vp);
}
