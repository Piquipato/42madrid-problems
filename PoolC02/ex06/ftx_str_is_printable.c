/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:05:57 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 16:06:00 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);
int	is_between(int n, int a, int b);

int	ft_str_is_printable(char *str)
{
	int	is_num;
	int	letra;

	is_num = 1;
	while (*str != '\0')
	{
		letra = (int) *str;
		if (is_between(letra, 32, 127) == 0)
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
	int is_alpha = ft_str_is_printable(str);
	if (is_alpha)
	{
		printf("The string %s is printable\n", str);
	} else {
		printf("The string %s is not printable\n", str);
	}
}

int	main(void)
{
	char alpha[] = "Hola que tal";
	char notalpha [] = "Hola\nque\ntal";
	char amialpha[] = "";
	
	print_is_alpha(&alpha[0]);
	print_is_alpha(&notalpha[0]);
	print_is_alpha(&amialpha[0]);

}
