
#include "math.h"

float		ft_ceilf(float f)
{
	return ((float) ((int) (f + 0.5) / 1));
}

double		ft_ceil(double d)
{
	return ((double) ((int) (d + 0.5) / 1));
}

double long	ft_ceill(double long dl)
{
	return ((double long) ((int) (dl + 0.5) / 1));
}
