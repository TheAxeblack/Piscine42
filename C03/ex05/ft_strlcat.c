/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:49:08 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/26 17:17:34 by malecuye         ###   ########lyon.fr   */
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

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
	{
		i++;
	}
	if (i == size)
		return (i + (unsigned int) ft_strlen(src));
	while (src[j] != '\0')
	{
		if (j < size - i - 1)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (i + j);
}
