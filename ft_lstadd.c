/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 23:22:47 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 23:27:12 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *p_new)
{
	t_list	*begin_prev;

	begin_prev = p_new;
	begin_prev->next = *alst;
	*alst = begin_prev;
}
