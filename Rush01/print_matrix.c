/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:02:37 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 15:02:39 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "latin.h"

void	print_matrix(int **mat, int n, int m)
{
	int			filas;
	int			colms;
	int			letra;

	filas = 0;
	while (filas < n)
	{
		colms = 0;
		while (colms < m)
		{
			ft_putnbr(mat[filas][colms]);
			if (colms != m - 1)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			colms++;
		}
		filas++;
	}
}

void	print_vec(int *mat, int n)
{
	int elm;
	int	letra;

	elm = 0;
	while (elm < n)
	{
		letra = mat[elm] + '0';
		write(1, &letra, 1);
		if (elm != n - 1)
			write(1, " ", 1);
		else
			write(1, "\n", 1);
		elm++;
	}
}
