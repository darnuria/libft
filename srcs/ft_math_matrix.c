/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darnuria <darnuria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 07:16:31 by aviala            #+#    #+#             */
/*   Updated: 2013/12/19 22:21:17 by darnuria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "ft_math.h"
#include "ft_matrix.h"
#include "libft.h"

t_mat_ld	*ft_matrix_ld_mul(const t_mat_ld *m1, const t_mat_ld *m2)
{
	size_t	i;
	size_t	j;
	size_t	l;
	t_mat_ld	*m3;

	m3 = NULL;
	if (m1->rows != m2->columns)
		ft_putstr("Error. Incompatible dimensions.");
	else
	{
		m3 = ft_matrix(m2->rows, m2->columns, 0);
		i = 0;
		while (i < m1->rows)
		{
			j = 0;
			while (j < m2->columns)
			{
				l = 0;
				while (l < m1->columns)
				{
					m3->mat[i][j] = m1->mat[i][j] + m1->mat[i][l]
									* m2->mat[l][j];
					l++;
				}
				j++;
			}
			i++;
		}
	}
	return (m3);
}

t_mat_ld	*ft_matrix_ld_add(const t_mat_ld *m1, const t_mat_ld *m2)
{
	size_t	i;
	size_t	j;
	t_mat_ld	*new_m;

	new_m = NULL;
	if (m1->rows != m2->rows || m1->columns != m2->columns)
		ft_putstr("Error. Incompatible dimensions.");
	else
	{
		new_m = ft_matrix(m2->rows, m2->columns, 0);
		i = 0;
		while (i < new_m->columns)
		{
			j = 0;
			while (j < new_m->rows)
			{
				new_m->mat[i][j] = m1->mat[i][j] + m2->mat[i][j];
				j++;
			}
			i++;
		}
	}
	return (new_m);
}

t_mat_ld	*ft_matrix_ld_transpose(t_mat_ld *m)
{
	size_t		i;
	size_t		j;
	t_mat_ld	*new_m;

	new_m = ft_matrix(m->columns, m->rows, 0);
	i = 0;
	j = 0;
	while (i < m->columns)
	{
		j = 0;
		while (j < m->rows)
		{
			i = 0;
			new_m->mat[j][i] = m->mat[i][j];
			i++;
		}
		j++;
	}
	return (new_m);
}
