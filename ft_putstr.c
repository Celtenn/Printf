/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:53:33 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 14:25:30 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int *len_count)
{
	int	i;
	char	*strnull;

	i = 0;
	strnull = "(null)";
	if (!str)
	{
		while (*strnull)
		{
			i = ft_putchar(*strnull, len_count);
			if (i == -1)
				return (-1);
			strnull++;
		}
		return (100);
	}
	while (*str)
	{
		i = ft_putchar(*str, len_count);
		if (i == -1)
			return (-1);
		str++;
	}
	return (100);
}
