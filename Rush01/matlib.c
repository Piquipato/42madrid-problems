/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkmat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:46:40 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/15 17:46:43 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "latin.h"

int	*extract_col(int n, int col, int **mat)
{
	int filas;
	int	*ret;

	ret = (int *) malloc(n * sizeof(int));
	filas = 0;
	while (filas < n)
	{
		ret[filas] = mat[filas][col];
		filas++;
	}
	return (ret);
}

int	*extract_row(int n, int row, int **mat)
{
	int cols;
	int *ret;

	ret = (int *) malloc(n * sizeof(int));
	cols = 0;
	while (cols < n)
	{
		ret[cols] = mat[row][cols];
		cols++;
	}
	return (ret);
}

int	**make_matrix(int n)
{
	int	*nums;
	int	**filas;

	nums = (int *) calloc(n * n, sizeof(int));
	filas = (int **) malloc(n * sizeof(int *));
	for (int i = 0; i < n; ++i)
	{
		filas[i] = nums + i * n;
	}
	return (filas);
}

void	dest_matrix(int **mat)
{
	free(*mat);
	free(mat);
}

int	*clue_parse(int n, char *cls)
{
	int	k;
	int	idx;
	int	*ret = (int *) malloc(4 * n * sizeof(int));

	k = 0;
	idx = 0;
	while (cls[k] != '\0')
	{
		if (cls[k] >= 48 && cls[k] <= 57)
			ret[idx++] = cls[k] - 48;
	}
	return (ret);
}

int *count_skys(int n, int *vec)
{
	int	elm;
	int	*max;
	int	*ret;

	ret = (int *) calloc(2, sizeof(int));
	max = (int *) calloc(2, sizeof(int));
	elm = 0;
	while (elm < n)
	{
		if (vec[elm] > max[0])
		{
			max[0] = vec[elm];
			ret[0]++;
		}
		if (vec[n - 1 - elm] > max[1])
		{
			max[1] = vec[n - 1 - elm];
			ret[1]++;
		}
		elm++;
	}
	return (ret);
}

int	check_cls(int *cls, int *vec, int r)
{

}

void	solve_matrix(int **mat, int *cls)
{

}

