/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 20:37:33 by aviala            #+#    #+#             */
/*   Updated: 2013/12/20 20:55:19 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_list	*ft_strsplit_lst(const char *s, const char c)
{
	t_list	*dest;
	size_t	y;
	size_t	x;
	size_t	pos;
	size_t	i;

	i = 0;
	x = 0;
	while (i)
	{
		while (s[x] == c)
			x++;
		pos = ft_strpos(&s[x], c);
		if (i == 0)
			dest = ft_listnew(ft_strsub(s, x, pos), pos - x);
		else
			dest = ft_lst_push_front(dest, ft_strsub(s, x, pos), pos - x));
		x += pos;
		i++;
	}
	return (dest);
}

}
