#include "libft.h"

int     ft_count_word(char const *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while (s[i] == c)
        i++;
    if (s[i])
        count++;
    while (s[i])
    {
        if (s[i] == c)
        {
            while (s[i] == c)
                i++;
            if (s[i])
                count++;
        }
        i++; 
    }
    return (count);
}

int     ft_strlen_split(char const *s, char c)
{
    size_t  i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

char    *ft_subtab(char const *s, char c, size_t k)
{
    size_t  j;
    size_t  size_word;
    char    *str;

    j = 0;
    while (s[k] && s[k] == c)
        k++;
    size_word = ft_strlen_split(&s[k], c);
    if ((str = (char *)malloc(size_word * sizeof(char) + 1)) == NULL)
        return (NULL);
    while (j < size_word)
        str[j++] = s[k++];
    str[j] = '\0';
    return (str);
}

char    **ft_strsplit(char const *s, char c)
{
    char    **str;
    size_t  nb_word;
    size_t  i;
    size_t  k;

    i = 0;
    k = 0;
    nb_word = ft_count_word(s, c);
    if ((str = (char **)malloc(nb_word * sizeof(char *) + 1)) == NULL)
        return (NULL);
    while (i < nb_word)
    {
        str[i] = ft_subtab(&s[k], c, k);
        k += ft_strlen(str[i]);
        i++;
    }
    str[i] = 0;
    return (str);
}
