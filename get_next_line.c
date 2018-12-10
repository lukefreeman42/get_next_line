/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 09:16:06 by llelias           #+#    #+#             */
/*   Updated: 2018/12/09 14:02:55 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		gnl(int fd, char **line, char *f[])
{
	char	rb[BUFF_SIZE + 1];
	char	*nl;
	char	*tmp;
	int		r;

	nl = NULL;
	while ((r = read(fd, rb, BUFF_SIZE)) > 0)
	{
		rb[r] = '\0';
		f[fd] = ft_fstrjoin(f[fd], rb, 1);
		if ((nl = ft_strchr(f[fd], '\n')))
			break ;
	}
	if (r == -1)
		return (-1);
	tmp = f[fd];
	f[fd] = NULL;
	if (nl)
		if (!(*nl = '\0'))
			f[fd] = ft_strdup(++nl);
	*line = ft_fstrdup(tmp);
	if (r == 0 && **line == 0)
		return (0);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static char	*f[MAX_FD];

	if (!VALID(fd))
		return (-1);
	if (!f[fd])
		f[fd] = ft_strnew(0);
	return (gnl(fd, line, f));
}
