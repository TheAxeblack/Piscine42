/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:12:02 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/12 18:12:10 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_nombre1(char	a, char	b, char	c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_nombre2(char	a, char	b)
{
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	int		c;

	a = 1;
	b = 10;
	c = 0;
	while (c < 98)
	{
		while (a < 99)
		{	
			ft_nombre1(((c / b) + 48), ((c % b) + 48), ' ');
			ft_nombre1(((a / b) + 48), ((a % b) + 48), ',');
			write(1, " ", 1);
			a = a + 1;
		}
		c = c + 1;
		a = c + 1;
	}
	ft_nombre1(((c / b) + 48), ((c % b) + 48), ' ');
	ft_nombre2(((a / b) + 48), ((a % b) + 48));
}
