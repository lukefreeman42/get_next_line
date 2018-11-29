/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:00:21 by llelias           #+#    #+#             */
/*   Updated: 2018/11/28 20:02:56 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == 0)
		while (1)
			if(!*str++)
				return ((char*)str - 1);
	while (*str)
		if(*str++ == c)
			return ((char*)str -1);
	return (NULL);
}
