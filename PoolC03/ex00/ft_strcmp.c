/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:18:25 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/17 17:18:28 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("The first found difference is %d\n", ft_strcmp(argv[1], argv[2]));
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
			break ;
		k++;
	}
	return (s1[k] - s2[k]);
}
