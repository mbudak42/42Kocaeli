/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudak <mbudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:05:36 by mbudak            #+#    #+#             */
/*   Updated: 2024/07/22 15:06:26 by mbudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap_div;
	int	swap_mod;

	swap_div = (*a / *b);
	swap_mod = (*a % *b);
	*a = swap_div;
	*b = swap_mod;
}
