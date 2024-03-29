#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;

    i = 0;
    if ((char)c == '\0')
        return ((char *)(s + ft_strlen(s)));
    while (s[i])
    {
        if ((char)s[i] == (char)c)
            return ((char *)(s + i));
        i++;
    }
    return (0);
}
