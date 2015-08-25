#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char    *str;
    size_t  i;
    size_t  j;
    size_t  k;

    j = ft_strlen(s);
    i = 0;
    k = 0;
    while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
        i++;
    if (i == j)
        return ("");
    j--;
    while (s[j] && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
        j--;
    if ((str = (char *)malloc((j - i) * sizeof(char) + 1)) == NULL)
        return (NULL);
    while (s[i] && i <= j)
        str[k++] = s[i++];
    str[k] = '\0';
    return (str);
}
