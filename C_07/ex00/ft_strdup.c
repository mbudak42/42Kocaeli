/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudak <mbudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:11:38 by mbudak            #+#    #+#             */
/*   Updated: 2024/07/24 14:11:38 by mbudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '0')
	{
		i++;
	}
}

char	*ft_strdup(char	*src)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen(src) + 1);
	while (i < ft_strlen(src) + 1)
	{
		p[i] = src[i];
		i++;
	}
	return (p);
}
