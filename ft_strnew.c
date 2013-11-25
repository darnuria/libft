/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:42:49 by aviala            #+#    #+#             */
/*   Updated: 2013/11/23 21:29:46 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strnew(size_t size)
{
	char *new_str;

	new_str = NULL;
	if (size > 0)
	{
		if ((new_str = (char *) malloc(sizeof(char) * size)) == NULL)
			return (NULL);
		while (size > 0)
		{
			new_str[size] = '\0';
			size--;
		}
		return (new_str);
	}
	else
	{
		return (NULL);
	}
}
