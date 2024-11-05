#include "ft_printf.h"

void    ft_putnbr(int nb, int *len_count)
{
    if (nb == -2147483648)
    {
        ft_putchar('-', len_count);
        ft_putchar('2', len_count);
        ft_putnbr(147483648, len_count);
    }

    else if (nb < 0)
    {
        ft_putchar('-', len_count);
        ft_putnbr(-nb, len_count);
    }

    else if (nb > 9)
    {
        ft_putnbr((nb / 10), len_count);
        ft_putnbr((nb % 10), len_count);
    }

    else
        ft_putchar((nb + 48), len_count);
}