/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 00:46:15 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 00:47:33 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		b;
	int		i;
	int		test[11];
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
	}
	i = 0;
	if (nb == 0)
		ft_putchar_fd('0', fd);
	while (nb != 0)
	{
		b = nb % 10;
		nb = nb / 10;
		test[i++] = b;
	}
	while (i > 0)
	{
		i--;
		ft_putchar_fd(test[i] + 48, fd);
	}
}
