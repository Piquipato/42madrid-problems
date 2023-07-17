/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:54:27 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 14:54:29 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "latin.h"

int	main(int argc, char *argv[])
{
	rush_app(4, "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
	return (0);
}

void	rush_app(int n, char *str)
{
	int	**matrix;
	int **cls;
	int *p;

	matrix = make_matrix(n, n);
	cls = clue_parse(str, n);
	fill_matrix(matrix, n);
	p = (int *) calloc(2, sizeof(int));
	ft_solver(matrix, cls, n, p);
	printf("--------------------------------\nFinal Matrix:\n");
	print_matrix(matrix, n, n);
	check_result(matrix, n, 1);
	rm_matrix(cls);
	rm_matrix(matrix);
}
