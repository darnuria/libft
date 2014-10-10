#include "ft_math.h"

unsigned long	ft_factorial_acc(unsigned long acc, unsigned int n) {
	if (!n) {
		return (acc);
	} else {
		return (ft_factorial_acc(acc * n, n - 1));
	}
}

unsigned long	ft_factorial(unsigned int n) {
	return (ft_factorial_acc(1, n));
}

unsigned long	ft_factorial_rec(unsigned int n) {
	if (!n) {
		return (1);
	} else {
		return (n * ft_factorial_rec(n - 1));
  }
}

unsigned long	ft_factorial_iter(unsigned int n)
{
	unsigned long f;
	for (f = 1; n; n--) {
		f *= n;
	}
	return (f);
}
float		ft_floorf(float f) {
	return ((float) ((int) (f - 0.5) / 1));
}

double		ft_floor(double d) {
	return ((double) ((int) (d - 0.5) / 1));
}

double long	ft_floorl(double long dl) {
	return ((double long) ((int) (dl - 0.5) / 1));
}

long double	ft_pow(long double x, long int n) {
	if (n == 0) {
		return (1);
  }
  
	long double temp = ft_pow(x, n / 2);
	
	if (n % 2 == 0) {
		return (temp * temp);
  } else {
		if (n > 0) {
			return (x * temp * temp);
		} else {
			return (temp * temp / x);
		}
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 17:00:29 by aviala            #+#    #+#             */
/*   Updated: 2014/01/01 22:49:03 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

long double	ft_sqrt(unsigned long n)
{
	const long double	a = (long double) n;
	long double			x = 1;
	unsigned int		i;

	i = 1;
	x = 1;
	while (i < n)
	{
		x = 0.5 * ( x + a / x );
		i++;
	}
	return (x);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 18:25:39 by aviala            #+#    #+#             */
/*   Updated: 2013/12/18 22:57:36 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** unsigned long	ft_abs(long int x)
** @param	x	:
** @return	y	:
** Return Absolute value of x.
** exemple :
*/

unsigned long	ft_abs(long int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 14:53:54 by aviala            #+#    #+#             */
/*   Updated: 2013/12/21 14:57:21 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

float		ft_ceilf(float f)
{
	return ((float) ((int) (f + 0.5) / 1));
}

double		ft_ceil(double d)
{
	return ((double) ((int) (d + 0.5) / 1));
}

double long	ft_ceill(double long dl)
{
	return ((double long) ((int) (dl + 0.5) / 1));
}
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
