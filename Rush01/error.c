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

void	check_result(int **mat, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (!(is_pow2(mat[i][j])))
				write(1, "Error", 5);
			j++;
		}
		i++;
	}
	print_matrix(log_mat(mat, n), n, n);
}
