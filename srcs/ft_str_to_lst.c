/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 20:04:27 by aviala            #+#    #+#             */
/*   Updated: 2014/01/23 21:03:18 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_to_lst(t_list **alst, const char *s, ft_is f)
{
	t_list	*new_list;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && f(s[i]))
		{
			i++;
		}
		new_list = ft_lstnew(s, i - j);
		if (!*alst)
		{
			*alst = new_list;
		}	
		else
		{
			ft_lst_pushback_new(*alst, new_list); 
		}
		while (f(s[i]))
		{
			i++;
		}
		j = i;
	}
}

