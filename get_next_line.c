/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:37:10 by llelias           #+#    #+#             */
/*   Updated: 2018/11/27 15:24:00 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_n_store(const int fd, char *storage[])
{
	int	read_amnt;
	char	read_b[BUFF_SIZE + 1];
	char	*garbage;

	while (!ft_strchr(storage[fd], '\n') &&
			(read_amnt = read(fd, read_b, BUFF_SIZE)) && read_amnt > 0)
	{
		garbage = storage[fd];
		read_b[read_amnt] = '\0';
		storage[fd] = ft_strjoin(storage[fd], read_b);
		free(garbage);
	}
	return (read_amnt);
}

int		store_line(const int fd, char *storage[], char **line)
{
	char	*nl_pointer;
	char	*left;
	char	*rght;

	if (!(nl_pointer = ft_strchr(storage[fd], '\n')))
	{
		left = ft_strdup(storage[fd]);
		free(storage[fd]);
		*line = left;
		return (0);
	}
	else
	{
		*nl_pointer = '\0';
		left = ft_strdup(storage[fd]);
		rght = ft_strdup(storage[fd] + (int)ft_strlen(left) + 1);
		free(storage[fd]);
		*line = left;
		storage[fd] = rght;
		return (1);
	}
}

int		get_next_line(const int fd, char **line)
{
	int			read_status;
	int			line_status;
	static char	*storage[MAX_FD];

	if (fd < 0 || fd >= MAX_FD)
		return (-1);
	if (!storage[fd])
	{
		storage[fd] = ft_strnew(0);
	}
	read_status = read_n_store(fd, storage);
	if (read_status == -1)
		return (-1);
	line_status = store_line(fd, storage, line);
	if (line_status)
		return (1);
	else
		return (0);
}
