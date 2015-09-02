#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
    t_list  *tmp;

    tmp = NULL;
    if (*alst)
    {
        while (*alst)
        {
            (*del)((*alst)->content, (*alst)->content_size);
            tmp = *alst;
            free(*alst);
            (*alst) = NULL;
            *alst = tmp->next;
        }
    }
}
