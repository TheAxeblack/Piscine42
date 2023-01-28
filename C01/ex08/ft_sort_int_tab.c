/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:19:24 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/22 10:16:07 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	j;
	int	tmp;

	i = size - 1;
	j = 0;
	tmp = 0;
	while (i != 0)
	{
		while (j != i)
		{
			if (tab[j + 1] < tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		i--;
	}
}
