#include "libft.h"

int     ft_tablen(int *t)
{
    size_t  i;

    i = 0;
    while (t[i])
        i++;
    return (i);
}
