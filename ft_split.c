/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:27:48 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/14 11:14:49 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	deli_count(char *str, char chr)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str == chr)
			i++;
		str++;
	}
	return ((size_t)i);
}

char	**ft_split(const char *s, char c)
{
	char			**result;
	unsigned int	i;
	unsigned int	j;
	unsigned int	deli;

	i = 0;
	deli = deli_count((char *) s, c) + 1;
	result = (char **)malloc(sizeof (char *) * (deli + 1));
	while (i < deli)
	{
		j = 0;
		while (s[j] != c)
		{
			j++;
		}
		result[i] = malloc(sizeof(char) * j + 1);
		result[i] = ft_memcpy(result[i], s, j);
		result[i][j] = '\0';
		s = s + (j + 1);
		i++;
	}
	result[i] = NULL;
	return (result);
}
