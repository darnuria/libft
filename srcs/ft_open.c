/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 15:42:57 by aviala            #+#    #+#             */
/*   Updated: 2013/12/21 16:55:00 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

int	ft_open(const char *filename)
{
	int	fd;

	if ((fd = open(filename, O_RDONLY)) > 0)
		return (fd);
	ft_putstr("Open Error : abort incorrect file descriptor.\n");
	return (-1);
}
