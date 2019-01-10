/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 07:13:50 by llelias           #+#    #+#             */
/*   Updated: 2019/01/08 15:42:20 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenates S(ou)RC(e) to D(e)ST(ination) for a total strlen of N bytes.
** Returns the number of non NULL bytes copied from DST onto SRC.
*/

size_t	ft_strwcat(char *dst, const char *src, size_t n)
{
	size_t status;

	status = 0;
	if (dst && src)
	{
		while (n--)
		{
			if (*dst)
				dst++;
			else
			{
				status++;
				*dst++ = *src++;
			}
		}
	}
	return (status);
}
