/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:24:26 by llelias           #+#    #+#             */
/*   Updated: 2018/11/17 15:42:36 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*cat;
	void	*p;
	size_t	len1;
	size_t	len2;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		if (!(cat = ft_strnew(len1 + len2)))
			return (NULL);
		p = (void*)cat;
		cat = ft_strncpy(cat, s1, len1);
		cat += len1;
		cat = ft_strncpy(cat, s2, len2);
		return ((char*)p);
	}
	return (NULL);
}
