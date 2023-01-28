/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:34:13 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/22 16:47:30 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
        ft_putchar(str[i]);
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	(void)argc;
	ft_putstr(argv[0]);
    ft_putchar('\n');
	return (0);
}
