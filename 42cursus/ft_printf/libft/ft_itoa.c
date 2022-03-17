/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:37 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/15 14:04:46 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		count++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static int	isnegative(int nbr)
{
	if (nbr < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		length;
	long	nbr;

	nbr = n;
	length = get_length(nbr);
	result = (char *)malloc(sizeof(char) * length + 1);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr *= -1;
	result[length] = '\0';
	length--;
	while (length >= 0)
	{
		result[length] = (nbr % 10) + '0';
		nbr /= 10;
		length--;
	}
	if (isnegative(n) == 1)
		result[0] = '-';
	return (result);
}
