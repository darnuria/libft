/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:12:40 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:47:24 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (s != NULL)
	{
		new_str = ft_strnew(len);
		ft_strncpy(new_str, (char *) &s[start], len);
		return (new_str);
	}
	else
	{
		return (NULL);
	}
}
