/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:30:48 by llelias           #+#    #+#             */
/*   Updated: 2018/11/26 21:46:27 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a new spot in memory with the contents of b1 + b2
*/

#include "libft.h"

void	*ft_memjoin(void *b1, void *b2, size_t len1, size_t len2)
{
	void *buff;

	buff = ft_memalloc(len1 + len2);
	buff = ft_memcpy(buff, b1, len1);
	buff += len1;
	buff = ft_memcpy(buff, b2, len2);
	return (buff - len1);
}
