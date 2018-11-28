/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:41:58 by llelias           #+#    #+#             */
/*   Updated: 2018/11/17 15:34:55 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*dgts_to_str(int n, int base, char *str, void *p)
{
	int flag;

	flag = 0;
	if (n < 0)
	{
		n *= -1;
		flag = 1;
	}
	while (n)
	{
		*str++ = ft_itoc(n % base);
		n /= base;
	}
	if (flag)
		*str++ = '-';
	ll_strrev((char*)p);
	return (str);
}

char		*ft_itoa_base(int n, int base)
{
	void	*p;
	char	*str;
	int		flag;

	flag = 0;
	if (n < 0)
		flag = 1;
	if (!(str = ft_strnew(ft_numodgt_base(n, base) + flag)))
		return (NULL);
	*str = '0';
	p = (void*)str;
	if (n == -2147483648)
		str = ft_strncpy(str, "-2147483648", 11);
	else
		str = dgts_to_str(n, base, str, p);
	return ((char*)p);
}
