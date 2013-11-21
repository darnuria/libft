#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const unsigned 	*ps1, 
					*ps2;
	
	if (s1 == 0 || s2 == 0)
		return (0);
	ps1 = s1;
	ps2 = s2;
	i = 0;
	while (i < n)
	{
		if(ps1[i] != ps2[i])
		{
			return (ps1[i] - ps2[i]);
		}
		i++;
	}
	return (0);
}

