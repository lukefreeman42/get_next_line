/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:25:55 by llelias           #+#    #+#             */
/*   Updated: 2018/11/17 15:40:02 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char *str, char (*f)(char))
{
	char	*strmap;
	void	*p;

	if (str && (*f))
	{
		if (!(strmap = ft_strnew(ft_strlen(str))))
			return (NULL);
		p = (void*)strmap;
		while (*str)
			*strmap++ = (*f)(*str++);
		return ((char*)p);
	}
	return (NULL);
}
