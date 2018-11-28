/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:04:32 by llelias           #+#    #+#             */
/*   Updated: 2018/11/17 15:42:07 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**word_location(char const *s, char c)
{
	char	**word_prop;
	char	*start;
	char	*end;

	word_prop = (char**)malloc(sizeof(char) * 2);
	while (*s == c)
		s++;
	start = (char*)s;
	while (*s != c && *s)
		s++;
	end = (char*)s;
	word_prop[0] = start;
	word_prop[1] = end;
	return (word_prop);
}

static size_t	ft_strsplitnum(const char *str, char c)
{
	size_t num;

	num = 0;
	if (!str)
		return (num);
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			num++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (num);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	numo_wds;
	char	**tbl;
	char	**wrd;
	int		i;

	numo_wds = ft_strsplitnum(s, c);
	i = 0;
	if (!s || !(tbl = (char**)malloc(sizeof(char*) * (numo_wds + 1))))
		return (NULL);
	while (i < numo_wds)
	{
		wrd = word_location(s, c);
		s = wrd[1];
		if (!(tbl[i] = ft_strnew(wrd[1] - wrd[0])))
			tbl[i] = NULL;
		else
			tbl[i] = ft_strncpy(tbl[i], wrd[0], wrd[1] - wrd[0]);
		i++;
	}
	tbl[i] = 0;
	return (tbl);
}
