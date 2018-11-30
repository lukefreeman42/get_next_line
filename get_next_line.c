/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 07:34:12 by llelias           #+#    #+#             */
/*   Updated: 2018/11/30 08:54:14 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_n_store(const int fd, char *storage[])
{
	int		status;
	char	rb[BUFF_SIZE + 1];

	status = -2;
	while (!ft_strchr(storage[fd], '\n')
			&& (status = read(fd, rb, BUFF_SIZE))
			&& status > 0)
	{
		rb[BUFF_SIZE] = '\0';
		storage[fd] = ft_fstrjoin(storage[fd], rb, 1);
	}
	return (status);
}

int		grab_n_line(const int fd, char *storage[], char **line)
{
	char	*nl_p;
	char	*tmp;

	tmp = storage[fd];
	if ((nl_p = ft_strchr(storage[fd], '\n')))
	{
		*nl_p = '\0';
		storage[fd] = ft_strdup(++nl_p);
		*line = ft_fstrdup(tmp);
		return (1);
	}
	else
		*line = ft_fstrdup(storage[fd]);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	int			status;
	static char	*storage[MAX_FD];

	status = 0;
	if (fd < 0 || fd >= MAX_FD)
		return (-1);
	if (!storage[fd])
		storage[fd] = ft_strnew(0);
	status = read_n_store(fd, storage);
	if (status == -1)
		return (-1);
	if ((status = grab_n_line(fd, storage, line)))
		return (1);
	return (0);
}
