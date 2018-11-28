/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 00:30:11 by llelias           #+#    #+#             */
/*   Updated: 2018/11/10 00:45:06 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *link))
{
	t_list *new;

	if (lst != NULL)
	{
		new = (*f)(lst);
		new->next = ft_lstmap(lst->next, (*f));
		return (new);
	}
	else
		return (NULL);
}
