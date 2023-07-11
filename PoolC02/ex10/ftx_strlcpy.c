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

#include <string.h>
#include <stdio.h>

char	*ft_strlcpy(char *dest, char*src, unsigned int n)
{
	int	srcd;
	int	k;

	srcd = 1;
	k = 0;
	while (srcd)
	{
		if (*(src + k) == '\0' || k > n - 2)
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

int	main(void)
{
	char orStr[] = "Hello, World!";
	char dstStr[strlen(orStr)+1];

	ft_strlcpy(&dstStr[0], &orStr[0], 5);
	printf("source string \"%s\" at address %d\n", orStr, &orStr);
	printf("destination string \"%s\" at address %d\n", dstStr, &dstStr);
	return (0);
}

