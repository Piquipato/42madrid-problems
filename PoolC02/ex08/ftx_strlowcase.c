/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:15:07 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 16:15:09 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_between(int n, int a, int b);

char	*ft_strlowcase(char *str)
{
	char	*out;

	out = str;
	while (*str != '\0')
	{
		if (is_between(*str, 65, 90) == 1)
		{
			*str = *str + 32;
		}
		else
		{
			*str = *str;
		}
		str++;
	}
	return (out);
}

int	is_between(int n, int a, int b)
{
	if (n >= a && n <= b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(int argc, char *argv[])
{
	for(int i = 1; i < argc; i++)
	{
		printf("%s\n", ft_strlowcase(argv[i]));
	}
}
