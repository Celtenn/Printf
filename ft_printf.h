/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:41:15 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/08 11:42:24 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len_count);
void	ft_putnbr(int nb, int *len_count);
void	ft_putstr(char *str, int *len_count);
void	ft_hexadecimal(unsigned int num, char f, int *len_count);
void	ft_unsigned(unsigned int num, int *len_count);
void	ft_addresshexa(unsigned long long num, int *len_count);

#endif