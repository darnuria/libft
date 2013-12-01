/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:14:49 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:45:39 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int ft_istrailling(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

#include <stdio.h>
char		*ft_strtrim(char const *s)
{
	char	*str_new;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (ft_istrailling(s[i]))
	{
		i++;
	}
	j = ft_strlen(s);
	while (ft_istrailling(s[j - 1]))
	{
		j--;
	}
	if (j != 0)
		j -= i;
	if ((str_new = ft_strsub(s, i, j)) == NULL)
		return (NULL);
	else
		return (str_new);
}
