/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 14:53:26 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 14:54:31 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if (lst)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		new = f(new);
		new->next = ft_lstmap(lst->next, f);
		return (new);
	}
	return (NULL);
}
