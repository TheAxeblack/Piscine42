/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:44:15 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/27 17:02:15 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	if (!tab)
		return (-1);
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	else
	{
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
	}
	*range = tab;
	return (i);
}
