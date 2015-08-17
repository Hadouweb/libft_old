/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 13:39:55 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 13:48:02 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (content == NULL)
	{
		list->content_size = 0;
		list->content = NULL;
		list->next = NULL;
		return (list);
	}
	list->content = (void*)malloc(sizeof(void*) * content_size);
	if (!list->content)
		return (NULL);
	list->content = (void*)(ft_strcpy((char*)(list->content), (char*)content));
	ft_memcpy((void*)&(list->content_size), (const void*)&(content_size), 8);
	list->next = NULL;
	return (list);
}
