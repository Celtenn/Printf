/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:47:11 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 11:47:13 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal(unsigned int num, char f, int *len_count)
{
	if (num >= 16)
	{
		ft_hexadecimal((num / 16), f, len_count);
		ft_hexadecimal((num % 16), f, len_count);
	}
	else if (num < 10)
	{
		ft_putchar((num + '0'), len_count);
	}
	else
	{
		if (f == 'x')
		{
			ft_putchar((num - 10 + 'a'), len_count);
		}
		else
			ft_putchar((num - 10 + 'A'), len_count);
	}
}
