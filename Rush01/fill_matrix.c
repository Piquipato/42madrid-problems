/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:38:37 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 17:38:40 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "latin.h"

void	fill_matrix(int **mat, int n)
{
	int	k;
	int	sum;
	int	i;
	int	j;

	k = 1;
	sum = 0;
	while (k <= n)
	{
		sum += power(2, k);
		k++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
			mat[i][j++] = sum;
		i++;
	}
}
