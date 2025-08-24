#include <inttypes.h>
#include <unistd.h>

main()
{
        /*0x00000A21646C726F57202C6F6C6C6548;*/

        __uint128_t v =
        ((__uint128_t)0x00000A21646C726F << 64) |
         (__uint128_t)0x57202C6F6C6C6548;

	write(00, (void *)&v, (15 * sizeof(char)));
}
