#include "ft_printf.h"

void ft_putstr(char *str, int *len_count)
{
    if (!str)
        return (0);
    while (*str)
    {
        ft_putchar(*str, len_count);
        str++;
    }
}