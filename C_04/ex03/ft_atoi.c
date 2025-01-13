/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudak <mbudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:27:45 by mbudak            #+#    #+#             */
/*   Updated: 2024/07/24 01:27:47 by mbudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	minus_count;
	int	result;

	while ((*str == ' ') || (*str == '\t'))
	{
		str++;
	}
	sign = 1;
	minus_count = 0;
	result = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	if (minus_count % 2 != 0)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result = ((result * 10) + (*str - '0'));
		str++;
	}
	return (sign * result);
}
