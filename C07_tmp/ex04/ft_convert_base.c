/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:36:52 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/28 19:00:12 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char	*str);
int		ft_check_base(char	*base);
int		ft_in_base(char	c, char	*base);
int		ft_get_size(int	nb, char	*base);
char	*ft_reverse(char	*str);
int		ft_abs(int	nb);

int	ft_atoi_base(char	*str, char	*base)
{
	int	i;
	int	compt;
	int	size;
	int	nb;

	i = 0;
	compt = 0;
	size = ft_strlen(base);
	if (ft_check_base(base) == 1)
		return (0);
	else
	{
		while ((str[i] >= 9 && str[i] < 14) || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				compt++;
			i++;
		}
		nb = 0;
		while (str[i] != '\0')
		{
			nb = nb * size;
			if (ft_in_base(str[i], base) == (-1))
				return (0);
			else
			{
				nb += ft_in_base(str[i], base);
				i++;
			}
		}
	}
	if (compt == 0 || compt % 2 == 0)
		return (nb);
	else
		return (nb * (-1));
}

char	*ft_convert(long	nb, char	*base, int	i)
{
	int		*tab;
	int		div;
	char	*out;
	tab = malloc(sizeof(int) * ft_get_size(nb, base));
	out = malloc(sizeof(char) * ft_get_size(nb, base));
	div = ft_strlen(base);
	if (!tab || !out)
	{
		tab = NULL;
		out = NULL;
		return (out);
	}
	if (nb > 0)
	{
		while (nb > 0)
		{
			tab[i] = base[nb % div];
			out[i] = tab[i];
			nb = nb / div;
			i++;
		}
		out[i] = '\0';
		printf("nb = %ld\n", nb);
		free(tab);
		printf("Out : %s\n", out);
		return (out);
	}
	else if (nb < 0)
	{
		while (nb < 0)
		{
			tab[i] = base[ft_abs(nb % div)];
			printf("tab[i"
			out[i] = tab[i];
			nb = nb / div;
			i++;
		}
		out[i] = '\0';
		free(tab);
		return(out);
	}
	return("KO boy");
}

char	*ft_convert_base(char	*nbr, char	*base_from, char	*base_to)
{
	long	nb;
	int		i;

	i = 0;
	if ((ft_check_base(base_from) == 1) && (ft_check_base(base_to) == 1))
		return (NULL);
	else
	{
		printf("chaine de caracteres : %s\n", nbr);
		nb = ft_atoi_base(nbr, base_from);
		printf("int = %ld\n", nb);
		nbr = ft_convert(nb, base_to, i);
		return (ft_reverse(nbr));
	}
}

int	main(void)
{
	char	basefrom[] = "0123456789ABCDEF";
	char	baseto[] = "01";
	char	nbr[] = "    ++++---7FFFFFFE";

	printf("Attendu -1111111111111111111111111111110\nObtenu %s\n", ft_convert_base(nbr, basefrom, baseto));
	return (0);
}
