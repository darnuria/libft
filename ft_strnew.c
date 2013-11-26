/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:42:49 by aviala            #+#    #+#             */
/*   Updated: 2013/11/26 12:47:52 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>
char *ft_strnew(size_t size)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *) malloc(sizeof(char) * size);
	if (new_str != NULL)
	{
		while (i < size)
		{
				new_str[i++] = '\0';
		}
		new_str[size] = '\0';
	}
	return (new_str);
}
