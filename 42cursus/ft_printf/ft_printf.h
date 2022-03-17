/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/08 10:49:47 by udemirel		  #+#	#+#			 */
/*   Updated: 2022/03/15 16:28:53 by udemirel         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_print_unsigned(unsigned int n);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_formats(va_list ap, const char format);
int		ft_ptr_len(unsigned long long num);
int		ft_num_len(unsigned int num);
int		ft_hex_len(unsigned int num);

char	*ft_uitoa(unsigned int n);
char	*ft_itoa(int n);

void	ft_putstr(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_put_ptr(unsigned long long num);
void	ft_put_hex(unsigned int num, const char format);

#endif
