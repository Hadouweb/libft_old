#include "libft.h"

char    *ft_strmapi(char const *s, 
        char (*f)(unsigned int, char))
{
    size_t  i;
    char    *str;

    i = 0;
    if ((str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1)) == NULL)
        return (NULL);
    while (s[i])
    {
        str[i]= (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
