/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 06:58:36 by aviala            #+#    #+#             */
/*   Updated: 2014/01/23 20:57:35 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_pushback(t_list *lst, const void *data, 
							const size_t data_size)
{
	t_list	*p_tmp;

	while ((p_tmp = lst->next) != NULL)
		;
	p_tmp->next = ft_lstnew(data, data_size);
}

void	*ft_lst_pushback_new(t_list *lst, t_list *new)
{
	t_list	*p_tmp;
	
	while ((p_tmp = lst->next) != NULL)
		;
	p_tmp->next = new;
}

