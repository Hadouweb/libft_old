#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *d;
    unsigned char   *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (dest && src)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return ((void *)d);
}

int     main(void)
{
    const char src[50] = "http://www.42.fr";
    char dest[50];

    printf("Before memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, strlen(src)+1);
    printf("After memcpy dest = %s\n", dest);
    return (0);
}
