/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 05:59:36 by llelias           #+#    #+#             */
/*   Updated: 2019/01/08 15:21:44 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets LEN(gth) bytes of the memory B(lock) to the value C
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;

	if (b)
	{
		p = (unsigned char*)b;
		if (len)
			while (len--)
				*p++ = (unsigned char)c;
	}
	return (b);
}
