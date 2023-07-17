/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rm_poss_rc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:50:53 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 19:51:05 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "latin.h"

void	helper(int **mat, int n, int i, int j);

void	rm_val_rc(int **mat, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (is_pow2(mat[i][j]))
				helper(mat, n, i, j);
			j++;
		}
		i++;
	}
}

void	helper(int **mat, int n, int i, int j)
{
	int	k;

	k = 0;
	while (k < n)
	{
		if ((mat[i][k] & mat[i][j]) != 0 && k != j)
			mat[i][k] ^= mat[i][j];
		if ((mat[k][j] & mat[i][j]) != 0 && k != i)
			mat[k][j] ^= mat[i][j];
		k++;
	}
}

void	rm_cls_rc(int **mat, int **cls, int n)
{
	rm_colup(mat, cls, n);
	rm_coldown(mat, cls, n);
	rm_rowleft(mat, cls, n);
	rm_rowright(mat, cls, n);
}
