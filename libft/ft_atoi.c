/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:59:39 by llelias           #+#    #+#             */
/*   Updated: 2018/11/13 16:36:06 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip_ws(const char *str)
{
	while (ft_isws(*str))
		str++;
	return (str);
}

static int			set_flag(const char *str)
{
	if (*str == '-')
		return (1);
	else
		return (0);
}

int					ft_atoi(const char *str)
{
	long int	tot;
	int			flag;

	flag = 0;
	tot = 0;
	str = skip_ws(str);
	if (*str == '-' || *str == '+')
		flag = set_flag(str++);
	while (ft_isdigit(*str))
		tot = (tot * 10) + ft_ctoi(*str++);
	if (flag)
		tot = tot * -1;
	return ((int)tot);
}
