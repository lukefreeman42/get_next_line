/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:55:12 by llelias           #+#    #+#             */
/*   Updated: 2018/11/12 16:06:02 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(str);
	if (!(cpy = ft_strnew(len)))
		return (NULL);
	return (ft_strncpy(cpy, str, len));
}
