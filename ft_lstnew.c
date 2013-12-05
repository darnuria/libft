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

#include <string.h>
#include <stdlib.h>


#include "libft.h"

t_list*	ft_lstnew(void const *data, size_t data_size)
{
	t_list	*new_elem;

	if ((new_elem = (t_list *) ft_memalloc(sizeof(t_list))) != NULL)
	{
		if (data == NULL)
			new_elem->data = NULL;
		else
		{
			if ((new_elem->data = ft_memalloc(data_size)) != NULL)
				ft_memcpy(new_elem->data, data, data_size);
			else
				free(new_elem);
		}
		new_elem->data_size = data_size;
		new_elem->next = NULL;
	}
		return (new_elem);
}
