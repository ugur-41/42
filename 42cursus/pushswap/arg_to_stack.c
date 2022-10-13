/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:43:47 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/13 16:40:49 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


 t_list	*arg_to_stack(char **str ,int arg_amount)
{
	t_list	*head = malloc(sizeof(t_list));
	t_list	*tmp = malloc(sizeof(t_list));
	int		i;

	(void) arg_amount;
	i = 0;
	while (*(str[i]))
	{
		if (i == 0)
		{
			tmp = (t_list *) malloc((sizeof(t_list)));
			head = tmp;
		}
		else
		{
			tmp->next = (t_list *) malloc((sizeof(t_list)));
			tmp = tmp->next;
		}
		tmp->data = ft_atoi(str[i]);
		tmp->index = -1;
		tmp->next = NULL; 
/* 		tmp = ft_lstnew(ft_atoi(str[i]));
		ft_lstadd_back(&head, tmp); */
		i++;
	}
	return (head);
} 


/* void	ft_lst_free(t_list **stackA)
{
	t_list	*temp;

	temp = NULL;
	while (*stackA)
	{
		temp = (*stackA)->next;
		free(*stackA);
		*stackA = NULL;
		if (temp == NULL)
			break ;
		*stackA = temp;
	}
}

t_list	*arg_to_stack(char **av, int nmbr)
{
	int			i;
	t_list	*head;
	t_list	*temp;

	i = 1;
	head = NULL;
	while (i < nmbr)
	{
		temp = ft_lstnew(ft_atoi(av[i]));
		if (temp == NULL)
		{
			ft_lst_free(&head);
			break ;
		}
		ft_lstadd_back(&head, temp);
		i++;
	}
	
	return (head);
} */