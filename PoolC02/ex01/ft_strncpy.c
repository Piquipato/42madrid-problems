/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:42:51 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/09 21:42:54 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		k;

	k = 0;
	while (src[k] != '\0' && n)
	{
		dest[k] = src[k];
		k++;
		n--;
	}
	while (n)
	{
		dest[k] = '\0';
		k++;
		n--;
	}
	return (dest);
}
/*
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while (!(*(src + k) == '\0' || k > n - 1))
	{
		*(dest + k) = *(src + k);
		k++;
	}
	while (*(src + k) != '\0')
	{
		*(dest + k) = '\0';
		k++;
	}
	return (dest);
}
*/
