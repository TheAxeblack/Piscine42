#include <stdlib.h>

int **ft_tabend(char **argv, int **tab, int i)
{
	int j;

	j = 1;
	while (j < 5)
	{
		tab[j][0] = argv[1][i] - '0';
		i = i + 2;
		j++;
	}
	j = 1;
	while (j < 5)
	{
		tab[j][5] = argv[1][i] - '0';
		i = i + 2;
		j++;
	}
	return (tab);
}

int **ft_cpy_argv(char **argv, int **tab)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < 5)
	{
		tab[0][j] = argv[1][i] - '0';
		i = i + 2;
		j++;
	}
	j = 1;
	while (j < 5)
	{
		tab[5][j] = argv[1][i] - '0';
		i = i + 2;
		j++;
	}
	tab = ft_tabend(argv, tab, i);
	return (tab);
}

int **ft_strcpy(int **tab, char **argv)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	tab = ft_cpy_argv(argv, tab);
	return (tab);
}

int **ft_set_and_print(char **argv, int **tab)
{
	tab = ft_strcpy(tab, argv);
	return (tab);
}
