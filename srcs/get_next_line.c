/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/05 12:22:24 by aviala            #+#    #+#             */
/*   Updated: 2013/12/09 20:21:22 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include "libft.h"
#include "get_next_line.h"

static int	ft_end(ssize_t c_read, char **tmp, char **rem)
{
	if (c_read == 0)
	{
		*rem = NULL;
		return (0);
	}
	else if (c_read == -1)
		return (0);
	else
	{
		*rem = *tmp;
		return (1);
	}
}

static void	ft_work(char **line, char **tmp, char **rem , size_t len_to_endl)
{
	ft_strdel(line);
	*line = ft_strsub(*rem, 0, len_to_endl);
	*tmp = ft_strsub(*rem, len_to_endl + 1, ft_strlen(*rem) - len_to_endl);
}

static int	ft_endl(char **line, char *buff, ssize_t c_read)
{
	if (c_read < BUFF_SIZE)
	{
		*line = ft_strdup(buff);
		ft_strdel(&buff);
		return (0);
	}
	else if (c_read == -1)
	{
		ft_strdel(&buff);
		return (-1);
	}
	else
	{
		ft_strdel(&buff);
		return (0);
	}
}

static int	ft_init(char **rem, char **buff, const int fd, ssize_t *c_read)
{
	*c_read = 1;
	if (fd < 0)
		return (-1);
	if (*rem == NULL)
	{
		if ((*rem = ft_strnew(1)) == NULL)
			return (-1);
	}
	if ((*buff = ft_strnew(BUFF_SIZE)) == NULL)
	{
		ft_strdel(rem);
		return (-1);
	}
	return (0);
}

int		get_next_line(const int fd , char **line)
{
	static char	*rem = NULL;
	char		*pos_endl;
	char		*buff;
	ssize_t		c_read;
	char		*tmp;

	if (ft_init(&rem, &buff, fd, &c_read) == -1)
		return (-1);
	while (c_read > 0)
	{
		tmp = ft_strjoin(rem, (const char *) buff);
		ft_strdel(&rem);
		rem = tmp;
		if ((pos_endl = ft_strchr(rem, '\n')) != NULL)
		{
			ft_work(line, &tmp, &rem, (size_t) (pos_endl - rem));
			return (ft_end(c_read, &tmp, &rem));
		}
		c_read = read(fd, buff, BUFF_SIZE);
	}
	return (ft_endl(line, buff, c_read));
}
