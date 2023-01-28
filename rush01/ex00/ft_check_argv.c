void ft_putchar(char c);

int ft_check_argv(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || argv[1][i] > '4')
				return (0);
		}
		if (i % 2 == 1)
		{
			if (argv[1][i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

void ft_print_error(void)
{
	char str[6];
	int i;

	str[0] = 'E';
	str[1] = 'r';
	str[2] = 'r';
	str[3] = 'o';
	str[4] = 'r';
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
