/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:16:40 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 21:16:50 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "latin.h"

int	check_result(int **mat, int n, int final)
{
	int	i;
	int	j;
	int dte;

	i = 0;
	dte = 1;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (!(is_pow2(mat[i][j])))
				dte = 0;
			j++;
		}
		i++;
	}
	if (dte == 0 && final)
		write(1, "Error\n", 6);
	return (dte);
}
