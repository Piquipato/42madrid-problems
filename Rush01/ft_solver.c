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

#include <stdio.h>
#include "latin.h"

int	**ft_solver(int **mat, int **cls, int n, int *p)
{
	int	k;
	int **cp;

	k = 0;
	cp = rm_impossible(mat, cls, n);

	while (fix_answer(mat, cp, n) && k < 100)
	{
		cp = rm_impossible(mat, cls, n);
		k++;
	}
	printf("--------------------------------\nIteration Matrix:\n");
	print_matrix(mat, n, n);
	return (guess(mat, cls, n, p));
}

int	**guess(int **mat, int **cls, int n, int *p)
{
	int	g;
	int	i;
	int	dtc;

	if (check_result(mat, n, 0))
		return (mat);

	p[0] = 0;
	while (p[0] < n)
	{
		p[1] = 0;
		while (p[1] < n)
		{
			i = 0;
			while (i < n)
			{
				g = 1;
				while (g <= n && dtc != 0)
				{
					if (!((mat[p[0]][i] == power(2, g) 
					|| mat[i][p[1]] == power(2, g))
					|| (is_pow2(mat[p[0]][p[1]]))))
					{
						dtc = mat[p[0]][p[1]];
						mat[p[0]][p[1]] = power(2, g);
						p[0] += 1;
						printf("--------------------------------\nGuessed Matrix:\n");
						print_matrix(mat, n, n);
						guess(mat, cls, n, p);
						mat[p[0]][p[1]] = dtc;
					}
					g++;
				}
				i++;
			}
			p[1]++;
		}
		p[0]++;
	}
}
