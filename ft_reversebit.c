#include "libft.h"

unsigned char    ft_reversebit(unsigned char octet)
{
    unsigned char   i;
    unsigned char   j;
    unsigned char   k;
    unsigned char   tmp;

    i = 0;
    j = 0x00;
    k = 0x80;
    tmp = 0;
    while (i < 4)
    {
        tmp = tmp | (octet & k);
        octet = octet | (tmp & j);
        j >>= 1;
        k <<= 1;
        i++;
    }
    return (octet);
}
