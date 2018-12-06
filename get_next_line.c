/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 10:23:55 by llelias           #+#    #+#             */
/*   Updated: 2018/12/05 17:14:57 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_to_b(int fd, char *b[])
{
	int		st;
	char	rb[BUFF_SIZE + 1];

	while ((st = read(fd, rb, BUFF_SIZE)) > 0)
	{
		rb[st] = '\0';
		b[fd] = ft_fstrjoin(b[fd], rb, 1);
		if (ft_strchr(b[fd], '\n'))
			break;
	}
	return (st);
}

int		grab_line(int fd, char *b[], char **line)
{
	char	*nl_p;
	char	*tmp;
	
	if (ft_strlen(b[fd]))
	{
		nl_p = ft_strchr(b[fd], '\n');
		tmp = b[fd];
		if (nl_p)
		{
			*nl_p = '\0';
			b[fd] = ft_strdup(++nl_p);
		}
		*line = ft_fstrdup(tmp);
		if (ft_strlen(b[fd]))
			return (1);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static char		*b[MAX_FD];
	if (fd >= 0 && !b[fd])
		b[fd] = ft_strnew(0);	
	if (fd >= 0 && read_to_b(fd, b) != -1)
		return (grab_line(fd, b, line));
	return (-1);
}
