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
