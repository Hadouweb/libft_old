#include "libft.h"

char    *ft_strsub(char const *s, unsigned int
        start, size_t len)
{
    size_t  i;
    char    *str;

    i = 0;
    if (!s)
        return (NULL);
    if ((str = (char *)malloc(len * sizeof(char) + 1)) == NULL)
        return (NULL);
    while (i < len)
    {
        str[i] = s[i + start];
        i++;
    }
    str[i] = '\0';
    return (str);
}
