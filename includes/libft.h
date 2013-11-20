/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:07:32 by aviala            #+#    #+#             */
/*   Updated: 2013/11/20 19:04:33 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
/* void	*ft_memset(void *b, int c, size_t len); */
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		isprint(int c);
char	*ft_strdup(const char *s1);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *s1, const char *s2);


#endif /* !LIBFT_H */
