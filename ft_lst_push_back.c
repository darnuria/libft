/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 06:58:36 by aviala            #+#    #+#             */
/*   Updated: 2013/12/02 07:12:01 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_push_back(const t_list *lst,
							const void *data,
							const size_t data_size)
{
	t_list	*p_tmp;

	while ((p_tmp = lst->next) != NULL);
	return (ft_lstnew(data, data_size));
}
