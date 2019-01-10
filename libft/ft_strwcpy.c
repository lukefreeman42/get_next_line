/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 08:34:38 by llelias           #+#    #+#             */
/*   Updated: 2019/01/08 15:35:35 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies N(um) bytes from S(ou)RC(e) to D(e)ST(ination) and
**	returns the number of non NULL bytes copied to DST.
*/

size_t	ft_strwcpy(char *dst, const char *src, size_t n)
{
	size_t cp_n;

	cp_n = 0;
	if (dst && src)
		while (n--)
		{
			if (*src)
				cp_n++;
			*dst++ = (*src) ? *src++ : '\0';
		}
	return (cp_n);
}
