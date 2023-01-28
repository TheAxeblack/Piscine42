/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 13:46:02 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/27 16:58:40 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (NULL);
	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
