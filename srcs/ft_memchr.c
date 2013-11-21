
#include <string.h>
#include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *str;

	str = s;
	i = 0;
	while (i < n && str[i] != (unsigned char)c)
	{
		i++;
	}
	return ((i != n) ? (void *)(str + i) : 0);
}
/*
penguin g 4

0 > 4 p != g
1 > 4 e != g
2 > 4 n != g
3 > 4 g == g

Cat z 3

0 > 3 C != z
1 > 3 a != z
2 > 3 t != z
3 == 3
*/
