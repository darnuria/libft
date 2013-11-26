
#include <string.h>
#include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	if (s == 0)
		return (NULL);
	str = s;
	i = 0;
	while (i < n && str[i] != (unsigned char)c)
	{
		i++;
	}
	return ((i != n) ? (void *)(str + i) : 0);
}
