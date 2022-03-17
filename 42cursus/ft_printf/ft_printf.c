/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/08 10:45:52 by udemirel		  #+#	#+#			 */
/*   Updated: 2022/03/14 15:20:16 by udemirel         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list ap, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_printchar(va_arg(ap, int));
	else if (format == 's')
		length += ft_printstr(va_arg(ap, char *));
	else if (format == 'p')
		length += ft_print_ptr(va_arg(ap, unsigned long long));
	else if (format == 'd' || format == 'i')
		length += ft_printnbr(va_arg(ap, int));
	else if (format == 'u')
		length += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		length += ft_print_hex(va_arg(ap, unsigned int), format);
	else if (format == '%')
		length += ft_printpercent();
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	ap;

	i = 0;
	length = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_formats(ap, str[i + 1]);
			i++;
		}
		else
			length += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (length);
}
