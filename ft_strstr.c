/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:05:42 by llelias           #+#    #+#             */
/*   Updated: 2018/11/10 19:00:30 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (!ft_strcmp(needle, ""))
		return ((char*)haystack);
	while (*haystack)
	{
		while (*(haystack + i) == *(needle + i))
		{
			if (*(needle + i + 1) == '\0')
				return ((char*)haystack);
			i++;
		}
		i = 0;
		haystack++;
	}
	return (NULL);
}
