/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortinttab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 19:02:06 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 19:22:34 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_sortinttab(int *tab, int size)
{
	int i;
	int y;

	i = 0;
	while (i < size)
	{
		y = 0;
		while (y < size - 1)
		{
			if (tab[y] > tab[y + 1])
				ft_swap(&tab[y], &tab[y + 1]);
			y++;
		}
		i++;
	}
	return (tab);
}
