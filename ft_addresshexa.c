/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addresshexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:24 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 19:22:35 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_addressprint(unsigned long long num, int *len_count)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		ft_addressprint((num / 16), len_count);
		ft_addressprint((num % 16), len_count);
	}
	else if (num < 10)
	{
		i = ft_putchar((num + '0'), len_count);
		if (i == -1)
			return (-1);
	}
	else
	{
		i = ft_putchar((num - 10 + 'a'), len_count);
		if (i == -1)
			return (-1);
	}
	return (1);
}

int	ft_addresshexa(unsigned long long num, int *len_count)
{
	int	i;

	i = 0;
	i = ft_putchar('0', len_count);
	if (i == -1)
		return (-1);
	i = ft_putchar('x', len_count);
	if (i == -1)
		return (-1);
	i = ft_addressprint(num, len_count);
	if (i == -1)
		return (-1);
	return (1);
}
