#include "ft_printf.h"
#include <unistd.h>

void ft_putstr(char *str, int *len_count)
{
    while (*str)
    {
        ft_putchar(*str, len_count);
        str++;
    }
}