/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odemirel <odemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:41:56 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/04 15:467 by odemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new->data = content;
	new->index = -1;
	new -> next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (!tmp->next)
			return (tmp);
		tmp = tmp -> next;
	}
	return (tmp);
}

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	if (*list)
	{
		tmp = ft_lstlast(*list);
		tmp -> next = new;
	}
	else
		*list = new;
}

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (*list)
	{
		if (new)
			new->next = *list;
		else
		{
			write(1, "add_front new null\n", 19);
			return ;
		}
	}
	*list = new;
}
