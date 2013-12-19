/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 04:01:13 by aviala            #+#    #+#             */
/*   Updated: 2013/12/19 07:47:03 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_matrix.h"
#include <string.h>
#include <stdlib.h>

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

void	ft_matrix_ld_set_all(t_mat_ld *m, const long double c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < m->columns)
	{
		j = 0;
		while (j < m->rows)
		{
			m->mat[i][j] = c;
			j++;
		}
		i++;
	}
}

t_mat_ld	*ft_matrix(long rows, long columns, long double init)
{
	t_mat_ld	*new_mat;

	if ((new_mat = (t_mat_ld *) malloc(sizeof(t_mat_ld))))
	{
		new_mat->rows = rows;
		new_mat->columns = columns;
		if ((new_mat->mat = (long double **) malloc(sizeof(long double *)
													* columns)))
		{
			while (--columns)
			{
				new_mat->mat[columns] = (long double *) malloc(sizeof(long double)
													* rows);
			}
			ft_matrix_ld_set_all(new_mat, init);
		}
	}
	return (new_mat);
}

void	ft_destroy_matrix(t_mat_ld *m)
{
	size_t	i;

	i = 0;
	if (&m != NULL && m != NULL)
	{
		while (i < m->columns)
		{
			free(m->mat[i]);
			m->mat[i] = NULL;
		}
		free(m->mat);
		m->mat = NULL;
		free(m);
		m = NULL;
	}
}
