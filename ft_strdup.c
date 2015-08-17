#include <string.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *str;
    size_t  i;

    i = 0;
    if ((str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1)) == NULL)
        return (NULL);
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
