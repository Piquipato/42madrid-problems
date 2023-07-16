/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:16:25 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/15 16:16:28 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "latin.h"

void	print_matrix(int n, int **mat)
{
	// mat[filas][columnas]
	int filas;
	int	colms;
	int	letra;

	filas = 0;
	while (filas < n)
	{
		colms = 0;
		while (colms < n)
		{
			letra = mat[filas][colms] + '0';
			write(1, &letra, 1);
			if (colms != n - 1)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			colms++;
		}
		filas++;
	}
}

void	print_vec(int n, int *mat)
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
