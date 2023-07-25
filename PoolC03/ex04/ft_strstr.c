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

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *ptr1 = ft_strstr(argv[1], argv[2]);
		char *ptr2 = &argv[1];
		printf("The string \"%s\" is found in \"%s\"\n", ptr1, argv[1]);
	}
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		s;
	int		f;

	s = 0;
	ptr = 0;
	while (str[s] != '\0')
	{
		f = 0;
		if (to_find[f] == '\0')
			return (str);
		while (str[s + f] == to_find[f] && to_find[f] != '\0')
		{
			if (f == 0)
				ptr = &str[s + f];
			f++;
		}
		if (to_find[f] == '\0')
			return (ptr);
		ptr = 0;
		s++;
	}
	return (ptr);
}
