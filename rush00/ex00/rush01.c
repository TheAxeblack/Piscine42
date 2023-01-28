/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:09:28 by iel-amra          #+#    #+#             */
/*   Updated: 2021/07/10 15:26:15 by iel-amra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a);

void last_line(int n)
{
	int i;

	write(1, "\\", 1);
	i = 1;
	while (i < n - 1)
	{
		write(1, "*", 1);
		i++;
	}
	if (n > 1)
		write(1, "/", 1);
}

void middle_line(int i)
{
	int y;

	y = 0;
	while (y < i)
	{
		if (y == 0)
		{
			write(1, "*", 1);
		}
		else if (y < (i - 1))
		{
			write(1, " ", 1);
		}
		else if (y >= 1)
		{
			write(1, "*", 1);
		}
		y++;
	}
}

void head_line(int x)
{
	int i;
	char a;

	i = 0;
	a = '*';
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('/');
		}
		else if (i < (x - 1))
		{
			ft_putchar(a);
		}
		else if (i >= 1)
		{
			ft_putchar('\\');
		}
		i = i + 1;
	}
}

void rush(int y, int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			head_line(y);
			write(1, "\n", 1);
		}
		else if (i < (x - 1))
		{
			middle_line(y);
			write(1, "\n", 1);
		}
		else if (i >= 1)
		{
			last_line(y);
			write(1, "\n", 1);
		}
		i = i + 1;
	}
}
