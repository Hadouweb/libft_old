#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len;

    i = 0;
    j = 0;
    len = ft_strlen(dst) + ft_strlen(src);
    while (dst[i] && i < size)
        i++;
    if (i == size)
        return (ft_strlen(src) + size);
    while (src[j] && i < size - 1)
        dst[i++] = src[j++];
    dst[i] = '\0';
    return (len);
}
