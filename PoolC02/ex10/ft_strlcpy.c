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
	int				srcd;
	unsigned int	k;
	int				ret;

	srcd = 1;
	k = 0;
	while (srcd)
	{
		if (*(src + k) == '\0' || k > size - 2)
		{
			*(dest + k) = '\0';
			ret = k;
			srcd = 0;
		}
		else
		{
			*(dest + k) = *(src + k);
		}
		k++;
	}
	return (ret);
}
