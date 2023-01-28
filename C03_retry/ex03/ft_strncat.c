/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:15:03 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/26 16:26:19 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb == 0)
		return (dest);
	while (dest[i] != 0)
		i++;
	while ((src[j] != 0) && (j != nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
