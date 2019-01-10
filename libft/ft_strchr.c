/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 05:23:57 by llelias           #+#    #+#             */
/*   Updated: 2019/01/08 15:16:06 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns location of Char within Str if it exists.
*/

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		if (c == 0)
			while (1)
				if (!*s++)
					return ((char*)s - 1);
		while (*s)
			if (*s++ == (unsigned char)c)
				return ((char*)s - 1);
	}
	return (NULL);
}
