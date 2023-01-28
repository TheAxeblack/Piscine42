/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:40:57 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/28 18:51:02 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char	*base)
{
	int	i;
	int	j;

	j = 0;
	while (j <= (ft_strlen(base) - 1))
	{
		i = j + 1;
		while (i <= ft_strlen(base))
		{
			if (base[0] == '\0' || ft_strlen(base) < 2)
				return (1);
			else if (base[i] == base[j])
				return (1);
			else if (base[i] == '+' || base[i] == '-')
				return (1);
			else if ((base[i] >= 9 && base[i] < 14) || base[i] == ' ')
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	ft_in_base(char	c, char	*base)
{
	int	i;

	i = 0;
	while (i != ft_strlen(base))
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_get_size(int	nb, char	*base)
{
	int	i;
	int	res;

	i = 0;
	res = nb;
	while (res > 0)
	{
		res = res / ft_strlen(base);
		i++;
	}
	return (i);
}

char	*ft_reverse(char	*str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int ft_abs(int	nb)
{
	if (nb < 0)
		nb = (-nb);	
	return (nb);
}
