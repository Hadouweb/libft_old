#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    size_t  i;
    char    *str;

    i = 0;
    if ((str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1)) == NULL)
        return (NULL);
    while (s[i])
    {
        str[i] = (*f)(s[i]);
        i++;
    }
    return (str);
}
