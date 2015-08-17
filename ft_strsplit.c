/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 00:22:01 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/24 00:23:24 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*scpy(char *dest, const char *src, char c)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (src[i] == c)
		i++;
	while (src[i] != '\0')
	{
		dest[y] = src[i];
		y++;
		i++;
	}
	y--;
	while (dest[y] == c)
	{
		dest[y] = '\0';
		y--;
	}
	return (dest);
}

static char	*trim(char const *s, char c)
{
	char	*str;
	int		i;

	i = ft_strlen(s);
	if (!(str = ft_strnew(i)))
		return (NULL);
	str = scpy(str, s, c);
	return (str);
}

static int	get_info(char const *s, char c, int *len)
{
	int i;
	int nb_w;
	int l;

	l = 0;
	i = 0;
	*len = 0;
	nb_w = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c)
				nb_w++;
			if (l > *len)
				*len = l;
			l = 0;
		}
		i++, l++;
	}
	if (l > *len)
		*len = l - 1;
	if (s[i - 1] != c)
		nb_w++;
	return (nb_w);
}

void		cpy(char *dest, const char *s, int n, char c)
{
	int i;
	int y;
	int z;

	i = 0;
	y = 0;
	z = 0;
	while (y < n)
	{
		if (s[i] == c)
			y++;
		while (s[i] == c)
			i++;
		i++;
	}
	if (y != 0)
		i--;
	while (s[i] != c && s[i] != '\0')
	{
		dest[z] = s[i];
		z++, i++;
	}
	dest[z] = '\0';
}

char		**ft_strsplit(char const *s, char c)
{
	int		len;
	int		nb_w;
	char	**tab;
	int		i;

	if (!s || !(s = trim(s, c)))
		return (NULL);
	nb_w = get_info(s, c, &len);
	if (!(tab = (char**)malloc(sizeof(char**) * nb_w)))
		return (NULL);
	if (len == 0)
	{
		tab[0] = 0;
		return (tab);
	}
	i = 0;
	while (i < nb_w - 1)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char*) * (len + 1))))
			return (NULL);
		cpy(tab[i], s, i, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
