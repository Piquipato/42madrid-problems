/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rm_possibilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:34:34 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 19:34:45 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "latin.h"

void	rm_colup(int **mat, int **cls, int n)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < n)
		{
			k = n - cls[0][j] + i + 3;
			while (k <= n)
			{
				if (!(mat[i][j] & power(2, k) == 0))
					mat[i][j] ^= power(2, k);
				k++;
			}
			i++;
		}
		j++;
	}
}

void	rm_coldown(int **mat, int **cls, int n)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < n)
		{
			k = n - cls[1][j] + i + 3;
			while (k <= n)
			{
				if (!(mat[n - 1 - i][j] & power(2, k) == 0))
					mat[n - 1 - i][j] ^= power(2, k);
				k++;
			}
			i++;
		}
		j++;
	}
}

void	rm_rowleft(int **mat, int **cls, int n)
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
			k = n - cls[2][i] + j + 3;
			while (k <= n)
			{
				if (!(mat[i][j] & power(2, k) == 0))
					mat[i][j] ^= power(2, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	rm_rowright(int **mat, int **cls, int n)
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
			k = n - cls[3][i] + j + 3;
			while (k <= n)
			{
				if (!(mat[i][n - 1 - j] & power(2, k) == 0))
					mat[i][n - 1 - j] ^= power(2, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
