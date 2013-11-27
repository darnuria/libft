/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:53:40 by aviala            #+#    #+#             */
/*   Updated: 2013/11/27 10:53:30 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((tmp = ft_memalloc(n)) == NULL)
		return (NULL);
	ft_memcpy(tmp, s2, n);
	ft_memcpy(s1, tmp, n);
	ft_memdel(&tmp);
	return ((void *)s1);
}
