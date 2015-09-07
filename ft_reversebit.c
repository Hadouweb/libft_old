#include "libft.h"

unsigned char    ft_reversebit(unsigned char octet)
{
    unsigned char   read;
    unsigned char   write;
    unsigned char   result;

    read = 1;
    write = 128;
    result = 0;
    while (read)
    {
        if (octet & read)
            result |= write;
        read <<= 1;
        write >>= 1;
    }
    return (result);
}
