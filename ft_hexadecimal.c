/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:47:11 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 14:33:58 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int num, char f, int *len_count)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		ft_hexadecimal((num / 16), f, len_count);
		ft_hexadecimal((num % 16), f, len_count);
	}
	else if (num < 10)
	{
		i = ft_putchar((num + '0'), len_count);
		if (i == -1)
			return(-1);
	}
	else
	{
		if (f == 'x')
		{
			i = ft_putchar((num - 10 + 'a'), len_count);
			if (i == -1)
				return (-1);
		}
		else
			i = ft_putchar((num - 10 + 'A'), len_count);
			if (i == -1)
				return (-1);
	}
	return (100);
}
