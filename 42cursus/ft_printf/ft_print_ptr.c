/* ************************************************************************** */
/*																			  */
/*														:::	  ::::::::        */
/*   ft_print_ptr.c									 :+:	  :+:	:+:  	  */
/*													+:+ +:+		 +:+	 	  */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+	   +#+		  */
/*												+#+#+#+#+#+   +#+		   	  */
/*   Created: 2022/03/14 11:27:43 by udemirel		  #+#	#+#			 	  */
/*   Updated: 2022/03/14 12:17:06 by udemirel		 ###   ########.fr	   	  */
/*																			  */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len ++;
		num /= 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (ptr == 0)
		length += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		length += ft_ptr_len(ptr);
	}
	return (length);
}
