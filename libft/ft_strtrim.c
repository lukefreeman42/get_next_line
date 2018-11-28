/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:08:22 by llelias           #+#    #+#             */
/*   Updated: 2018/11/17 16:11:57 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*parse_ws(const char *str)
{
	while (ft_isws(*str))
		str++;
	return (str);
}

static const char	*parse_str(const char *str)
{
	while (*str)
		str++;
	str--;
	return (str);
}

static const char	*parse_ws_r(const char *str)
{
	while (ft_isws(*str))
		str--;
	return (str);
}

static const char	*parse_toend(const char *str)
{
	str = parse_str(str);
	str = parse_ws_r(str);
	return (str);
}

char				*ft_strtrim(char const *str)
{
	char	*start;
	char	*end;
	char	*trim;
	size_t	len;

	if (str)
	{
		len = 0;
		str = parse_ws(str);
		if (!*str)
		{
			trim = ft_strnew(0);
			return (trim);
		}
		start = (char*)str;
		end = (char*)parse_toend(str);
		len = end + 1 - start;
		if (!(trim = ft_strnew(len)))
			return (NULL);
		trim = ft_strncpy(trim, start, len);
		return (trim);
	}
	else
		return (NULL);
}
