/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:52:40 by aviala            #+#    #+#             */
/*   Updated: 2013/11/25 15:10:11 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char 		*dst;
	const char	*s;

	if (dest == 0 || src == 0)
		return (0);
	dst = dest;
	s = src;
	i = 0;
	while (i < n && (unsigned char)s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
