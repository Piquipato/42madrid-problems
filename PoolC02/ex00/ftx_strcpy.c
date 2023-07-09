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

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	char orStr[] = "Hello, World!";
	char dstStr[strlen(orStr)+1];

	ft_strcpy(&dstStr[0], &orStr[0]);
	printf("source string \"%s\" at address %d\n", orStr, &orStr);
	printf("destination string \"%s\" at address %d\n", dstStr, &dstStr);
	return (0);
}
