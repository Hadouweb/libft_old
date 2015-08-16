#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *d;
    char    *s;
    size_t  i;

    i = 0;
    d = (char *)dest;
    if ((s = (char *)malloc(strlen(src) * sizeof(char))) == NULL)
        return (NULL);
    s = (char *)src;
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
    char dest[] = "oldstring_";
    const char src[]  = "newstring_";

    printf("Before memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, 9);
    printf("After memmove dest = %s, src = %s\n", dest, src);

    return(0);
}
