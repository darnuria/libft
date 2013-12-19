/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 04:01:25 by aviala            #+#    #+#             */
/*   Updated: 2013/12/19 07:51:29 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H

# include <string.h>

typedef struct	s_mat_ld
{
	size_t		rows;
	size_t		columns;
	long double	**mat;
}				t_mat_ld;


t_mat_ld	*ft_matrix(long rows, long columns, long double init);
void		ft_destroy_matrix(t_mat_ld *m);

t_mat_ld	*ft_matrix_ld_transpose(t_mat_ld *m);
t_mat_ld	*ft_matrix_ld_add(const t_mat_ld *m1, const t_mat_ld *m2);
t_mat_ld	*ft_matrix_ld_mul(const t_mat_ld *m1, const t_mat_ld *m2);
void		ft_matrix_ld_set_identity(t_mat_ld *m);
void		ft_matrix_ld_set_zero(t_mat_ld *m);
void		ft_matrix_ld_set_all(t_mat_ld *m, const long double c);
int			ft_matrix_ld_memcpy(t_mat_ld *dest, const t_mat_ld *src);

#endif /* !FT_MATRIX_H */

