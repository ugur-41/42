/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:16:26 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/14 11:04:17 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	str1;
	unsigned int	str2;
	unsigned int	i;
	char			*res;

	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	res = (char *)malloc(sizeof (char) * (str1 + str2 + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < str1)
	{
		res[i] = s1[i];
		i++;
	}
	str1 = 0;
	while (str1 < str2)
	{
		res[i] = s2[str1];
		str1++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
