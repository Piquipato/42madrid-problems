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
	int	srcd;
	int	k;

	srcd = 1;
	k = 0;
	while (srcd)
	{
		if (*(src + k) == '\0' || k > n - 1)
		{
			*(dest + k) = '\0';
			srcd = 0;
		}
		else
		{
			*(dest + k) = *(src + k);
		}
		k++;
	}
	return (dest);
}
