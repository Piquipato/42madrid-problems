/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:09:37 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/09 22:09:40 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_str_is_alpha(char *str)
{
	
}
*/

#include <stdio.h>
#include <unistd.h>

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

int	ft_str_is_numeric(char *str)
{
	int	is_num;
	int	letra;

	is_num = 1;
	while (*str != '\0')
	{
		letra = (int) *str;
		if (is_between(letra, 48, 57) == 0)
		{
			is_num = 0;
		}
		str++;
	}
	return (is_num);
}

void print_is_alpha(char *str)
{
	int is_alpha = ft_str_is_numeric(str);
	if (is_alpha)
	{
		printf("The string %s is numeric\n", str);
	} else {
		printf("The string %s is not numeric\n", str);
	}
}

int	main(void)
{
	char alpha[] = "919217904371";
	char notalpha [] = "Hola, que tal 1234123";
	char amialpha[] = "";
	
	print_is_alpha(&alpha[0]);
	print_is_alpha(&notalpha[0]);
	print_is_alpha(&amialpha[0]);

}
