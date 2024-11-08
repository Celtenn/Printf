/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:47:11 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 19:20:24 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaprint(unsigned int num, char f, int *len_count)
{
	if (num < 10)
	{
		if (ft_putchar((num + '0'), len_count) == -1)
			return (-1);
	}
	else
	{
		if (f == 'x')
		{
			if (ft_putchar((num - 10 + 'a'), len_count) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar((num - 10 + 'A'), len_count) == -1)
				return (-1);
		}
	}
	return (1);
}

int	ft_hexadecimal(unsigned int num, char f, int *len_count)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		ft_hexadecimal((num / 16), f, len_count);
		ft_hexadecimal((num % 16), f, len_count);
	}
	else
	{
		i = ft_hexaprint(num, f, len_count);
		if (i == -1)
			return (-1);
	}
	return (1);
}
