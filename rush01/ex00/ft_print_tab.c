void ft_putchar(char c);

void ft_print_tab(int **tab)
{
	int x;
	int y;

	y = 1;
	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			ft_putchar(tab[y][x] + '0');
			x++;
			if (x < 5)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}
