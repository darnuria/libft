/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:09:13 by aviala            #+#    #+#             */
/*   Updated: 2013/11/28 19:54:04 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*psrc;
	size_t		n;
	size_t		dst_len;

	psrc = src;
	dst_len = ((char *)ft_memchr(dst, '\0', size) - dst);
	n = size - dst_len;
	printf("n: %lu \n", n);
	if (n == 0)
		return (dst_len + ft_strlen(psrc));
	while (*psrc != '\0')
	{
		if (n != 1 || size != 1)
		{
			*dst++ = *psrc;
			n--;
			size--;
		}
		psrc++;
	}
	*dst = '\0';
	return (dst_len + (psrc - src));
}
