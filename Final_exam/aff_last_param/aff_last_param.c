#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void aff_last_param(char *str)
{
    ft_putstr(str);
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc < 2)
        ft_putchar('\n');
    else
        aff_last_param(argv[(argc - 1)]);
}