#include <stdio.h>
#include "ft_printf.h"
int main()
{
    char y[] = "merhaba";
    int p = ft_printf("%p %x %u %s\n", y, -35, 0, "merhaba");
    int i = printf("%p %x %u %s\n", y, -35, 0, "merhaba");
    printf("%d\n", p);
    printf("%d\n", i);

}