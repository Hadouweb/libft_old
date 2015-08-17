/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 17:45:18 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 17:47:51 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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