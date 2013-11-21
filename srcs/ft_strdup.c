/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:15:53 by aviala            #+#    #+#             */
/*   Updated: 2013/11/20 19:08:24 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
	char			*str;

	str = 0;
	str = (char *) malloc(sizeof (char) * ft_strlen(s1));
	if (str != 0)
	{
		return (ft_strcpy(str, s1));
	}
	else
	{
		return (0);
	}

}
