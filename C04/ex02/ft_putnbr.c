/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:23:00 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/27 20:05:50 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
        ft_putchar('-');
		ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
    ft_putchar(nbr % 10 + '0');
}
