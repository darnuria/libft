/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:37:22 by aviala            #+#    #+#             */
/*   Updated: 2014/02/08 19:35:30 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

#include "ftio.h"
#include "libft.h"

size_t	ft_putstr_fd(char const *s, int fd)
{
	return (write(fd, s, ft_strlen(s)));
}
