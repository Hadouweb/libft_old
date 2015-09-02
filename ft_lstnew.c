#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *list;

    if ((list = (t_list*)malloc(content_size * sizeof(*content)
                    + 1 + sizeof(size_t))) == NULL)
        return (NULL);
    if (!content)
    {
        list->content = NULL;
        list->content_size = 0;
    }
    else
    {
        list->content = (void *)content;
        list->content_size = content_size;
    }
    list->next = NULL;
    return (list);
}
