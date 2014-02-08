/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:40:15 by aviala            #+#    #+#             */
/*   Updated: 2014/02/08 19:32:25 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"
#include "ftio.h"

size_t		ft_putnbr_fd(int n, int fd)
{
	char	*s;
	size_t	i;

	s = ft_itoa(n);
	i = ft_putstr_fd(s, fd);
	ft_strdel(&s);
	return (i);
}
