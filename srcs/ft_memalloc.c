/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:40:40 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:57:55 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_ptr;

	if (size)
	{
		new_ptr = malloc(size);
		if (new_ptr == NULL)
			return (NULL);
		else
		{
			ft_bzero(new_ptr, size);
			return (new_ptr);
		}
	}
	else
		return (NULL);
}
