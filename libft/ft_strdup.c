/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 08:19:29 by llelias           #+#    #+#             */
/*   Updated: 2019/01/08 15:44:08 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	n;
	size_t	status;

	if (s)
	{
		n = ft_strlen(s);
		if ((dup = ft_strnew(n)))
			if ((status = ft_strwcpy(dup, s, n)) == n)
				return (dup);
	}
	return (NULL);
}
