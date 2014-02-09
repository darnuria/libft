/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:17:43 by aviala            #+#    #+#             */
/*   Updated: 2014/02/09 20:18:40 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ftio.h"

static
size_t	ft_selector(char *p, va_list *ap)
{
	if (*p == 'd')
	{
		return (ft_putnbr(va_arg(*ap, int)));
	}
	else if (*p == 'l')
	{
		return (ft_putstr("not working :)\n"));
	}
	else if (*p == 's')
	{
		return (ft_putstr(va_arg(*ap, char*)));
	}
	else if (*p == 'c')
	{
		return (ft_putchar(*p));
	}
	else
	{
		return (1);
	}
}

size_t	ft_printf(const char *format, ...)
{
	va_list	ap;
	char	*p;
	size_t	i;

	i = 0;
	va_start(ap, format);
	p = (char*) format;
	while (*p != '\0')
	{
		if (*p != '%')
		{
			i += ft_putchar(*p);
			p++;
			continue ;
		}
		i += ft_selector(++p, &ap);
		p++;
	}
	va_end(ap);
	return (i);
}
