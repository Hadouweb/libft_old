#include "libft.h"

void    ft_lstpush_back(t_list **l, void const *c, size_t s)
{
    t_list  *list;
    t_list  *begin_list;

    list = *l;
    if (list)
    {
        while (list->next)
            list = list->next;
        list->next = ft_lstnew(c, s);
    }
    else
        *l = ft_lstnew(c, s);
}
