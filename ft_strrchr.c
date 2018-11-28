/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:03:13 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 20:03:26 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *str_p;

	str_p = (char*)str;
	str += ft_strlen(str);
	while (*str != c)
	{
		if (str == str_p)
			return (NULL);
		str--;
	}
	return ((char *)str);
}
