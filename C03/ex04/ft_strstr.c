/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:43:33 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/26 16:43:07 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (NULL);
	else if (to_find[j] == '\0')
		return (str);
	else
	{
		while (str[i] != to_find[j])
			i++;
		while (str[i] == to_find[j] || str[i] != '\0')
		{
			to_find[j] = str[i];
			i++;
			j++;
		}
	}
	to_find[j] = '\0';
	return (to_find);
}
