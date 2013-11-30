/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:55:40 by aviala            #+#    #+#             */
/*   Updated: 2013/11/30 07:06:02 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static size_t	ft_gety(const char *s, const char sep)
{
	size_t	y;
	size_t	i;

	y = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == sep && s[i] != '\0')
		{
			i++;
		}
		if (s[i] != sep && s[i] != '\0')
			y++;
		while (s[i] != sep && s[i] != '\0')
		{
			i++;
		}
	}
	return (y);
}

static size_t	ft_strpos(const char *s, const char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char			**ft_strsplit(const char *s, const char c)
{
	char	**dest;
	size_t	y;
	size_t	pos;
	size_t	i;

	i = 0;
	y = ft_gety(s, c) + 1;
	dest = (char **) malloc(sizeof(char **) * y);
	dest[y] = '\0';
	while (i < y)
	{
		while (s[i] == c)
			i++;
		pos = ft_strpos(&s[i], c);
		*dest = ft_strsub(s, i, pos);
		i += pos;
		y++;
	}
	return (dest);
}
