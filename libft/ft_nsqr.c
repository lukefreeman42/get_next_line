/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsqr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:27:00 by llelias           #+#    #+#             */
/*   Updated: 2019/01/08 15:30:56 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds the next square of number X
** EX: X = 26, A = 6
** 	   X = 25, A = 5
*/

int		ft_nsqr(int x)
{
	int a;

	a = 0;
	while (a * a < x)
		a++;
	return (a);
}