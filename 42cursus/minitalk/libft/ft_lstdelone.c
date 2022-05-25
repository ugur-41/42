/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:10:50 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/18 10:51:53 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst -> next == NULL)
	{
		del(lst -> content);
		free(lst);
	}
	else
	{
		del(lst -> content);
		tmp = lst;
		lst = lst -> next;
		free(tmp);
	}
}
