/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudak <mbudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:27:02 by mbudak            #+#    #+#             */
/*   Updated: 2024/07/24 01:27:03 by mbudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while ((*src != '\0') && nb > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		nb--;
	}
	*dest_ptr = '\0';
	return (dest);
}
