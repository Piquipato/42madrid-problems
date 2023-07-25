/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:16:52 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/25 15:16:55 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*cp;

	if (argc == 2)
	{
		cp = ft_strdup(argv[1]);
		printf("Original String (at address %d): \"%s\"\n", &argv[1], argv[1]);
		printf("Copied String (at address %d): \"%s\"\n", &cp, cp);
	}
}

char	*ft_strdup(char *src)
{
	char	*cp;
	int		k;

	k = 0;
	while (src[k])
		k++;
	cp = (char *) malloc((k + 1) * sizeof(char));
	while (k + 1)
	{
		cp[k] = src[k];
		k--;
	}
	return (cp);
}
