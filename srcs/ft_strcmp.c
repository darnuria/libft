/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:55:26 by aviala            #+#    #+#             */
/*   Updated: 2013/11/22 13:55:29 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	
	if (s1 == 0 || s2 == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
