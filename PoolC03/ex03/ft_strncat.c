/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:51:43 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/17 17:51:48 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("The concatenated string is %s\n", ft_strncat(argv[1], argv[2], 5));
}
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	k;
	int				l;

	k = 0;
	while (dest[k] != '\0')
		k++;
	l = k;
	k = 0;
	while (src[k] != '\0' && k < nb)
	{
		dest[k + l] = src[k];
		k++;
	}
	dest[k + l] = '\0';
	return (dest);
}
