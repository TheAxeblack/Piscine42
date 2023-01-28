/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 13:27:58 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/29 14:29:51 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_condition(char	*base)
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
			else if (base[i] == '+' || base [i] == '-')
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

int	ft_atoi_base(char	*str, char	*base)
{
	int	i;
	int	compt;
	int	nb;

	i = 0;
	compt = 0;
	if (ft_condition(base) == 1)
		return (0);
	while ((str[i] >= 9 && str[i] < 14) || str[i] == ' '
		|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			compt ++;
		i++;
	}
	nb = 0;
	while (str[i] != '\0')
	{
		nb = nb * ft_strlen(base);
		if (ft_in_base(str[i], base) == (-1))
			return (0);
		else
		{
			nb = nb + ft_in_base(str[i], base);
			i++;
		}
	}
	if (compt == 0 || compt % 2 == 0)
		return (nb);
	else
		return (nb * (-1));
}
