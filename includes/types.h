/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 18:28:37 by aviala            #+#    #+#             */
/*   Updated: 2013/12/20 16:30:09 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_TYPES_H
#  define FT_TYPES_H

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

/*
** 7.18.1.1 Exact-width integer types
*/

# ifndef T_INT8
#  define T_INT8
typedef signed char			t_int8;
# endif /* !T_INT8 */

# ifndef T_INT16
#  define T_INT16
typedef short				t_int16;
# endif /* !T_INT16 */

# ifndef T_INT32
#  define T_INT32
typedef int					t_int32;
# endif /* !T_INT32 */

/*
** # ifndef T_INT64
** #  define T_INT64
** typedef long long			t_int64;
** # endif
*/

# ifndef T_UINT8
#  define T_UINT8
typedef unsigned char		t_uint8;
# endif /* !T_UINT8 */

# ifndef T_UINT16
#  define T_UINT16
typedef unsigned short		t_uint16;
# endif /* !T_UINT16 */

# ifndef  T_UINT32
#  define  T_UINT32
typedef unsigned int		t_uint32_;
# endif /* !T_UINT32 */

/*
** # ifndef T_INT64
** #  define T_INT64
** typedef unsigned long long	t_int64;
** # endif
*/

typedef unsigned char		t_bool;
typedef unsigned int		t_uint32;
typedef unsigned char		t_uchar;
typedef	long int			t_lint;

#endif /* !FT_TYPES_H */
