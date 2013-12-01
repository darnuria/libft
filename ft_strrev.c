/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 19:18:35 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:48:00 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	len_s;
	size_t	i;
	size_t	stop;

	i = 0;
	len_s = ft_strlen(s);
	if (len_s > 1)
	{
		stop = ((len_s % 2) ? (len_s / 2 + 1) : (len_s / 2));
		len_s -= 1;
		while (i < stop && s[i] != '\0')
		{
			ft_swapchar(&s[i], &s[len_s - i]);
			i++;
		}
	}
	return (s);
}
