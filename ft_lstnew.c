/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:05:55 by aviala            #+#    #+#             */
/*   Updated: 2013/12/02 07:16:12 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list*	ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	if ((new_elem = ft_memalloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
		new_elem->content = NULL;
	else
	{
		if ((new_elem->content = ft_memalloc(content_size)) == NULL)
		{
			free(new_elem);
			return (NULL);
		}
		ft_memcpy(new_elem->content, content, content_size);
	}
	new_elem->content_size = content_size;
	new_elem->next = NULL;
	return (new_elem);
}
