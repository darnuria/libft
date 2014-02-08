/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:34:04 by aviala            #+#    #+#             */
/*   Updated: 2014/02/08 19:32:20 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

#include "ftio.h"

size_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
