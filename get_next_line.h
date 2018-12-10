/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:29:49 by llelias           #+#    #+#             */
/*   Updated: 2018/12/10 10:51:14 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 40
# define MAX_FD 1024
# define VALID(x) (x >= 0 && x < MAX_FD)
# include "libft/libft.h"

int	get_next_line(const int fd, char **line);
#endif
