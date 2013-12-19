/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 17:34:06 by aviala            #+#    #+#             */
/*   Updated: 2013/12/19 03:11:39 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

long double	ft_pow(long double x, long int n)
{
	long double	temp;

	if (n == 0)
		return (1);
	temp = ft_pow(x, n / 2);
	if (n % 2 == 0)
		return (temp * temp);
	else
	{
		if (n > 0)
			return (x * temp *temp);
		else
			return (temp * temp / x);
	}
}
