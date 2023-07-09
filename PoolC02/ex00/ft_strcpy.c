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

char	*ft_strcpy(char *dest, char*src)
{
	int	srcd;
	int	k;

	srcd = 1;
	k = 0;
	while (srcd)
	{
		*(dest + k) = *(src + k);
		if (*(src + k) == '\0')
		{
			srcd = 0;
		}
		k++;
	}
	return (dest);
}
