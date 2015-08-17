/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 16:59:03 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 17:03:02 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	if (s)
	{
		str = (char*)s;
		i = 0;
		while (i < n)
		{
			str[i] = c;
			i++;
		}
	}
	return ((void*)str);
}
