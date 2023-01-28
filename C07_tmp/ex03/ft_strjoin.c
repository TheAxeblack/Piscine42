/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 10:40:28 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/28 11:31:23 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	 i = 0;
	 while (str[i] != '\0')
		i++;
	 return (i);
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int	size, char	**strs, char	*sep)
{
	char	*dest;
	int		i;
	int		oct;

	i = 0;
	oct = 0;
	while (i < size)
	{
		oct = oct + ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		oct = oct + (size - 1) * ft_strlen(sep);
	dest = malloc(sizeof(char) * (oct + 1));
	if (!dest)
		return (NULL);
	i = 0;
	oct = 0;
	while (i < size)
	{
		ft_strcat(ft_strcat(dest, strs[i]), sep);
		i++;
	}
	return (dest);
}
