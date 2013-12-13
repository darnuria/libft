/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 03:57:47 by aviala            #+#    #+#             */
/*   Updated: 2013/12/13 05:05:57 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_std.h"

void	ft_swaplst(t_list *a, t_list *b)
{
	t_list	*tmp;

	tmp = a;
	a->next = b->next;
	a->data = b->data;
	a->data_size = b->data_size;

	b->next = tmp->next;
	b->data = tmp->data;
	b->data_size = tmp->data_size;
}

void	ft_lstbubblesort(t_list *lst, int (*f)(const t_list *, const t_list *))
{
	t_bool	swapped;
	size_t	i;
	size_t	j;
	size_t	len;
	i = 0;
	j = 0;

	len = ft_lstlen(lst);
	while (i < len)
	{
		swapped = FALSE;
		while (j < len - 1)
		{
			if (f(lst, lst->next))
			{
				ft_swaplst(lst, lst->next);
				swapped = TRUE;
			}
			j++;
		}
		if(!swapped)
			break ;
		i++;
	}
}
