/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:28:10 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/13 12:26:53 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	int	quotient;
	int	reste;

	quotient = a / b;
	reste = a % b;
	*div = quotient;
	*mod = reste;
}
