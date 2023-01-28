#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    only_a(void)
{
    ft_putchar('a');
}

int main(void)
{
    only_a();
    return (0);
}