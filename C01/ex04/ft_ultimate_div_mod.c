/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malecuye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:27:45 by malecuye          #+#    #+#             */
/*   Updated: 2021/07/22 10:19:58 by malecuye         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div_tmp;
	int	mod_tmp;

	div_tmp = *a / (*b);
	mod_tmp = *a % (*b);
	*a = div_tmp;
	*b = mod_tmp;
}
