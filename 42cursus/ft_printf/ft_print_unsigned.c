/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_unsigned.c								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/14 10:59:58 by udemirel		  #+#	#+#			 */
/*   Updated: 2022/03/14 11:04:08 by udemirel		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len ++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char *) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int n)
{
	int		length;
	char	*num;

	length = 0;
	if (n == 0)
		length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		length += ft_printstr(num);
		free(num);
	}
	return (length);
}