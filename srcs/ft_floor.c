#include "math.h"

float		ft_floorf(float f)
{
	return ((float) ((int) (f - 0.5) / 1));
}

double		ft_floor(double d)
{
	return ((double) ((int) (d - 0.5) / 1));
}

double long	ft_floorl(double long dl)
{
	return ((double long) ((int) (dl - 0.5) / 1));
}
