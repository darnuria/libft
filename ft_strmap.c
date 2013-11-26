/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:23:45 by aviala            #+#    #+#             */
/*   Updated: 2013/11/26 12:09:59 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*str_new;
	size_t	i;

	i = 0;
	str_new = ft_strnew(ft_strlen(s));
	while (s[i] != '\0')
	{
		str_new[i] = f(s[i]);
		i++;
	}
	return (str_new);
}
