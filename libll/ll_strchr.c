/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:00:21 by llelias           #+#    #+#             */
/*   Updated: 2018/11/26 17:02:33 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Returns the location of c within the str.
**If c does not exist, it returns NULL
*/

#include "libft.h"

char	*ll_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str++ == '\0')
			return (NULL);
	}
	return ((char *)str);
}
