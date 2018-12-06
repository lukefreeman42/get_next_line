/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 09:25:42 by llelias           #+#    #+#             */
/*   Updated: 2018/12/06 10:00:22 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		gnl(int fd, char *b[], char **line)
{
	int		st;
	char	rb[BUFF_SIZE + 1];
	char	*nl_p;
	char	*tmp;

	while (!(nl_p = ft_strchr(b[fd], '\n')) &&
			(st = read(fd, rb, BUFF_SIZE)) > 0 &&
			!(rb[st] = '\0'))
		b[fd] = ft_fstrjoin(b[fd], rb, 1);
	tmp = b[fd];
	if (st == -1)
		return (-1);
	if (ft_strlen(b[fd]))
	{
		if (nl_p && !(*nl_p = '\0'))
			b[fd] = ft_strdup(++nl_p);
		*line = ft_strdup(tmp);
		if (ft_strlen(b[fd]) || st)
			return (1);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static char *b[MAX_FD];

	if (!VALID_FD(fd))
		return (-1);
	if (!b[fd])
		b[fd] = ft_strnew(0);
	return (gnl(fd, b, line));
}
