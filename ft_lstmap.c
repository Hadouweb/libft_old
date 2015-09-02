#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list  *list;
    t_list  *tmp;
    t_list  *new;

    list = NULL;
    if (lst)
    {
        while (lst)
        {
            tmp = (*f)(lst);
            new = ft_lstnew(tmp->content, tmp->content_size);
            if (list)
                list->next = new;
            else
                list = new;
            lst = lst->next;
        }
    }
    return (list);
}
