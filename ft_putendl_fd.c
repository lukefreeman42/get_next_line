/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:59:26 by llelias           #+#    #+#             */
/*   Updated: 2018/11/13 17:52:37 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *str, int fd)
{
	char	*str_nl;
	size_t	len;

	if (str)
	{
		len = ft_strlen(str);
		if ((str_nl = ft_strnew(len + 1)))
		{
			str_nl = ft_strncpy(str_nl, str, len);
			str_nl = ft_strncat(str_nl, "\n", 1);
			ft_putstr_fd(str_nl, fd);
			ft_strdel(&str_nl);
		}
	}
}
