/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:48:01 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 14:06:16 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_check(va_list ag, char *str, int *len_count)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i = ft_putchar(va_arg(ag, int), len_count);
	else if (*str == 's')
		i = ft_putstr(va_arg(ag, char *), len_count);
	else if (*str == 'p')
		i = ft_addresshexa(va_arg(ag, unsigned long long), len_count);
	else if (*str == 'd')
		i = ft_putnbr(va_arg(ag, int), len_count);
	else if (*str == 'i')
		i = ft_putnbr(va_arg(ag, int), len_count);
	else if (*str == 'u')
		i = ft_unsigned(va_arg(ag, unsigned int), len_count);
	else if (*str == 'x' || *str == 'X')
		i = ft_hexadecimal(va_arg(ag, int), *str, len_count);
	else if (*str == '%')
		i = ft_putchar(*str, len_count);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print_len;
	va_list	ag;

	i = 0;
	print_len = 0;
	if (!str)
		return (0);
	va_start(ag, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i = ft_check(ag, (char *)str, &print_len);
		}
		else
			i = ft_putchar(*str, &print_len);
		str++;
	}
	va_end(ag);
	if (i == -1)
		return (-1);
	return (print_len);
}
