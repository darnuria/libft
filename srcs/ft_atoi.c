/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:01:37 by aviala            #+#    #+#             */
/*   Updated: 2014/01/01 22:40:49 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_atoi(const char *s)
{
	int	num;
	int	sign;

	num = 0;
	while (ft_isspace(*s))
	{
		s++;
	}
	sign = (*s == '-') ? -1 : 1;
	s = (*s == '-' || *s == '+') ? s + 1 : s;
	while (ft_isdigit(*s) && ((num *= 10) || !num))
	{
		num += *s - '0';
		s++;
	}
	return (sign * num);
}
