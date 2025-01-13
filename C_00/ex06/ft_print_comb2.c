/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudak <mbudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:24:01 by mbudak            #+#    #+#             */
/*   Updated: 2024/07/24 01:24:04 by mbudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	line_reducer(int a, int b, int c, int *d)
{
	*d = '0';
	while (*d <= '9')
	{
		if ((c > a) || ((c == a) && (*d > b)))
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, " ", 1);
			write (1, &c, 1);
			write (1, d, 1);
			if (!(a == '9' && b == '8' && c == '9' && *d == '9'))
				write(1, ", ", 2);
		}
		(*d)++;
	}
}

void	ft_print_comb2(void)// ab cd
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				line_reducer(a, b, c, &d);
				c++;
				d = 0;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
