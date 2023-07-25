/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:19:18 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 17:19:19 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;

	k = 0;
	while (k < size - 1 && src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[size - 1] = '\0';
	return (k);
}

/*
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;

	k = 0;
	while (!(*(src + k) == '\0' || k > size - 2))
	{
		*(dest + k) = *(src + k);
		k++;
	}
	*(dest + k) = '\0';
	return (k);
}
*/
