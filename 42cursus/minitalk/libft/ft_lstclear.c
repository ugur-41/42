/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:17:33 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/22 12:26:13 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = *lst;
		while (*lst)
		{
			tmp = tmp -> next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
		*lst = NULL;
	}
}
