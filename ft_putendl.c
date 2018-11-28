/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:59:01 by llelias           #+#    #+#             */
/*   Updated: 2018/11/13 17:10:02 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *str)
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
			ft_putstr(str_nl);
			ft_strdel(&str_nl);
		}
	}
}
