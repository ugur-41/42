/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odemirel <odemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:36:59 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/12 16:16:068 by odemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_word(char *s, char c)
{
	int	count;

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

char	*ft_strdup(char *s1)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_substr(char *s, unsigned int start, int len)
{
	char	*res;
	int		i;
	int		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((int)start >= s_len || s_len == 0 || len == 0)
		return (ft_strdup(""));
	if (len > s_len - (int)start)
		len = s_len - (int)start;
	res = (char *)malloc((len + 1) * sizeof (char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static char	*ft_strcreate(char *s, char c, int i)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = i;
	while (s[tmp] != c && s[tmp])
	{
		tmp++;
		len++;
	}
	return (ft_substr(s, i, len));
}

char	**ft_split(char *s, char c)
{
	int	i;
	int	res_i;
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
