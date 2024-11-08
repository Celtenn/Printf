/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addresshexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:24 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 11:46:43 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexawr(unsigned long long num, int *len_count)
{
	if (num >= 16)
	{
		ft_hexawr((num / 16), len_count);
		ft_hexawr((num % 16), len_count);
	}
	else if (num < 10)
	{
		ft_putchar((num + '0'), len_count);
	}
	else
	{
		ft_putchar((num - 10 + 'a'), len_count);
	}
}

void	ft_addresshexa(unsigned long long num, int *len_count)
{
	ft_putchar('0', len_count);
	ft_putchar('x', len_count);
	ft_hexawr(num, len_count);
}
