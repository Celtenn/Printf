#include <stdio.h>
#include "ft_printf.h"

int main()
{
    int i = 0;
    int p = 0;
    char nbr[] = "merhaba";

    i = ft_printf("%c %s %p %d %i %u %x %X %%", 'a', nbr, nbr, 123, 123, 123, 123, 123);
    p = printf("%c %s %p %d %i %u %x %X %%", 'a', nbr, nbr, 123, 123, 123, 123, 123);
    printf("%d\n", i);
    printf("%d", p);
}