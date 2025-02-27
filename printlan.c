#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int yazdir(char f, int *len)
{
    write(1, &f, 1);
    (*len)++;
    return (1);
}

void ft_putstr(char *str, int *len)
{
    int i = 0;
    while (str[i])
    {
        yazdir(str[i], len);
        i++;
    }
}

int ft_putnbr(int nbr, int *len)
{
    if (nbr > 9)
    {
        ft_putnbr((nbr / 10), len);
        ft_putnbr((nbr % 10), len);
    }
    else
    {
        yazdir((nbr + 48), len);
    }
    return (1);
}

int ft_puthexa(unsigned int nbr, int *len)
{
    if (nbr > 15)
    {
        ft_puthexa((nbr / 16), len);
        ft_puthexa((nbr % 16), len);
    }
    else if (nbr > 9)
    {
        yazdir((nbr + 97 - 10), len);
    }
    else
        yazdir((nbr + 48), len);

    return (1);
}

int check(va_list hey, char f, int *len)
{
    if (f == 's')
    {
        ft_putstr(va_arg(hey, char *), len);
    }
    else if (f == 'd')
    {
        ft_putnbr(va_arg(hey, int), len);
    }
    else if (f == 'x')
    {
        ft_puthexa(va_arg(hey, unsigned int), len);
    }
    else if (f == '%')
    {
        yazdir(f, len);
    }
    else
        yazdir(f, len);

    return (1);
}

int ft_printf(char *str, ...)
{
    int i = 0;
    int len = 0;
    va_list hey;

    va_start(hey, str);
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1])
        {
            i++;
            check(hey, str[i], &len);
        }
        else
            yazdir(str[i], &len);
        i++;
    }
    printf("\n");
    va_end(hey);
    return (len);
}

#include <stdio.h>

int main()
{
    int i = ft_printf("%s%d%x", "len", 300, 300);
    ft_printf("%d", i);
}