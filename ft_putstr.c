/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:53:33 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 11:55:38 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len_count)
{
	char	*strnull;

	strnull = "(null)";
	if (!str)
	{
		while (*strnull)
		{
			ft_putchar(*strnull, len_count);
			strnull++;
		}
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, len_count);
		str++;
	}
}
