
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;
	size_t				i;


		pdst = dest;
		psrc = src;
		i = 0;
	if (dest != src && !(n == 0 || dest == src))
	{
		if (psrc < pdst)
		{
/* backward s0 <- sn*/
			while (i++ < n)
				pdst[n - i - 1] = psrc[n - i - 1];
		}
		else
		{
/* Farward s0 -> sn*/
			while (i++ < n)
			{
				pdst[i] = psrc[i];
			}
		}
	}
	return ((void *)pdst);
}
