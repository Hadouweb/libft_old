#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    char    *str;

    i = 0;
    j = 0;
    if ((str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) *
                    sizeof(char) + 1)) == NULL)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}
