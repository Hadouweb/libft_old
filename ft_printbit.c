#include "libft.h"

void    ft_printbit(unsigned char octet)
{
    unsigned char   i;

    i = 1 << 7;
    while (i > 0)
    {
        if (octet & i)
            ft_putchar('1');
        else
            ft_putchar('0');
        i >>= 1;
    }
}
