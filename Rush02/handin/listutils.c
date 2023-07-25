/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:04:43 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/23 22:04:44 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "natnum.h"

int	calc_size(int *digits)
{
	int	size;

	size = 4;
	if (digits[1] == 0)
		size -= 2;
	if (digits[2] == 0 || (digits[2] == 1 && digits[3] != 0))
		size--;
	if (digits[3] == 0 && digits[1] != 0 && digits[2] != 0)
		size--;
	return (size);
}

int	*empty_list(void)
{
	int	*out;

	out = (int *) malloc(sizeof(int));
	out[0] = 0;
	return (out);
}

int	*power(int base, int exp)
{
	int	*out;

	out = (int *) malloc(2 * sizeof(int));
	out[0] = 1;
	out[1] = 1;
	while (exp != 0)
	{
		out[1] *= base;
		exp--;
	}
	return (out);
}

int	magnitude(int n)
{
	int	ctr;

	if (n == 0)
		return (1);
	ctr = 0;
	while (n != 0 || ctr % 3 != 0)
	{
		n = (n - n % 10) / 10;
		ctr++;
	}
	return (ctr);
}

void	print_list(int *list)
{
	int	k;

	k = 1;
	write(1, "[ ", 2);
	while (k <= list[0])
	{
		ft_putnbr(list[k]);
		write(1, " ", 1);
		k++;
	}
	write(1, "]\n", 2);
}
