/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 15:42:57 by aviala            #+#    #+#             */
/*   Updated: 2013/12/31 12:05:50 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/stat.h>
#include "libft.h"

int	ft_open_R(const char *filename, const int flags)
{
	int	fd;

	if ((fd = open(filename, flags)) > 0)
		return (fd);
	ft_putstr_fd(filename, 2);
	ft_putendl_fd(E_OPEN_R, 2);
	return (-1);
}

int	ft_open_W(const char *filename, const int flags, const mode_t mode)
{
	int	fd;

	if ((fd = open(filename, flags, mode)) > 0)
		return (fd);
	ft_putstr_fd(filename, 2);
	ft_putendl_fd(E_OPEN_W, 2);
	return (-1);
}
