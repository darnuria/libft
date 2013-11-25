/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:52:51 by aviala            #+#    #+#             */
/*   Updated: 2013/11/23 17:35:32 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char*) s1;
	ps2 = (unsigned char*) s2;
	i = 0;
	while (i < n)
	{
		if(ps1[i] != ps2[i])
		{
			return (ps1[i] - ps2[i]);
		}
		i++;
	}
	return (0);
}
