/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 00:12:06 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 00:21:41 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy(char *dest, const char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (src[i] == 32 || src[i] == '\n' || src[i] == '\t')
		i++;
	while (src[i] != '\0')
	{
		dest[y] = src[i];
		y++;
		i++;
	}
	y--;
	while (dest[y] == 32 || dest[y] == '\n' || dest[y] == '\t')
	{
		dest[y] = '\0';
		y--;
	}
	return (dest);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;

	if (s)
	{
		i = ft_strlen(s);
		if (!(str = ft_strnew(i + 1)))
			return (NULL);
		str = cpy(str, s);
		return (str);
	}
	return (NULL);
}
