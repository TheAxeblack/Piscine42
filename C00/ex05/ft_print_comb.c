/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:17:34 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/11 14:20:08 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	a, char	b, char	c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_commas(char	a, char	b)
{
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				ft_commas(',', ' ');
				c = c + 1;
			}
			b = b + 1;
			c = b + 1;
		}
		a = a + 1;
		b = a + 1;
		c = b + 1;
	}
	ft_putchar(a, b, c);
}
