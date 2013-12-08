/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:40:15 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 20:54:24 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec_putnbr_fd(int n, int fd)
{

	if (n > 9)
	{
		ft_rec_putnbr_fd(n / 10, fd);
		ft_rec_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if ((long)n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-' , fd);
			n *= -1;
		}
		ft_rec_putnbr_fd(n, fd);
	}
}
