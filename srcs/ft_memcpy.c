#include <string.h>
#include "libft.h"

void  *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*s;

	dst = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		dst[i] = s[i];
	}
	return (dst);
}
