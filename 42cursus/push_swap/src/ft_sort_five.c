/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:08:00 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/20 15:41:55 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*end;
	int		flag;

	end = ft_lstlast(*stack_a);
	if (end->index == 0)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		flag = 0;
		ft_push_small_a(stack_a, stack_b, flag);
	}
	flag = 1;
	ft_push_small_a(stack_a, stack_b, flag);
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
