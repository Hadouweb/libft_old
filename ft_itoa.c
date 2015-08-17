/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 00:23:50 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 00:25:13 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*is_zero(char *s)
{
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

static long int	is_negative(char *s, int *y, long int n)
{
	if (n < 0)
	{
		s[0] = '-';
		*y = 1;
		return (n * -1);
	}
	return (n);
}

char			*ft_itoa(int n)
{
	long int	nb;
	int			i;
	int			y;
	char		tab[12];
	char		*result;

	nb = (long int)n;
	result = (char*)malloc(sizeof(char*) * 12);
	y = 0;
	nb = is_negative(result, &y, nb);
	if (n == 0)
		return (is_zero(result));
	else
	{
		i = 0;
		while (nb != 0)
		{
			tab[i++] = nb % 10 + '0';
			nb = nb / 10;
		}
		while (i-- > 0)
			result[y++] = tab[i];
	}
	result[y] = '\0';
	return (result);
}
