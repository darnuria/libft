/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:12:40 by aviala            #+#    #+#             */
/*   Updated: 2013/11/26 17:00:51 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_str;

	if (s)
	{
		new_str = ft_strnew(len);
		ft_strncpy(new_str, (char *)&s[start], len);
		return (new_str);
	}
	return (NULL);
}
