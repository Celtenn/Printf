/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:52:54 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 14:24:05 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nb, int *len_count)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i = ft_putchar('-', len_count);
		if  (i == -1)
			return (-1);
		ft_putnbr(-nb, len_count);
	}
	else if (nb > 9)
	{
		ft_putnbr((nb / 10), len_count);
		ft_putnbr((nb % 10), len_count);
	}
	else
	{
		i = ft_putchar((nb + 48), len_count);
		if (i == -1)
			return (-1);
	}
	return (100);		
}
