/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:33:59 by llelias           #+#    #+#             */
/*   Updated: 2018/11/20 16:23:53 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libll.h"
#define BUFF_SIZE (2)

int		read_n_store(size_t fd, char **storage)
{
	int		read_amnt;
	char	read_b[BUFF_SIZE];
	char	*garbage;

	while (!ll_strchr(*storage, '\n')
			&& (read_amnt = read(fd, read_b, BUFF_SIZE)) && read_amnt > 0)
	{
		garbage = *storage;
		*storage = (char*)ll_memjoin(*storage, read_b,
				ll_strlen(*storage), read_amnt);
		free(garbage);
	}
	if (ll_strchr(*storage, '\n'))
		read_amnt = -2;
	return (read_amnt);
}

char	*grab_next_line(size_t fd, char **storage)
{
	char	*nl_pointer;
	char	*left;
	char	*rght;
	size_t	left_size;
	size_t	rght_size;

	nl_pointer = ll_strchr(*storage, '\n');
		left_size = nl_pointer - *storage + 1;
		rght_size = ll_strlen(*storage) - left_size;
		*nl_pointer++ = '\0';
		left = (char *) ll_memdup(*storage, left_size);
		rght = (char *) ll_memdup(nl_pointer, rght_size);
		free(*storage);
		*storage = rght;
		return (left);
}

int		get_next_line(size_t fd, char **line)
{
	int				read_status;
	static char		**storage;

    if(!storage)
	{
		storage = (char *) ll_memalloc(1);
		*storage = ll_memdup("", 1);
	}

	read_status = read_n_store(fd, storage);
	if (read_status == -1)
		return (-1);
	*line = grab_next_line(fd, storage);
	if (read_status == -2)
		return (1);
	if (read_status == 0)
		return (0);
	else
		return (2);
}
