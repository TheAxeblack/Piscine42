#include <stdlib.h>
int ft_check_argv(char **argv);
void ft_print_error(void);
int **ft_set_and_print(char **argv, int **tab);
void ft_recursive(int **tab);
void ft_print_tab(int **tab);

int main(int argc, char **argv)
{
	int **tab;
	int i;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * (6));
	while (i < 6)
	{
		tab[i] = (int *)malloc(sizeof(int) * (6));
		i++;
	}
	if (argc != 2 || ft_check_argv(argv) == 0)
	{
		ft_print_error();
		return (0);
	}
	tab = ft_set_and_print(argv, tab);
	ft_recursive(tab);
	if (tab[1][1] == 0)
	{
		ft_print_error();
		return (0);
	}
	ft_print_tab(tab);
	return (0);
}
