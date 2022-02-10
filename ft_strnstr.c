/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:27:47 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/10 15:43:19 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	length;

	length = ft_strlen(needle);
	if (!length)
		return ((char *)haystack);
	while (*haystack && length <= len--)
	{
		if (ft_strncmp(haystack, needle, length) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
