/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 17:19:07 by aviala            #+#    #+#             */
/*   Updated: 2014/02/08 19:43:18 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTIO_H
# define FTIO_H

# include <sys/stat.h>
# include <stddef.h>
# include <stdarg.h>

/*
** Customs Defines.
*/ 
# define E_OPEN_W " Error : Open in write mode incorrect file descriptor."
# define E_OPEN_R " Error : Open in read mode incorrect file descriptor."

/*
** Printing.
*/

/*
** Printing With formating.
*/

size_t	ft_printf(const char *format, ...);

/*
** Printing without formating.
*/

size_t	ft_putchar(char c);
size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putendl(const char *s);
size_t	ft_putendl_fd(char const *s, int fd);
size_t	ft_putnbr(int n);
size_t	ft_putnbr_fd(int n, int fd);
size_t	ft_putstr(char const *s);
size_t	ft_putstr_fd(char const *s, int fd);

/*
** Files
*/

int		ft_open_R(const char *filename, const int flags);
int		ft_open_W(const char *filename, const int flags, const mode_t mode);

#endif /* !FTIO_H */
