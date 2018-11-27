/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:09:30 by llelias           #+#    #+#             */
/*   Updated: 2018/11/26 16:58:58 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ll_strncpy(char *dst, const char *src, size_t n)
{
	void *p;

	p = (void*)dst;
	while (*src && n)
	{
		*dst++ = *src++;
		n--;
	}
	while (n--)
		*dst++ = '\0';
	return ((char*)p);
}
