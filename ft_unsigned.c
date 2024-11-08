/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:56:58 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 12:05:24 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int num, int *len_count)
{
	char	*str;

	str = "0123456789";
	if (num > 9)
	{
		ft_unsigned((num / 10), len_count);
	}
	ft_putchar(str[num % 10], len_count);
}
