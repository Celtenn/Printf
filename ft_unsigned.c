/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:56:58 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 18:57:45 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int num, int *len_count)
{
	int		i;
	char	*str;

	i = 0;
	str = "0123456789";
	if (num > 9)
	{
		ft_unsigned((num / 10), len_count);
	}
	i = ft_putchar(str[num % 10], len_count);
	if (i == -1)
		return (-1);
	return (1);
}
