#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (!s2[0])
        return ((char *)s1);
    while (s1[i] && i < n)
    {
        j = 0;
        if (s2[j] == s1[i])
        {
            while (s2[j] == s1[i] && s2[j] && i < n)
            {
                i++;
                j++; 
            }
            if (s2[j] == '\0')
                return ((char *)s1 + i - j);
            i = i - (j - 1);
        }
        i++;
    }
    return (NULL);
}
