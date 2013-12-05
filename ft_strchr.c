/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:15:00 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:54:00 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (s == 0)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char) c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	return (NULL);
}
