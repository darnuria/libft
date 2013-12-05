/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 23:16:37 by aviala            #+#    #+#             */
/*   Updated: 2013/12/05 12:14:34 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_minmax(char *s, const int n)
{
	if ((long) n == -2147483648)
		ft_strcpy(s, "-2147483648");
	else if (n == 0)
		s[0] = '0';
}

static void	ft_rev_or_not(char *s)
{
	if (s[0] == '-')
		ft_strrev(&s[1]);
	else
		ft_strrev(s);
}

static char	*ft_rec_itoa(const int n, char *s, const int i)
{
	if (n)
	{
		s[i] = n % 10 + 48;
		ft_rec_itoa(n / 10, s, i + 1);
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;

	if ((s = ft_strnew(12)) == NULL)
		return (NULL);
	ft_minmax(s, n);
	i = 0;
	if (s[i] != '\0')
		return (s);
	if (n < 0)
	{
		s[i] = '-';
		n *= -1;
		i++;
	}
	s = ft_rec_itoa(n, s, i);
	ft_rev_or_not(s);
	return (s);
}
