/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:01:37 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:59:47 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		nptr++;
		sign *= -1;
	}
	while (ft_isdigit(*nptr))
	{
		num *= 10;
		num += *nptr - '0';
		nptr++;
	}
	return (sign * num);
}
