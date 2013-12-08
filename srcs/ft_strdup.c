/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:54:24 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:53:24 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_s1;

	if (s1 == 0)
		return (0);
	new_s1 = ft_strnew(ft_strlen(s1));
	if (new_s1 != NULL)
	{
		return (ft_strcpy(new_s1, s1));
	}
	else
	{
		return (0);
	}
}
