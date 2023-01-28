/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:16:12 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/27 16:39:05 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	exp;

	exp = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			exp = exp * nb;
			i++;
		}
	}
	return (exp);
}
