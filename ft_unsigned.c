#include "ft_printf.h"

void ft_unsigned(unsigned int num, int *len_count)
{
    char str[] = "0123456789";

    if (num > 9)
    {
        ft_unsigned((num / 10), len_count);
    }
    ft_putchar(str[num % 10], len_count);
}