/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:07:18 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/20 15:41:07 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
//yeni bir node olusturuyor.
t_list	*ft_lstnew(int content)
{
	t_list	*root;

	root = (t_list *)malloc(sizeof(*root));
	if (root == NULL)
		return (0);
	root -> content = content;
	root -> index = -1;
	root -> next = NULL;
	return (root);
}
