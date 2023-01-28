#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    maff_revalpha(void)
{
    char    c;

    c = 'Z';
    while (c >= 'A')
    {
        if (c % 2 != 0)
            ft_putchar(c);
        else
            ft_putchar(c + 32);
        c--;
    }
}

int main(void)
{
    maff_revalpha();
    return (0);
}