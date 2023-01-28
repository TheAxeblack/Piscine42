#include <stdlib.h>

int checkValid(int **grille, int x, int y, int highscore);
int absLigne(int **grille, int x, int choix);
int absCol(int **grille, int y, int choix);

int tabsize(int x, int y, int **grille)
{
	int choix;
	int size;

	choix = 1;
	size = 0;
	while (choix < 5)
	{
		if ((absLigne(grille, x, choix) == 1) && (absCol(grille, y, choix) == 1))
		{
			size++;
		}
		choix++;
	}
	return (size);
}

int count(int *possibility, int **grille, int x, int y)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < tabsize(x, y, grille))
	{
		if (possibility[i] != 0)
			count++;
		i++;
	}
	return (count);
}

int ft_writePossibility(int sizeTab, int *possibility, int *fPossibility)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < sizeTab)
	{
		if (possibility[i] != 0)
		{
			fPossibility[j] = possibility[i];
			i++;
			j++;
		}
		else
			i++;
	}
	return (j);
}

int *ft_finalPossibility(int *possibility, int **grille, int x, int y)
{
	int i;
	int j;
	int sizeTab;
	int *fPossibility;

	i = 0;
	j = 0;
	sizeTab = count(possibility, grille, x, y);
	fPossibility = (int *)malloc(sizeof(int) * sizeTab + 1);
	while (i < sizeTab)
	{
		fPossibility[i] = 0;
		i++;
	}
	j = ft_writePossibility(sizeTab, possibility, fPossibility);
	fPossibility[j] = 0;
	return (fPossibility);
}

int *tabPossibility(int *possibility, int x, int y, int **grille)
{
	int i;
	int highscore;

	i = 0;
	while (possibility[i] != 0)
	{
		highscore = possibility[i];
		if (checkValid(grille, x, y, highscore) == 0)
		{
			possibility[i] = 0;
		}
		i++;
	}
	i = 0;
	while (possibility[i] != 0)
	{
		i++;
	}
	return (ft_finalPossibility(possibility, grille, x, y));
}
