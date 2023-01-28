#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    only_z(void)
{
    ft_putchar('z');
}

int main(void)
{
    only_z();
    return (0);
}