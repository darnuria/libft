/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darnuria <darnuria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 04:01:13 by aviala            #+#    #+#             */
/*   Updated: 2013/12/19 22:21:56 by darnuria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_matrix.h"
#include <string.h>
#include <stdlib.h>



void	ft_matrix_ld_set_identity(t_mat_ld *m)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < m->columns && j < m->rows)
	{
		m->mat[i][j] = 1;
		j++;
		i++;
	}
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
