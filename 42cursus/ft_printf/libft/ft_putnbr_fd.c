/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:30:19 by udemirel          #+#    #+#             */
/*   Updated: 2022/02/14 17:08:38 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	tmp;

	if (n == INT_MIN)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = (INT_MIN + 2000000000) * -1;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n <= 9 && n >= 0)
	{
		tmp = n + '0';
		ft_putchar_fd(tmp, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		tmp = (n % 10) + '0';
		ft_putchar_fd(tmp, fd);
	}
}
