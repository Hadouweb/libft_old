/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 19:10:29 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 19:11:14 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_move(char *dest, const char *src, size_t n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char *s;
	char *d;

	s = ft_strdup((char*)src);
	d = (char*)dest;
	return ((void*)ft_move(d, s, n));
}
