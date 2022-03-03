/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:37:59 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/28 11:38:34 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c && *s)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			count++;
		}
	}
	return (count);
}

static char	*ft_strcreate(const char *s, char c, size_t i)
{
	size_t	len;
	size_t	tmp;

	len = 0;
	tmp = i;
	while (s[tmp] != c && s[tmp])
	{
		tmp++;
		len++;
	}
	return (ft_substr(s, i, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	res_i;
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	res_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			res[res_i] = ft_strcreate(s, c, i);
			res_i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	res[res_i] = 0;
	return (res);
}
