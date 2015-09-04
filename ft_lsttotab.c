#include "libft.h"

void    **ft_lsttotab(t_list *l)
{
    void    **tab;
    int     size;
    size_t  i;
    t_list  *list;

    list = l;
    size = ft_lstsize(l);
    i = 0;
    tab = (void **)ft_memalloc(size);
    while (list)
    {
        tab[i] = (void *)ft_memalloc(list->content_size);
        tab[i] = list->content;
        list = list->next;
        i++;
    }
    return (tab);
}
