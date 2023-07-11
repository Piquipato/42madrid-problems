/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:46:00 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 15:46:04 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);
int	is_between(int n, int a, int b);

int	ft_str_is_lowercase(char *str)
{
	int	is_num;
	int	letra;

	is_num = 1;
	while (*str != '\0')
	{
		letra = (int) *str;
		if (is_between(letra, 97, 122) == 0)
		{
			is_num = 0;
		}
		str++;
	}
	return (is_num);
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

void print_is_alpha(char *str)
{
	int is_alpha = ft_str_is_lowercase(str);
	if (is_alpha)
	{
		printf("The string %s is lowercase\n", str);
	} else {
		printf("The string %s is not lowercase\n", str);
	}
}

int	main(void)
{
	char alpha[] = "holaquetal";
	char notalpha [] = "HolaQueTal";
	char amialpha[] = "";
	
	print_is_alpha(&alpha[0]);
	print_is_alpha(&notalpha[0]);
	print_is_alpha(&amialpha[0]);

}
