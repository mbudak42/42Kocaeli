/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbudak <mbudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:27:13 by mbudak            #+#    #+#             */
/*   Updated: 2024/07/24 01:27:13 by mbudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlen(const char *s)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest_len < size && dest[dest_len] != '\0')
	{
		dest_len++;
	}
	if (dest_len >= size)
	{
		return (size + strlen(src));
	}
	src_len = strlen(src);
	while ((i < size - dest_len - 1) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
