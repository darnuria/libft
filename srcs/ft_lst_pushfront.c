/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 06:57:48 by aviala            #+#    #+#             */
/*   Updated: 2014/01/23 21:12:28 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_lst_pushfront(t_list *b_lst, const void *data,
							const size_t data_size)
{
	t_list	*b_head;

	if ((b_head = ft_lstnew(data, data_size)) != NULL)
	{
		b_head->next = b_lst;
	}
	b_lst = b_head;
}

void	*ft_lst_pushfront_new(t_list *b_lst, t_list *lst_new)
{
	if ((b_lst != NULL))
	{
		lst_new->next = b_lst;
	}
	b_lst = lst_new;
}
