/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:54:50 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/13 16:20:11 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*arg_to_list(int ac, char **av)
{
	char	**newstr = NULL;
	int		word_count;

	word_count = 0;
	if (ac == 2)
	{
		word_count = ft_count_word(av[1], ' ');
		newstr = malloc(sizeof(char *) * word_count);
		if(!newstr)
			write(1,"newstr bos",10);
		newstr = ft_split(av[1], ' ');
		ac = word_count + 1;
	}

	if (newstr == NULL)
		newstr = av + 1;
	write(1, newstr, ft_strlen(*newstr));
	return(arg_to_stack(newstr, ac - 1));
}
