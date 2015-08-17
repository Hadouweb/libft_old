/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 18:25:29 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 18:27:32 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t y;

	i = ft_strlen(dest);
	y = 0;
	while (y < n && src[y] != 0)
	{
		dest[i] = src[y];
		i++, y++;
	}
	dest[i] = '\0';
	return (dest);
}
