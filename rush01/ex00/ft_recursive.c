#include <stdlib.h>
int *check(int x, int y, int **grille);
void ft_print_tab(int **tab);
void ft_recursive2(int **tab, int x, int y, int *possibility);

int *ft_recursive1(void)
{
	int *possibility;
	int i;

	i = 0;
	possibility = (int *)malloc(sizeof(int) * (5));
	while (i < 5)
	{
		possibility[i] = 0;
		i++;
	}
	return (possibility);
}

void ft_recursive(int **tab)
{
	int *possibility;
	int x;
	int y;
	int i;

	x = 1;
	i = 0;
	possibility = ft_recursive1();
	while (x < 5)
	{
		y = 1;
		while (y < 5)
		{
			if (tab[x][y] == 0)
			{
				possibility = check(x, y, tab);
				ft_recursive2(tab, x, y, possibility);
				if (tab[x][y] == 0)
					return;
			}
			y++;
		}
		x++;
	}
}

void ft_recursive2(int **tab, int x, int y, int *possibility)
{
	int p;

	p = 0;
	while (possibility[p] != 0)
	{
		tab[x][y] = possibility[p];
		ft_recursive(tab);
		if (tab[4][4] == 0)
		{
			tab[x][y] = 0;
			p++;
		}
		if (tab[4][4] != 0)
			possibility[p] = 0;
	}
}
