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

int	main(void)
{
	char orStr[] = "Hello, World!";
	char dstStr[strlen(orStr)+1];

	printf("%d\n", ft_strlcpy(&dstStr[0], &orStr[0], 5));
	printf("source string \"%s\" at address %d\n", orStr, &orStr);
	printf("destination string \"%s\" at address %d\n", dstStr, &dstStr);
	return (0);
}

