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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("The length of the concatenated string is %d\n", 
			ft_strlcat(argv[1], argv[2], 5));
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	int				l;
	int				r;

	k = 0;
	while (dest[k] != '\0')
		k++;
	l = k;
	k = 0;
	while (src[k] != '\0')
	{
		if (k < size)
		{
			dest[k + l] = src[k];
			r = k + l + 1;
		}
		else
			dest[k + l] = '\0';
		k++;
	}
	dest[k + l] = '\0';
	return (r);
}
