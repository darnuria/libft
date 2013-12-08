/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:13:46 by aviala            #+#    #+#             */
/*   Updated: 2013/12/08 19:33:28 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if ((new_str = ft_strnew(len_s1 + len_s2)) != NULL)
	{
		if ((len_s1 + len_s2) != 0)
		{
			ft_strcpy(new_str, s1);
			ft_strcat(new_str, s2);
		}
	}
	return (new_str);
}
