/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 18:47:22 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 18:49:26 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	int		y;

	i = 0;
	y = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[y])
		{
			while (haystack[i] == needle[y] && needle[y] != '\0' && i < n)
				i++, y++;
			if (needle[y] == '\0')
				return ((char*)(haystack + i - y));
			i = i - y + 1;
			y = 0;
		}
		i++;
	}
	return (NULL);
}
