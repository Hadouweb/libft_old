/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 00:07:29 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 00:09:25 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (s1 || s2)
	{
		i = ft_strlen(s1) + ft_strlen(s2);
		str = ft_strnew(i);
		if (s1)
			ft_strcpy(str, s1);
		if (s2)
		ft_strcpy((str + ft_strlen(s1)), s2);
		return (str);
	}
	return (NULL);
}
