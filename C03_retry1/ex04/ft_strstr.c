/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:43:33 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/29 14:37:57 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((str[0] == '\0' && to_find[0] != '\0')
		|| (ft_strlen(to_find) > ft_strlen(str)))
		return (NULL);
	else if (to_find[0] == '\0')
		return (str);
	else
	{	
		while (str[i] != 0)
		{
			j = 0;
			while (to_find[j] == str[i + j])
			{
				if (j == ft_strlen(to_find) - 1)
					return (str + i);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
