/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 22:23:45 by llelias           #+#    #+#             */
/*   Updated: 2018/11/20 09:39:34 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ll_memalloc(size_t size)
{
	void *chunk;

	chunk = malloc(size);
	if (!chunk)
		return (NULL);
	ll_bzero(chunk, size);
	return (chunk);
}