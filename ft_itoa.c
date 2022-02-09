/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:37 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/09 15:36:35 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	digit_count(int n)
{
	unsigned int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return ((size_t)i);
}

char	*ft_itoa(int n)
{
	int				j;
	int				i;
	char			*result;

	j = 0;
	i = digit_count(n);
	if (n >= 0)
	{
		result = (char *)malloc(sizeof (char) * digit_count(n) + 1);
		while (i > 0)
		{
			result[i - 1] = (n % 10) + '0';
			n = (n - (n % 10)) / 10;
			i--;
			j++;
		}
		result[j] = '\0';
		return (result);
	}
	else if (n < 0)
	{
		result = (char *)malloc(sizeof (char) * digit_count(n) + 2);
		result[0] = '-';
		n *= -1;
		while (i > 0)
		{
			result[i] = (n % 10) + '0';
			n = (n - (n % 10)) / 10;
			i--;
			j++;
		}
		result[j + 1] = '\0';
		return (result);
	}
	else
		return (NULL);
}
