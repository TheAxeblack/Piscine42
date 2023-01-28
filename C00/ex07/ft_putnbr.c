/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:59:29 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/27 13:01:12 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_calculs(int a, int b)
{
	int c;
	int d;

	while ((a / b) > 10)
	{
		b = b * 10;
	}
	while (b >= 10)
	{
		c = a % b;
		d = (a - c) / b;
		b = b / 10;
		a = c;
		ft_putchar(d + '0');
	}
	ft_putchar(a + '0');
	return (0);
}

void ft_putnbr(int nb)
{
	int d;

	d = 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_calculs(nb, d);
	}
}
