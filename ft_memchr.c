/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 20:56:19 by aviala            #+#    #+#             */
/*   Updated: 2013/12/06 19:21:57 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	if (s == 0)
		return (NULL);
	str = (unsigned char *) s;
	i = 0;
	while (i < n && str[i] != (unsigned char) c)
	{
		i++;
	}
	return ((i != n) ? (void *) (str + i) : 0);
}
