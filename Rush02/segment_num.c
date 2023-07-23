/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segment_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:05:22 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/23 17:05:23 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*digit_list(int n);
int	*read_hundred(int *digits);
int	magnitude(int n);
void	print_list(int *list);
int *segment_num(int n);
int	*read_digits(int *digits);
int	*power(int base, int exp);
int	*append_elm(int *l1, int *l2);
int	*extract_sublist(int *list, int start, int end);
int	*empty_list();
int	calc_size(int *digits);


int	main(int argc, char **argv)
{
	int *digits = segment_num(atoi(argv[1]));
	print_list(digits);
}

void	print_list(int *list)
{
	printf("[ ");
	for (int k = 1; k <= list[0]; k++)
	{
		printf("%d ", list[k]);
	}
	printf("]\n");
}

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

int	calc_size(int *digits)
{
	int	size;

	size = 4;
	if (digits[1] == 0)
		size -= 2;
	if (digits[2] == 0 || digits[2] == 1)
		size--;
	if (digits[3] == 0)
		size--;
	return (size);
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
		if ((k - 3) != 0)
			appendage = append_elm(appendage, power(10, k - 3));
		out = append_elm(out, appendage);
		k -= 3;
	}
	return (out);
}

int	*empty_list()
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

int	*append_elm(int *l1, int *l2)
{
	const int	size = l1[0] + l2[0] + 1;
	int			*out;
	int			idx;
	int			lidx;

	out = (int *) malloc(size * sizeof(int));
	out[0] = size - 1;
	idx = 1;
	lidx = 1;
	while (lidx <= l1[0])
	{
		out[idx] = l1[lidx];
		idx++;
		lidx++;
	}
	lidx = 1;
	while (lidx <= l2[0])
	{
		out[idx] = l2[lidx];
		idx++;
		lidx++;
	}
	free(l1);
	free(l2);
	return (out);
}

int	*extract_sublist(int *list, int start, int end)
{
	int			*out;
	int			k;

	out = (int *) malloc((end - start + 2) * sizeof(int));
	out[0] = (end - start + 1);
	k = 0;
	while ((k + start) <= end)
	{
		out[k + 1] = list[start + k];
		k++;
	}
	return (out);
}

int *single_list(int n)
{
	int	*alt;

	alt = (int *) malloc(2 * sizeof(int));
	alt[0] = 1;
	alt[1] = n;
	return (alt);
}

int *segment_num(int n)
{
	return (read_digits(digit_list(n)));
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
