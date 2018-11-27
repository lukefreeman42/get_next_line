/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:30:48 by llelias           #+#    #+#             */
/*   Updated: 2018/11/20 10:28:12 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a new spot in memory with the contents of b1 + b2
*/

#include "libft.h"

void	*ll_memjoin(void *b1, void *b2, size_t len1, size_t len2)
{
	void *buff;

	buff = ll_memalloc(len1 + len2);
	buff = ll_memcpy(buff, b1, len1);
	buff += len1;
	buff = ll_memcpy(buff, b2, len2);
	return (buff - len1);
}
