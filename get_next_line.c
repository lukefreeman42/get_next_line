/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 10:23:55 by llelias           #+#    #+#             */
/*   Updated: 2018/12/05 16:14:41 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_to_b(int fd, t_file *b)
{
	int		st;
	char	rb[BUFF_SIZE + 1];

	while ((st = read(fd, rb, BUFF_SIZE)) > 0)
	{
		rb[st] = '\0';
		b->s = ft_fstrjoin(b->s, rb, 1);
		if (ft_strchr(b->s, '\n'))
			break;
	}
	return (st);
}

int		grab_line(t_file *b, char **line)
{
	char	*nl_p;
	char	*tmp;
	
	if (ft_strlen(b->s))
	{
		nl_p = ft_strchr(b->s, '\n');
		tmp = b->s;
		if (nl_p)
		{
			*nl_p = '\0';
			b->s = ft_strdup(++nl_p);
		}
		*line = ft_fstrdup(tmp);
		if (ft_strlen(b->s))
			return (1);
	}
	return (0);
}

t_file		*grab_file(int fd, t_file *b)
{
	while (b->fd != fd && b->next != NULL)
		b = b->next;
	if (b->fd == fd)
		return (b);
	else
		b->next = ft_filenew(fd);
	return (b->next);
}

int		get_next_line(int fd, char **line)
{
	static t_file	**b;
	int				rs;
	*b = grab_file(fd, *b);
	if (*b && ((*b)->fd) >= 0 && read_to_b(fd, *b) != -1)
		return (grab_line(*b, line));
	return (-1);
}
