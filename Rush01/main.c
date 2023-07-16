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
#include "latin.h"

int	main(int argc, char *argv[])
{
	int **matrix = make_matrix(4, 4);
	fill_matrix(matrix, 4);
	print_matrix(matrix, 4, 4);
	rm_matrix(matrix);
	return (0);
}

void	rush_app(int n, char *str)
{
	int	**sol;
	int **cls;
	int **stat;

	sol = make_matrix(n, n);
	cls = clue_parse(str, n);
	stat = make_matrix(n, n);
}
