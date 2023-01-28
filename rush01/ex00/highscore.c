int fromRight(int **grille, int x, int highscore)
{
	int i;
	int vue;

	i = 3;
	vue = 1;
	while (i > 0)
	{
		if (highscore < grille[x][i])
		{
			highscore = grille[x][i];
			vue++;
		}
		i--;
	}
	return (vue);
}

int fromLeft(int **grille, int x, int highscore)
{
	int i;
	int vue;
	int high;

	i = 2;
	vue = 1;
	high = grille[x][1];
	grille[x][4] = highscore;
	while (i < 5)
	{
		if (high < grille[x][i])
		{
			high = grille[x][i];
			vue++;
		}
		i++;
	}
	grille[x][4] = 0;
	return (vue);
}

int fromTop(int **grille, int y, int highscore)
{
	int i;
	int vue;
	int high;

	i = 2;
	vue = 1;
	high = grille[1][y];
	grille[4][y] = highscore;
	while (i < 5)
	{
		if (high < grille[i][y])
		{
			high = grille[i][y];
			vue++;
		}
		i++;
	}
	grille[4][y] = 0;
	return (vue);
}

int fromBottom(int **grille, int y, int highscore)
{
	int i;
	int vue;

	i = 3;
	vue = 1;
	while (i > 0)
	{
		if (highscore < grille[i][y])
		{
			highscore = grille[i][y];
			vue++;
		}
		i--;
	}
	return (vue);
}
