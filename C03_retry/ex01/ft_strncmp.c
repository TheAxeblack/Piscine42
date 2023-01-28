/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 22:02:06 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/28 22:07:12 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]) && (i < n))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char a[]="hibvgverybirbvoruh ";
	char b[]="efwvcbeyvbw";
	char c[]="hibvgverybirbvoruh ";
	char d[]="efwvcbeyvbw";
	int  size = 5;

	printf("Expected output: %i\n",strncmp(a,b,size));
	printf("Output: %i\n",ft_strncmp(c,d,size));
	return (0);
}
