/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:20:01 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/13 15:29:51 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	ft_checksign(char c, int *i);

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int				sign;
	unsigned long	result;
	int				i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = ft_checksign(str[i], &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		if (result > LONG_MAX)
		{
			if (sign < 0)
				return (0);
			return (-1);
		}
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

static int	ft_checksign(char c, int *i)
{
	if (c == '-' || c == '+')
	{
		++*i;
		if (c == '-')
			return (-1);
	}
	return (1);
}