/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:24:47 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/09 15:24:53 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s);

char    *ft_strrchr(const char *s, int c)
{
    int     len;
    char    *z;

    len = strlen(s);
    z = (char *)s + len;
    if (c == '\0')
        return (z);
    while (z != s)
    {
        if (*z == c)
            return (z);
        z--;
    }
    return (NULL);
}
