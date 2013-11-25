/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:00:04 by aviala            #+#    #+#             */
/*   Updated: 2013/11/23 17:38:10 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;
	size_t			i;

	pb = b;
	i = 0;
	while (i < len)
	{
		pb[i] = (unsigned char)c;
		i++;
	}
	return (pb);
}
