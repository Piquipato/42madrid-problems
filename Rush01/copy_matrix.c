/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:37:57 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 19:38:07 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "latin.h"

int	**copy_matrix(int **mat, int n, int m)
{
	int	**sol;
	int	i;
	int	j;

	sol = (int **) malloc(sizeof(mat));
	i = 0;
	while (i < n)
	{
		while (j < m)
			sol[i][j++] = mat[i][j];
		i++;
	}
	return (sol);
}
