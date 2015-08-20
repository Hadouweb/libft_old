#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *str;
    size_t          i;

    str = (unsigned char*)s;
    if (s)
    {
        i = 0;
        while (i < n)
        {
            str[i] = '\0';
            i++;
        }
    }
}
