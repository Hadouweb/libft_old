#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *list;

    if ((list = (t_list*)malloc(sizeof(t_list))) == NULL)
        return (NULL);
    if (!content)
    {
        list->content = NULL;
        list->content_size = 0;
    }
    else
    {
        if ((list->content = (void*)malloc(sizeof(content_size))) == NULL)
        {
            free(list);
            return (NULL);
        }
        ft_memcpy(list->content, content, content_size);
        list->content_size = content_size;
    }
    list->next = NULL;
    return (list);
}
