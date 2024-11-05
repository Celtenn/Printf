#include "ft_printf.h"
void    ft_putchar(char c, int *len_count)
{
    write(1, &c, 1);
    *len_count++;
}