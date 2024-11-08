/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:41:15 by idkahram          #+#    #+#             */
/*   Updated: 2024/11/09 00:43:35 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *str, ...);
int	ft_putchar(char c, int *len_count);
int	ft_putnbr(long int nb, int *len_count);
int	ft_putstr(char *str, int *len_count);
int	ft_hexadecimal(unsigned int num, char f, int *len_count);
int	ft_unsigned(unsigned int num, int *len_count);
int	ft_addresshexa(unsigned long int num, int *len_count);

#endif