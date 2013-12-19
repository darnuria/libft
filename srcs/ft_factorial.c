/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 14:54:18 by aviala            #+#    #+#             */
/*   Updated: 2013/12/19 07:31:48 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

unsigned long	ft_factorial_acc(unsigned long acc, unsigned int n)
{
	if (!n)
		return (acc);
	else
		return (ft_factorial_acc(acc * n, n - 1));
}

unsigned long	ft_factorial(unsigned int n)
{
	return (ft_factorial_acc(1, n));
}

unsigned long	ft_factorial_rec(unsigned int n)
{
	if (!n)
		return (1);
	else
		return (n * ft_factorial_rec(n - 1));
}

unsigned long	ft_factorial_iter(unsigned int n)
{
	unsigned long f;

	f = 1;
	while (n)
	{
		f *= n--;
	}
	return (f);
}
