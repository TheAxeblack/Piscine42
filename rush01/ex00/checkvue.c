int fromRight(int **grille, int x, int highscore);
int fromLeft(int **grille, int x, int highscore);
int fromTop(int **grille, int y, int highscore);
int fromBottom(int **grille, int y, int highscore);

int checkVueX(int **grille, int x, int highscore)
{
	int check;

	check = 1;
	if (fromLeft(grille, x, highscore) != grille[x][0])
		check = 0;
	if (fromRight(grille, x, highscore) != grille[x][5])
		check = 0;
	return (check);
}

int checkVueY(int **grille, int y, int highscore)
{
	int check;

	check = 1;
	if (fromTop(grille, y, highscore) != grille[0][y])
		check = 0;
	if (fromBottom(grille, y, highscore) != grille[5][y])
		check = 0;
	return (check);
}
