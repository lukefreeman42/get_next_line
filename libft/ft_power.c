/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 10:19:22 by llelias           #+#    #+#             */
/*   Updated: 2019/01/08 15:19:21 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the evaluation of N(um) to the exponent P(ower)
*/

static int	error(void)
{
	ft_putstr("Does not support negative exponents... yet");
	return (-1);
}

int			ft_power(int n, int p)
{
	int tot;

	tot = 1;
	if (p < 0)
		return (error());
	while (p-- > 0)
		tot *= n;
	return (tot);
}
