/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:17:48 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 18:17:49 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "latin.h"

int	**ft_solver(int **mat, int **aux, int n, int *p)
{
	
}

int	**rm_impossible(int **mat, int **cls, int n)
{
	const int	**cp = copy_matrix(mat, n, n);
	
}

int	fix_answer(int **new, int **last, int n)
{

}

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