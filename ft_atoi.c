/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:01:37 by aviala            #+#    #+#             */
/*   Updated: 2013/11/23 17:36:59 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			temp;
	int			number;
	int			mult;
	int			sign;

	mult = 1;
	number = 0;
	i = (int)ft_strlen(nptr) - 1;
	while (nptr[i] == ' ' || nptr[i] == '\v' || nptr[i] == '\t' ||
		   nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[0] == '+' || ft_isdigit(nptr[0]))
	{
		sign = 1;
		i++;
	}
	while (i >= 0)
	{
		temp = nptr[i] - 48;
		if (temp < 0 || temp > 9)
			return (-1);
		i--;
		number += temp * mult;
		mult *= 10;
	}
	return (sign * number);
}
