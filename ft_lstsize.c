#include "libft.h"

int     ft_lstsize(t_list *l)
{
    int     count;

    count = 0;
    while (l)
    {
        count++;
        l = l->next;
    }
    return (count);
}
