/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps1dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:15:53 by aviala            #+#    #+#             */
/*   Updated: 2013/11/20 19:08:24 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ps1ing.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *ps1;

	if (s1 == 0)
		return (0);
	ps1 = 0;
	ps1 = (char *) malloc(sizeof (char) * ft_ps1len(s1));
	if (ps1 != 0)
	{
		return (ft_strcpy(ps1, s1));
	}
	else
	{
		return (0);
	}
}
