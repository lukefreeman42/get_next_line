/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:59:37 by llelias           #+#    #+#             */
/*   Updated: 2018/11/13 17:36:26 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_rec(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr_rec(n * -1);
	}
	else if (n)
	{
		ft_putnbr_rec(n / 10);
		ft_putchar(ft_itoc((int)(n % 10)));
	}
}

void		ft_putnbr(int n)
{
	if (n == 0)
		ft_putchar('0');
	else
		ft_putnbr_rec((long)n);
}
