/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:07:56 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/20 15:41:50 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_small_a(t_list **stack_a, t_list **stack_b, int flag)
{
	t_list	*head;

	head = *stack_a;
	while (head->next != NULL)
	{
		if (head->index == 0 && flag == 0)
		{
			pb(stack_a, stack_b);
			break ;
		}
		if (head->index == 1 && flag == 1)
		{
			pb(stack_a, stack_b);
			break ;
		}
		ra(stack_a);
		head = *stack_a;
	}
}
