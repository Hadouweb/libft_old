#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] && i < n)
        i++;
    if (i == n)
        return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
    else
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);

}
