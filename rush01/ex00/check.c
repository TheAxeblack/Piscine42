#include <stdlib.h>
int tabsize(int x, int y, int **grille);
int checkVueX(int **grille, int x, int highscore);
int checkVueY(int **grille, int y, int highscore);
int *tabPossibility(int *possibility, int x, int y, int **grille);

int absLigne(int **grille, int x, int choix)
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (grille[x][i] != choix)
		{
			i++;
		}
		if (grille[x][i] == choix && i < 5)
		{
			return (0);
		}
	}
	return (1);
}

int absCol(int **grille, int y, int choix)
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (grille[i][y] != choix)
		{
			i++;
		}
		if (grille[i][y] == choix && i < 5)
		{
			return (0);
		}
	}
	return (1);
}

void ft_choix(int **grille, int x, int y, int *possibility)
{
	int choix;
	int i;

	choix = 1;
	i = 0;
	while (choix < 5)
	{
		if ((absLigne(grille, x, choix) == 1) && (absCol(grille, y, choix) == 1))
		{
			possibility[i] = choix;
			i++;
		}
		choix++;
	}
}

int *check(int x, int y, int **grille)
{
	int i;
	int *possibility;
	int size;

	size = tabsize(x, y, grille);
	possibility = (int *)malloc(sizeof(int) * ((size) + 1));
	i = 0;
	while (i < size + 1)
	{
		possibility[i] = 0;
		i++;
	}
	ft_choix(grille, x, y, possibility);
	possibility[i] = 0;
	if (possibility[0] == 0)
		return (possibility);
	if (x == 4 || y == 4)
	{
		return (tabPossibility(possibility, x, y, grille));
	}
	return (possibility);
}

int checkValid(int **grille, int x, int y, int highscore)
{
	int count;

	count = 1;
	if (y == 4)
	{
		if (!checkVueX(grille, x, highscore))
			count = 0;
	}
	if (x == 4)
	{
		if (!checkVueY(grille, y, highscore))
			count = 0;
	}
	return (count);
}
