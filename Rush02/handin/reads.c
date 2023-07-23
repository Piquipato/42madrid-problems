/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reads.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:01:45 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/23 22:01:54 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "natnum.h"

int	*digit_list(int n)
{
	int	*out;
	int	k;

	out = (int *) malloc((magnitude(n) + 1) * sizeof(int));
	out[0] = magnitude(n);
	k = magnitude(n);
	while (k >= 1)
	{
		out[k] = n % 10;
		n /= 10;
		k--;
	}
	return (out);
}

int	*read_hundred(int *digits)
{
	int	*out;
	int	size;
	int	idx;

	size = calc_size(digits);
	out = (int *) malloc((size + 1) * sizeof(int));
	idx = 0;
	out[idx++] = size;
	if (digits[1] != 0)
	{
		out[idx++] = digits[1];
		out[idx++] = 100;
	}
	if (digits[2] != 0 && digits[2] != 1)
	{
		out[idx++] = digits[2] * 10;
		if (digits[3] != 0)
			out[idx++] = digits[3];
	}
	else
	{
		out[idx++] = digits[2] * 10 + digits[3];
	}
	free(digits);
	return (out);
}

int	*read_digits(int *digits)
{
	int	k;
	int	*sublist;
	int	*appendage;
	int	*out;

	k = digits[0];
	out = empty_list();
	while (k > 0)
	{
		sublist = extract_sublist(digits, digits[0] - k + 1, digits[0] - k + 3);
		appendage = read_hundred(sublist);
		if ((k - 3) != 0 && (sublist[1] != 0 || sublist[2] != 0
				|| sublist[3] != 0))
			appendage = append_elm(appendage, power(10, k - 3));
		out = append_elm(out, appendage);
		k -= 3;
	}
	return (out);
}

int	*segment_num(int n)
{
	return (read_digits(digit_list(n)));
}
