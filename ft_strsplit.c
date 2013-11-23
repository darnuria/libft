/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:55:40 by aviala            #+#    #+#             */
/*   Updated: 2013/11/22 13:55:45 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static char *ft_strndup(const char *s1, size_t n)
{
	char *ps1;

	if (s1 == 0)
		return (0);
	ps1 = 0;
	ps1 = (char *) malloc(sizeof (char) * ft_strlen(s1));
	if (ps1 != 0)
	{
		return (ft_strncpy(ps1, s1, n));
	}
	else
	{
		return (0);
	}
}

static int ft_aux_nb_split(char const *s, char c)
{
	size_t	i;
	size_t	y;
	size_t	len;

	i = 0;
	y = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] != c && s[i])
		{
			i++;
		}
		y++;
		while (s[i] == c && s[i])
		{
			i++;
		}
	}
	return (y);
}

char **ft_strsplit(char const *s, char c)
{
	char	**dest;
	size_t	y;
	size_t	 pos;

	if (s == 0)
		return (0);
	y = 0;
	pos = 0
	y = ft_aux_nb_split(s, c);
	dest = (char**) malloc(sizeof(char*) * dim.y + 1);
	if (!dest)
		return (0);
	while (y_max < )
	{
		dest[y] = ft_strndup(s + pos, dim.x);
		y++;
		pos
	}
	dest[y] = '\0';
	map -> map = dest;
	return (map);
}
