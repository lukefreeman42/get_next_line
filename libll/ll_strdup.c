/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:55:12 by llelias           #+#    #+#             */
/*   Updated: 2018/11/26 17:30:17 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ll_strdup(const char *str)
{
	char	*cpy;
	size_t	len;

	len = ll_strlen(str);
	if (!(cpy = ll_strnew(len)))
		return (NULL);
	return (ll_strncpy(cpy, str, len));
}
