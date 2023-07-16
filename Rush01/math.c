/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:12:38 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 17:12:41 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "latin.h"

int	power(int base, int exp)
{
	int	k;
	int	prd;

	prd = 1;
	k = 1;
	while (k <= exp)
	{
		prd = prd * base;
		++k;
	}
	return (prd);
}

int	logar(int n, int b)
{
	int	ctr;
	int	k;

	ctr = 0;
	while (!(n <= 1))
	{
		n = (n - n % b) / b;
		ctr++;
	}
	return (ctr);
}

int	**log_mat(int **mat, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
			mat[i][j++] = logar(mat[i][j], 2);
		i++;
	}
	return (mat);
}

int	**pow_mat(int **mat, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
			mat[i][j++] = power(2, mat[i][j]);
		i++;
	}
	return (mat);
}

int	is_pow2(int n)
{
	if ((n & (n - 1)) == 0)
		return (1);
	else
		return (0);
}
