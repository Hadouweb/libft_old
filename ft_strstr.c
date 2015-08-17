/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 18:39:12 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 18:47:14 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[y])
		{
			while (haystack[i] == needle[y] && needle[y] != '\0')
			{
				i++, y++;
			}
			if (needle[y] == '\0')
				return ((char*)(haystack + i - y));
			i = i - y + 1;
			y = 0;
		}
		i++;
	}
	return (NULL);
}
