/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlezcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:29:53 by mlezcano          #+#    #+#             */
/*   Updated: 2023/07/23 21:48:13 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "natnum.h"

void	dict_app(int n, char *dictname, int k);

int	main(int argc, char **argv)
{
	if (argc == 2 && check_digits(argv[1]))
		dict_app(ft_atoi(argv[1]), "numbers.dict", 1);
	else if (argc == 3 && check_digits(argv[2]))
		dict_app(ft_atoi(argv[2]), argv[1], 1);
	else
		write(1, "Error\n", 6);
	return (0);
}

void	dict_app(int n, char *dictname, int k)
{
	char	*total_string;
	int		*keys;

	if (n < 0)
		write(1, "Dict Error\n", 11);
	else
	{
		keys = segment_num(n);
		print_list(keys);
		while (k <= keys[0])
		{
			total_string = file_to_string(dictname, ' ', -1);
			if (total_string == 0)
			{
				write(1, "Dict Error\n", 11);
				break ;
			}
			find_number(total_string, keys[k]);
			write(1, " ", 1);
			k++;
			free(total_string);
		}
		write(1, "\n", 1);
		free(keys);
	}
}
