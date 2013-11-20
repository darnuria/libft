/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:07:32 by aviala            #+#    #+#             */
/*   Updated: 2013/11/20 15:32:40 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		isprint(int c);

#endif /* !LIBFT_H */
