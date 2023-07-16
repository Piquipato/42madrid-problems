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
	printf("Antes de remover posibilidades\n");
	while (fix_answer(mat, cp, n) && k < 100)
	{
		cp = rm_impossible(mat, cls, n);
		printf("Hago bucle %d\n", k++);
	}
	printf("Despues de remover posibilidades\n");
	if (p[0] == n)
	{
		if (p[1] == n)
			return (mat);
		else
		{
			p[0] = 0;
			p[1]++;
		}
	}
	printf("Después de remover cambiar de fila\n");
	return (guess(mat, cls, n, p));
}

int	**guess(int **mat, int **cls, int n, int *p)
{
	int	g;
	int	i;
	int	j;
	int	dt;

	g = 1;
	printf("Antes de la adivinanza\n");
	while (g <= n)
	{
		i = 0;
		dt = 1;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (mat[i][j] == g)
				dt = 0;
			}
			i++;
		}
		if (dt)
		{
			mat[i][j] = g;
			p[0]++;
			ft_solver(mat, cls, n, p);
		}	
		g++;
	}
	return (mat);
}
