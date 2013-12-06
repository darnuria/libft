/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:13:46 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:51:21 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2,
					const size_t n1, const size_t n2)
{
	char	*new_str;

	if ((new_str = ft_strnew(n1 + n2)) != NULL)
	{
		ft_strcpy(new_str, s1);
		ft_strcat(new_str, s2);
	}
	return (new_str);
}
