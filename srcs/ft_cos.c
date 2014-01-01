/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 16:28:44 by aviala            #+#    #+#             */
/*   Updated: 2013/12/18 18:17:45 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** long double	ft_cos(long double x)
** @param	x	:
** @return	y	:
** derivated E[-1:1]
** Limited devellopement near 0.
** Sum [ (-1)^n * x^(2n) / (2n)! ]
** on [0, infinite]
** infinite : max long double
*/

static long double	ft_taylor_cos(long double x)
{
	unsigned long	n;
	unsigned long	acc;
	long double		sum;

	n = 0;
	sum = 0;
	acc = 1;
	while (ft_abs(n) < K_DEGREE + 1)
	{
		acc = ft_factorial_acc(acc, 2 * n);
		sum += (ft_pow(-1, n) * ft_pow(x, 2 * n) / acc);
		n++;
	}
	return (sum);
}

long double			ft_cos(long double angle)
{
	int			sign;

	sign = 1;
	if (angle < 0)
		angle *= -1;
	if (angle == 0)
		return (1);
	else if (angle == PI / 2)
		return (0);
	else if (angle > PI / 2)
	{
		angle = PI - angle;
		sign = -1;
	}
	return (sign * ft_taylor_cos(angle));
}
