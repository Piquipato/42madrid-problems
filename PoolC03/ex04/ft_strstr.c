/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:45:47 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/18 13:45:50 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("The string %s is found in %s in the pointer %d (org %d)\n", argv[2], argv[1], ft_strstr(argv[1], argv[2]), &argv[1]);
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	char *ptr;
	int	s;
	int	f;

	s = 0;
	f = 0;
	while (str[s] != '\0')
	{
		if (str[s] == to_find[f] && to_find[f] != '\0')
		{
			ptr = &to_find[0];
			f++;
		}
		else
		{
			ptr = NULL;
			f = 0;
		}
		s++;
	}
	return (ptr);
}
