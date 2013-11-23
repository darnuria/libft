/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:40:15 by aviala            #+#    #+#             */
/*   Updated: 2013/11/23 21:11:16 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-' , fd);
		n *= -1;
	}
	if (n)
	{
		ft_putnbr(n / 10);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
