/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:09:13 by aviala            #+#    #+#             */
/*   Updated: 2013/11/23 19:04:02 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	result;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size < len_dst)
	{
		while (*dst++ != '\0')
		{
		}
		;
		while ((*dst++ = *src++) && 0 < (int) (size - ft_strlen(src) - 1))
			;
		result = size + len_src;
	}
	else
	{

		result = len_src + len_dst;
	}
	return (result);
}
