/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:37 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/14 12:37:59 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		return (1);
	else
		return (1 + get_length(nbr / 10));
}

static void	write_nbr(char *str, int nbr, int lnt)
{
	if (!(nbr >= 0 && nbr <= 9))
	{
		write_nbr(str, nbr / 10, lnt - 1);
	}
	str[lnt] = (nbr % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		length;
	int		isnegative;
	long	nbr;

	nbr = n;
	length = 0;
	isnegative = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		isnegative = 1;
	}
	length = get_length (nbr);
	if (isnegative)
		length++;
	result = (char *)malloc(sizeof(char) * length + 1);
	if (!result)
		return (NULL);
	if (isnegative)
		*result = '-';
	write_nbr (result, nbr, length - 1);
	result[length + 1] = '\0';
	return (result);
}
