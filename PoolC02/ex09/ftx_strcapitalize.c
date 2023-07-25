/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:59:51 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 16:59:55 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_between(int n, int a, int b);

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	int		k;

	k = 1;
	tmp = str;
	while (*str)
	{
		if (!(*str <= 'z' && *str >= 'a') && !(*str >= 'A' && *str <= 'Z'))
			k = 1;
		if (*str >= '0' && *str <= '9')
			k = 0;
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		if ((*str >= 'a' && *str <= 'z') && k == 1)
		{
			*str = *str - 32;
			k = 0;
		}
		str++;
	}
	return (tmp);
}

/*
char	*ft_strcapitalize(char *str)
{
	char	*out;
	int		cap_nxt;

	out = str;
	cap_nxt = 1;
	while (*str != '\0')
	{
		if (!(is_between(*str, 65, 90)
				|| is_between(*str, 97, 122)))
			cap_nxt = 1;
		if (is_between(*str, 48, 57))
			cap_nxt = 0;
		if (is_between(*str, 65, 90))
			*str += 32;
		if (is_between(*str, 95, 122) && cap_nxt)
		{
			*str -= 32;
			cap_nxt = 0;
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
*/

int	main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		printf("%s\n", ft_strcapitalize(argv[i]));
	}
}
