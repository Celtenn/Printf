#include <stdio.h>
#include "ft_printf.h"
int main()
{
    int a = 123;
    int *y = &a;
    int p = ft_printf("%p %p %p %x %u %s\n", a, y, NULL, -35, 0, NULL);
    int i = printf("%p %p %p %x %u %s\n", a, y, NULL, -35, 0, NULL);
    printf("%d\n", p);
    printf("%d\n", i);

}