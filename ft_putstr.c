#include "ft_printf.h"

void ft_putstr(char *str, int *len_count)
{
    char *strnull = "(null)";
    if (!str)
    {
        while (*strnull)
        {
            ft_putchar(*strnull, len_count);
            strnull++;
        }
        return;
    }
    while (*str)
    {
        ft_putchar(*str, len_count);
        str++;
    }
}