#include "libft.h"

void    ft_lstpush_front(t_list **l, void const *c, size_t s)
{
    t_list  *list;
    t_list  *new;

    list = *l;
    if (list)
    {
        new = ft_lstnew(c, s);
        new->next = list;
        *l = new;
    }
    else
        *l = ft_lstnew(c, s);
}
