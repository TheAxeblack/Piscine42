/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:38:06 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/22 16:29:28 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int	nb, int	power)
{
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i < nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	if (nb <= 2)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (nb < ft_recursive_power(2, 30))
		{
			if (ft_is_prime(nb) == 1)
				return (nb);
			else
				nb++;
		}
	}
	return (-1);
}
