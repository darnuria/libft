/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 02:21:53 by aviala            #+#    #+#             */
/*   Updated: 2013/12/22 02:27:00 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_countnc(const char *s, const char c, size_t n)
{
	size_t	i;

	i = 0;
	while (*s != '\0' && n)
	{
		if (*s == c)
			i++;
		s++;
		n--;
	}
	return (i);
}
