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

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("The first found difference is %d\n", ft_strncmp(argv[1], argv[2], 3));
}
*/

/*
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	k;

	k = 0;
	while ((s1[k] != '\0' && s2[k] != '\0'))
	{
		if (s1[k] != s2[k] || k >= n)
			break ;
		k++;
	}
	return (s1[k] - s2[k]);
}
*/

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	while (*str1 && *str2 && n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		n--;
		str2++;
	}
	if (*str1 && n > 0)
	{
		return (*str1 - '\0');
	}
	else if (*str2 && n > 0)
	{
		return ('\0' - *str2);
	}
	return (0);
}
