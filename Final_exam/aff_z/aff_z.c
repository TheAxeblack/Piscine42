#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void aff_z(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != 'z')
        i++;
    ft_putchar('z');
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('z');
        ft_putchar('\n');
    }
    else
    {
        aff_z(argv[1]);
    }
}