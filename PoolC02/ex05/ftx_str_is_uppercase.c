/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:48:29 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 15:48:31 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);
int	is_between(int n, int a, int b);

int	ft_str_is_uppercase(char *str)
{
	int	is_num;
	int	letra;

	is_num = 1;
	while (*str != '\0')
	{
		letra = (int) *str;
		if (is_between(letra, 65, 90) == 0)
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
	int is_alpha = ft_str_is_uppercase(str);
	if (is_alpha)
	{
		printf("The string %s is uppercase\n", str);
	} else {
		printf("The string %s is not uppercase\n", str);
	}
}

int	main(void)
{
	char alpha[] = "HOLAQUETAL";
	char notalpha [] = "HolaQueTal";
	char amialpha[] = "";
	
	print_is_alpha(&alpha[0]);
	print_is_alpha(&notalpha[0]);
	print_is_alpha(&amialpha[0]);

}
