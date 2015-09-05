#include "libft.h"

int    *ft_tabjoin(int *t1, int *t2)
{
    int    *tab;
    int     size;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    size = ft_tablen(t1) + ft_tablen(t2);
    if ((tab = (int *)malloc(size * sizeof(int) + 1)) == NULL)
        return (NULL);
    while (t1[i])
    {
        tab[i] = t1[i];
        i++;
    }
    while (t2[j])
    {
        tab[i + j] = t2[j];
        j++;
    }
    tab[i + j] = '\0';
    return (tab);
}
