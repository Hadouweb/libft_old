/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 00:31:20 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 00:35:35 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		b;
	int		i;
	int		test[11];
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
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
