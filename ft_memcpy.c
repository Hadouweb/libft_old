#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    char	    *d;
    const char	*s;
    size_t	    i;

    d = (char*)dest;
    s = (const char*)src;
    if (dest && src)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return ((void*)d);
}
