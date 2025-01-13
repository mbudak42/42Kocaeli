/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudak <mbudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:27:52 by mbudak            #+#    #+#             */
/*   Updated: 2024/07/24 01:27:56 by mbudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

int	ft_base_is_okay(char	*base)
{
	int	index;
	int	index2;

	if (ft_strlen(base) < 2)
		return (0);
	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		index2 = 0;
		while (base[index2] != '\0')
		{
			if (index != index2 && base[index] == base[index2])
				return (0);
			index2++;
		}
		index++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char	*base)
{
	int	base_max;
	int	n;

	if (ft_base_is_okay(base) == 0)
		return ;
	base_max = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	else if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	n = nbr % base_max;
	if (nbr > 0)
	{
		if (nbr / base_max > 0)
			ft_putnbr_base(nbr / base_max, base);
		write(1, &base[n], 1);
	}
}
