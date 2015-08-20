#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (dest && src)
	{
		i = 0;
		d = (char*)dest;
		s = (char*)src;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void*)d);
}
