/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 03:57:47 by aviala            #+#    #+#             */
/*   Updated: 2013/12/13 19:08:21 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_std.h"
#include "stdlib.h"

static t_list	*ft_getprev(t_list *head, t_list *a)
{
	t_list	*tmp;
	t_list	*pre_a;

	if (head == a)
		return (NULL);
	tmp = head;
	pre_a = NULL;
	while (tmp && tmp != a)
	{
		pre_a = tmp;
		tmp = tmp->next;
	}
	if (tmp != a)
	{
		ft_putstr("Fail in ft_swaplst(ft_getprev) free memory and exit.\n");
		exit(EXIT_FAILURE);
	}
	return (pre_a);
}

void			ft_swaplst(t_list **head ,t_list **a, t_list **b)
{
	t_list	*pre_a;
	t_list	*pre_b;
	t_list	*tmp;

	tmp = NULL;
	if (*head == NULL || *a == NULL || *b == NULL)
		return ;
	pre_a = ft_getprev(*head, *a);
	pre_b = ft_getprev(*head, *b);

	if (pre_a)
			pre_a->next = *b;
	if (pre_b)
			pre_b->next = *a;
	tmp = (*a)->next;
	(*a)->next = (*b)->next;
	(*b)->next = tmp;
	if ((*head) == (*a))
		*head = *b;
	if ((*head) == (*b))
		*head = *a;
}

void			ft_lstbubblesort(t_list *lst,
								t_bool (*f)(const t_list *, const t_list *))
{
	t_bool	swapped;
	size_t	i;
	size_t	j;
	size_t	len;
	t_list	*cur;

	i = 0;
	j = 0;
	cur = lst;
	len = ft_lstlen(lst);
	while (i < len)
	{
		swapped = FALSE;
		while (j < len - 1)
		{
			if (f(lst, lst->next))
			{
				ft_swaplst(&lst, &cur, &(cur->next));
				swapped = TRUE;
			}
			cur = cur->next;
			j++;
		}
		if(!swapped)
			break ;
		i++;
	}
}
