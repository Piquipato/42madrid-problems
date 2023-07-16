/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:05:36 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 21:05:45 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "latin.h"

int	**rm_impossible(int **mat, int **cls, int n)
{
	int	**cp; //copy_matrix(mat, n, n);
	int	i;
	int	j;
	int	*prc;

	cp = (int **) malloc(sizeof(mat));
	cp = copy_matrix(mat, n, n);
	prc = (int *) malloc(2 * sizeof(int));
	rm_cls_rc(mat, cls, n);
	rm_val_rc(mat, n);
	return (cp);
}

int	fix_answer(int **new, int **last, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (new[i][j] != last[i][j])
				return (1);
			j++;
		}
		i++;
	}
	rm_matrix(last);
	return (0);
}
