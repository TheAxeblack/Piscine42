/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:38:50 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/29 15:48:15 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	ft_condition(char	*base)
{
	int	j;
	int	i;

	j = 0;
	if (base[0] == '\0' || ft_strlen(base) < 2)
		return (1);
	while (j <= (ft_strlen(base) - 1))
	{
		i = j + 1;
		while (i <= ft_strlen(base))
		{
			if (base[i] == base [j])
				return (1);
			else if (base[i] == '+' || base [i] == '-')
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

void	ft_putnbr_base(int	nb, char	*base)
{
	int	div;

	div = ft_strlen(base);
	if (ft_condition(base) == 1)
		return ;
	else
	{
		if (nb < 0)
		{
            ft_putchar('-');
			nb = nb * (-1);
		}
		if (nb > div)
		{
			ft_putnbr_base (nb / div, base);
			nb = nb % div;
		}
        ft_putchar(base[nb]);
	}
}

int main ()
{
	int i = -25738;
	char a[] = "0123456789ABCDEF";

	printf("Expected output: -648A\n");
	printf("Output: \n");
	ft_putnbr_base(i,a);
}
