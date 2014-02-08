/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:35:51 by aviala            #+#    #+#             */
/*   Updated: 2014/02/08 19:32:23 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ftio.h"

size_t	ft_putendl_fd(char const *s, int fd)
{
	return (ft_putstr_fd(s, fd) + ft_putchar_fd('\n', fd));
}
