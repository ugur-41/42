/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:22:47 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/04 17:004:1754 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	**stack_b;

	stack_b = NULL;
	write(1,"mainde\n",7);
	stack_a = arg_to_list(ac,av);
	write(1,"stackde\n",8);
	while(ac > 0)
	{
		printf("%d",stack_a->data);
		stack_a = stack_a->next;
		ac--;
	}
	return (0);
}
