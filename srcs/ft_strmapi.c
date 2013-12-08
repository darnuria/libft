/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:25:13 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:50:05 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_new;
	size_t	i;

	i = 0;
	str_new = ft_strnew(ft_strlen(s));
	while (s[i] != '\0')
	{
		str_new[i] = f(i, s[i]);
		i++;
	}
	return (str_new);
}
