/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:00:06 by llelias           #+#    #+#             */
/*   Updated: 2018/11/11 14:04:36 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	needle_len;

	if (!ft_strcmp(needle, ""))
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && n)
	{
		if (n < needle_len)
			return (NULL);
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		n--;
		haystack++;
	}
	return (NULL);
}
