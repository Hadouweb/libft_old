#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *src;
    size_t          i;

    i = 0;
    src = (unsigned char *)s;
    if (s)
    {
        while (i < n)
        {
            if (src[i] == c)
                return ((void *)src + i);
            i++;
        }
    }
    return (0);
}
