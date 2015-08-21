#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  i;
    char    *str;

    if (s)
    {
        if ((str = (char *)malloc(ft_strlen(s) * sizeof(*str) + 1)) == NULL)
            return (NULL);
        i = 0;
        while (s[i])
        {
            str[i] = s[i];
            i++;
        }
        str[i] = '\0';
        return (str);
    }
    return (NULL);
}
