/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:18:56 by aviala            #+#    #+#             */
/*   Updated: 2013/11/22 19:39:10 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len_s2;
	size_t	rest_s1;

	len_s2 = ft_strlen(s2);
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	else if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != s2[i] && i < n)
	{
		i++;
		if (s1[i] == s1[0])
		{
			rest_s1 = ft_strlen(&s1[i]);
			if (rest_s1 >= len_s2)
			{
				if (ft_strncmp(&s1[i], s2, len_s2) == 0)
					return ((char *) &s1[i]);
				else
					i++;
			}
			else
				break ;
		}
	}
	return (NULL);
}
