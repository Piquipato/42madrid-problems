/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:54:49 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 14:54:52 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "latin.h"

int	**make_matrix(int n, int m)
{
	int	**matrix;
	int	k;

	matrix = (int **) malloc(n * sizeof(int *));
	k = 0;
	while (k < n)
		matrix[k++] = (int *) calloc(m, sizeof(int));
	return (matrix);
}
