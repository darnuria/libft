/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 06:57:48 by aviala            #+#    #+#             */
/*   Updated: 2013/12/02 07:12:36 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_push_front(const t_list *b_lst,
							const void *data,
							const size_t data_size)
{
	t_list	*b_head;

	b_head = ft_lstnew(data, data_size);
	b_head->next = (t_list *) b_lst;
	return (b_head);
}
