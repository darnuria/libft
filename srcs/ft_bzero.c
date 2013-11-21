
#include <string.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	if (s == 0)
		return (0);
	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
