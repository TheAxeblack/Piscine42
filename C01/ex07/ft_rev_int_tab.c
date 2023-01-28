/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:33:00 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/14 12:17:40 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = tmp;
	}
}
