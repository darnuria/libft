/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 17:00:29 by aviala            #+#    #+#             */
/*   Updated: 2013/12/22 11:46:49 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "types.h"

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
