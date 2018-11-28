/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:29:17 by llelias           #+#    #+#             */
/*   Updated: 2018/11/17 15:40:18 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f) (unsigned int, char))
{
	char			*map;
	unsigned int	i;

	if (str && (*f))
	{
		i = 0;
		if (!(map = ft_strnew(ft_strlen(str))))
			return (NULL);
		while (*(str + i))
		{
			*(map + i) = (*f)(i, *(str + i));
			i++;
		}
		return (map);
	}
	return (NULL);
}
