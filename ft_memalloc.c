#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *data;

    if ((data = (void *)malloc(size * sizeof(*data))) == NULL)
        return (NULL);
    ft_memset(data, 0, size);
    return (data);
}
