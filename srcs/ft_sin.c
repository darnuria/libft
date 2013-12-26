/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 17:15:22 by aviala            #+#    #+#             */
/*   Updated: 2013/12/19 03:17:19 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** long double ft_sin(long double x)
** @param	x	:
** @return	y	:
** derivated E[-1:1]
** Limited devellopement near 0.
** for k = 0.
** Sum [(-1)^k * x / x^(2k + 1)!)]
** On [0, infinite]
** infinite : max long double.
*/

static long double	ft_taylors_sin(long double x)
{
	unsigned long	n;
	unsigned long	acc;
	long double		sum;

	n = 0;
	sum = 0;
	acc = 1;
	while (ft_abs(n) < K_DEGREE + 1)
	{
		acc = ft_factorial_acc(acc, 2 * n + 1);
		sum += (ft_pow(-1, n) * ft_pow(x, 2 * n + 1));
		n++;
	}
	return (sum);
}

long double			ft_sin(long double x)
{
	int			sign;

	sign = 1;
	if (x < 0)
	{
		x *= -1;
		sign = -1;
	}
	if (x == 0)
		return (0);
	else if (x == PI / 2)
		return (1);
	else if (x > PI / 2)
		x = PI - x;
	return (sign * ft_taylor_sin(x));
}
