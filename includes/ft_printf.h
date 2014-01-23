/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 10:01:43 by aviala            #+#    #+#             */
/*   Updated: 2014/01/23 15:06:20 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <string.h>
# include <stdarg.h>

size_t	ft_selector(char *p, va_list	*ap);
size_t	ft_printf(const char *format, ...);

#endif
