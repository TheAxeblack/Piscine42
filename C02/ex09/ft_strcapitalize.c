/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:36:40 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/22 10:54:16 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != 0)
	{	
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if (((str[i] >= 32 && str[i] < '0')
				|| (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a')
				|| str[i] > 'z') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
