#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
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
            if (d[i] == c)
                return ((void *)d + i + 1);
            i++;
        }
    }
    return (0);
}

int     main(void)
{
    char buffer[61];
    char *pdest;
    char string1[60] = "Taj Mahal is a historic monument in India.";
    printf( "Source: %s\n", string1 );
    pdest = ft_memccpy( buffer, string1, 'h', 42);
    *pdest = '\0';
    printf( "Result: %s\n", buffer );
    return (0);
}
