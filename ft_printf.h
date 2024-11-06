#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...);
void    ft_putchar(char c, int *len_count);
void    ft_putnbr(int nb, int *len_count);
void ft_putstr(char *str, int *len_count);
void    ft_hexadecimal(unsigned int num, char f, int *len_count);
void ft_unsigned(unsigned int num, int *len_count);
void    ft_addresshexa(unsigned long long num, int *len_count);

#endif