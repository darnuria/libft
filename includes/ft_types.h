/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_std.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 18:28:37 by aviala            #+#    #+#             */
/*   Updated: 2013/12/16 18:28:43 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_H
# define FT_TYPES_H

/*
** Successful exit status.
*/

# ifndef EXIT_SUCCESS
#  define EXIT_SUCCESS 0
# endif /* !EXIT_SUCCESS */

/*
** Failling exit status
*/

# ifndef EXIT_FAILURE
#  define EXIT_FAILURE 1
# endif /* !EXIT_FAILURE */

# ifndef FALSE
#  define FALSE 0
# endif /* !FALSE */

# ifndef TRUE
#  define TRUE 0
# endif /* !TRUE */

typedef unsigned char	t_bool;
typedef unsigned int	t_uint32;
typedef unsigned char	t_uchar;

#endif /* !FT_TYPES_H */
