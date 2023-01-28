#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    maff_alpha(void)
{
    char c;

    c = 'A';
    while (c <= 'Z')
    {
        if (c % 2 == 0)
            ft_putchar(c);
        else
            ft_putchar(c + 32);
        c++;
    }
}

int main(void)
{
    maff_alpha();
    return (0);
}