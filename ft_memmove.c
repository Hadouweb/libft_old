#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *d;
    char    *s;
    size_t  i;

    i = 0;
    d = (char *)dest;
    if ((s = (char *)malloc(ft_strlen(src) * sizeof(char))) == NULL)
        return (NULL);
    s = ft_strcpy(s, (char *)src);
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
