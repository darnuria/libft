/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 16:24:18 by aviala            #+#    #+#             */
/*   Updated: 2013/12/21 15:25:04 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_MATH_H
# define FT_MATH_H

/*
** Pi from http://www.piday.org/million/
*/

# ifndef PI
#  define PI 3.141592653589793238462643383279
# endif /* !PI */

# ifndef K_DEGREE
#  define K_DEGREE 8
# endif /* !K_DEGREE */

# define MAX(a, b) (((a) > (b)) ? (a) : (b))
# define MIN(a, b) (((a) < (b)) ? (a) : (b))

/*
** Undefined behaviour above n > 21.
*/
unsigned long	ft_factorial_acc(unsigned long acc, unsigned int n);
unsigned long	ft_factorial_rec(unsigned int n);
unsigned long	ft_factorial_iter(unsigned int n);
unsigned long	ft_factorial(unsigned int n);

long double		ft_cos(long double x);
long double		ft_sin(long double x);
long double		ft_sqrt(unsigned long n);
long double		ft_pow(long double x, long int n);
unsigned long	ft_abs(long int x);

float			ft_ceilf(float f);
double			ft_ceil(double d);
double long		ft_ceill(double long dl);

float			ft_floorf(float f);
double			ft_floor(double d);
double long		ft_floorl(double long dl);


#endif /* !MATH_H */
