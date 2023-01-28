/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:45:37 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/29 15:40:39 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	i;
	int	compt;
	int	nbr;

	i = 0;
	compt = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			compt = compt + 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (compt == 0 || compt % 2 == 0)
		return (nbr);
	else
		return (nbr * (-1));
}
