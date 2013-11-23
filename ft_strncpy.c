/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:03:14 by aviala            #+#    #+#             */
/*   Updated: 2013/11/22 13:56:00 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char    *ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t			len;
	unsigned int	i;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 != 0)
	{
		i = 0;
		len = ft_strlen(s2);
		while (s2[i])
		{
			s1[i] = s2[i];
			i++;
		}
		while (i < len)
		{
			s1[i] = '\0';
			i++;
		}
		if (len < n)
		{
			return (&s1[sizeof(s1)]);
		}
		return (s1);
	}
	else
	{
		return (0);
	}
}
