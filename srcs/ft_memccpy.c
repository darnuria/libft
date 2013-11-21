
#include <string.h>
#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char 		*dst;
	const char	*s;

	dst = dest;
	s = src;
	i = 0;
	while (i < n && (int)s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
