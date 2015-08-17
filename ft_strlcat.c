/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 18:27:40 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 18:31:23 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	int		y;

	y = 0;
	i = 0;
	len = ft_strlen(dest) + ft_strlen(src);
	while (dest[i] != '\0' && i < size)
		i++;
	if (i == size)
		return (ft_strlen(src) + size);
	while (src[y] != '\0' && i < size - 1)
		dest[i++] = src[y++];
	dest[i] = '\0';
	return (len);
}
