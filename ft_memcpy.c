/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:53:09 by aviala            #+#    #+#             */
/*   Updated: 2013/12/06 19:21:28 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*s;

	dst = (char *) dest;
	s = (char *) src;
	i = 0;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
