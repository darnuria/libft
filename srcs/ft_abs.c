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
