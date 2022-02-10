/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:37 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/10 13:37:44 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_length(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		return (1);
	else
		return (1 + get_length(nbr / 10));
}

void	write_nbr(char *str, int nbr, int lnt)
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
	int		i;
	int		length;
	int		isnegative;

	i = 0;
	length = 0;
	isnegative = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		isnegative = 1;
	}
	length = get_length (n);
	if (isnegative)
		length++;
	result = malloc(sizeof(char) * length + 1);
	if (isnegative)
		*result = '-';
	write_nbr (result, n, length - 1);
	result[length + 1] = '\0';
	return (result);
}
