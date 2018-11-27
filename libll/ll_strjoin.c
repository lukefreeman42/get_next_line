/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:24:26 by llelias           #+#    #+#             */
/*   Updated: 2018/11/26 16:55:58 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libll.h"

char	*ll_strjoin(const char *s1, const char *s2)
{
	char	*cat;
	void	*p;
	size_t	len1;
	size_t	len2;

	if (s1 && s2)
	{
		len1 = ll_strlen(s1);
		len2 = ll_strlen(s2);
		if (!(cat = ll_strnew(len1 + len2)))
			return (NULL);
		p = (void*)cat;
		cat = ll_strncpy(cat, s1, len1);
		cat += len1;
		cat = ll_strncpy(cat, s2, len2);
		return ((char*)p);
	}
	return (NULL);
}
