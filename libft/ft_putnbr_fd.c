/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:59:45 by llelias           #+#    #+#             */
/*   Updated: 2018/11/13 17:45:13 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_rec_fd(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_rec_fd(n * -1, fd);
	}
	else if (n)
	{
		ft_putnbr_rec_fd(n / 10, fd);
		ft_putchar_fd(ft_itoc((int)(n % 10)), fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		ft_putnbr_rec_fd((long)n, fd);
}
