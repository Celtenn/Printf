#include <stdio.h>
#include "ft_printf.h"
int main()
{
    int p = ft_printf("%u %u %u\n", -12, -35, 0);
    int i = printf("%u %u %u\n", -12, -35, 0);
    printf("%d\n", p);
    ft_printf("%d\n", i);

}