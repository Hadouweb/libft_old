#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *str;
    size_t  i;

    i = 0;
    if ((str = (char *)malloc(size * sizeof(char) + 1)) == NULL)
        return (NULL);
    while (i < size)
    {
        str[i] = '\0';
        i++;
    }
    return (str);
}
