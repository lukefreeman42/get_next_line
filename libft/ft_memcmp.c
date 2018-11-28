/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:50:24 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 20:14:40 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n < 1)
		return (0);
	while (*(char*)s1 == *(char*)s2 && --n)
	{
		s1++;
		s2++;
	}
	return ((int)(*(unsigned char*)s1 - *(unsigned char*)s2));
}
