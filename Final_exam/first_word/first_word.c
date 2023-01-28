#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char  *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    first_word(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0' || str[i] != ' ' || str[i] != '    ')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)
        ft_putchar('\n');
    else
        first_word(argv[1]);
    return (0);
}