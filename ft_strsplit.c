#include "libft.h"
#include <stdio.h>

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

char    **ft_strsplit(char const *s, char c)
{
    char    **str;
    size_t  nb_word;
    size_t  i;
    size_t  j;
    size_t  k;
    size_t  size_word;

    i = 0;
    k = 0;
    nb_word = ft_count_word(s, c);
    printf("Nb mots : %zu\n", nb_word);
    if ((str = (char **)malloc(nb_word * sizeof(char *) + 1)) == NULL)
        return (NULL);
    while (i < nb_word)
    {
        j = 0;
        size_word = ft_strlen_split(&s[k], c);
        printf("size : %zu\n", size_word);
        if ((*str = (char *)malloc(size_word * sizeof(char) + 1)) == NULL)
            return (NULL);
        while (j < size_word)
        {
            str[i][j] = s[k];
            j++;
        }
        while (s[k] == c)
            k++;
        i++;
    }
    str[i] = 0;
    return (str);
}

int     main(void)
{
    char    **str;
    size_t  i;

    i = 0;
    str = ft_strsplit("Salut ca va", ' ');
}
