/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:43:47 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/14 11:13:24 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checksign(char c, int *i);

int	ft_atoi(const char *str)
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
