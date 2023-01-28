/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:57:10 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/09 13:14:58 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a = a + 1;
	}
}
