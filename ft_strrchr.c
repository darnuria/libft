/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:05:03 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:48:11 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	to_find;

	if (s == 0)
		return (NULL);
	to_find = (char) c;
	i = (int) ft_strlen(s);
	while (s[i] != to_find && i > 0)
	{
		i--;
	}
	return ((s[i] == to_find) ? (char *) &s[i] : NULL);
}
