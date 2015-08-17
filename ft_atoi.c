/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 17:08:51 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 17:14:39 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long int	ret;
	int			sign;

	i = 0;
	sign = 1;
	ret = 0;
	while (nptr[i] == 32 || nptr[i] == '\f' || nptr[i] == '\n' ||\
			nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '\0' || ft_isprint(nptr[i] == 0))
		return (0);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign = -1;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		ret += (int)(nptr[i++] - 48);
		ret *= 10;
	}
	if ((ret * sign / 10) > 2147483647 || (ret * sign / 10) < -2147483648)
		return (0);
	return ((int)(ret * sign / 10));
}
