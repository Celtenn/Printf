#include "ft_printf.h"
#include <stdarg.h>

int ft_check(va_list ag, char *str, int *len_count)
{
    if (*str == 'c')
        ft_putchar(va_arg(ag, int), len_count);
    else if (*str == 's')
        ft_putstr(va_arg(ag, char *), len_count);
    else if (*str == 'd')
        ft_putnbr(va_arg(ag, int), len_count);
    else if (*str == 'i')
        ft_putnbr(va_arg(ag, int), len_count);
    else if (*str == 'x' || *str == 'X')
        ft_hexadecimal(va_arg(ag, int), *str, len_count);
    else if (*str == '%')
        ft_putchar(*str, len_count);
}

int ft_printf(const char *str, ...)
{
    int print_len;
    va_list ag;

    print_len = 0;
    if (!str)
        return (0);
    va_start(ag, str);

    while (*str)
    {
        if (*str == '%')
        {
            str++;
            ft_check(ag, (char *)str, &print_len);
        }
        else
            ft_putchar(*str, &print_len);
        str++;
    }
    va_end(ag);
    return (print_len);
}