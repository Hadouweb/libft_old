/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 14:28:51 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 14:31:54 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list **list;

	if (alst)
	{
		list = alst;
		while (*list)
		{
			tmp = (*list)->next;
			del((*list)->content, (*list)->content_size);
			free(*list);
			*list = tmp;
		}
		alst = NULL;
	}
}
