/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 17:41:19 by aviala            #+#    #+#             */
/*   Updated: 2013/12/06 18:25:28 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ');
}
