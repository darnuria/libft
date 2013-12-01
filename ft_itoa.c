/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 23:16:37 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 23:16:38 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static	void ft_minmax(char *s, const int n)
{
	if ((long) n == -2147483648)
		ft_strcpy(s, "-2147483648");
	else if ((long) n == 2147483647)
		ft_strcpy(s, "2147483647");
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

char		*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = 0;
	if ((s = ft_strnew(12)) == NULL)
		return (NULL);
	ft_minmax(s, n);
	if (s[0] != '\0')
		return (s);
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
		i++;
	}
	while (n)
	{
		s[i] = (char) n % 10 + 48;
		n /= 10;
		i++;
	}
	ft_rev_or_not(s);
	return (s);
}
