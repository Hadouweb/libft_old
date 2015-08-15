#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

int     main(void)
{
    char    *str;

    str = (char *)malloc(41 * sizeof(char));
    ft_bzero(str, 30);
    printf("ok %s", str);
    return (0);
}
