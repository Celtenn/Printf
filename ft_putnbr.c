/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:52:54 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/09 02:28:51 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nb, int *len_count)
{
	int		i;
	char	*nbr;

	nbr = "0123456789";
	i = 0;
	if (nb < 0)
	{
		i = ft_putchar('-', len_count);
		if (i == -1)
			return (-1);
		nb = -nb;
	}
	if (nb > 9)
	{
		i = ft_putnbr((nb / 10), len_count);
		if (i == -1)
			return (-1);
	}
	i = ft_putchar(nbr[nb % 10], len_count);
	if (i == -1)
		return (-1);
	return (1);
}
