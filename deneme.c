#include <stdio.h>
#include "ft_printf.h"
int main()
{
    int p = ft_printf("%X \n", 12453);
    int i = printf("%X \n", 12453);
    printf("%d\n", i);
    ft_printf("%d\n", p);

}