/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:55:26 by aviala            #+#    #+#             */
/*   Updated: 2013/11/22 16:51:42 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s1);
	return ((ls1 < ls2) ? ft_strncmp(s1, s2, ls1) : ft_strncmp(s1, s2, ls2));
}
