/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 08:45:58 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/31 16:23:41 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr(unsigned int n)
{
	unsigned int		b;
	unsigned int		i;
	unsigned int		test[11];
	unsigned long	nb;

	nb = (unsigned long)n;
	i = 0;
	if (nb == 0)
		ft_putchar('0');
	while (nb != 0)
	{
		b = nb % 10;
		nb = nb / 10;
		test[i++] = b;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(test[i] + 48);
	}
}
