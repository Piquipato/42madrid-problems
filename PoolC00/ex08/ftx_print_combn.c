/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:56:35 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/06 15:56:38 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	test_num(int j, int n);
int	power(int base, int exp);
void	ft_print_combn(int n);
void	print_num(int j, int n);

void	ft_print_combn(int n)
{
	int	j;
	int	tst;

	j = 0;
	while (j < power(10, n))
	{
		tst = test_num(j, n);
		if (tst)
		{
			print_num(j, n);
			write(1, " ", 1);
		}
		j++;
	}
	write(1, "\n", 1);
}

int	power(int base, int exp)
{
	int	k;
	int	prd;

	prd = 1;
	k = 1;
	while (k <= exp)
	{
		prd = prd * base;
		++k; 
	}
	return (prd);
}

int	test_num(int j, int n)
{
	int	k;
	int	ld;
	int	nd;
	int	crr;
	int	tst;

	tst = 1;
	k = 0;
	crr = j;
	ld = crr % 10;
	while (k < n)
	{
		crr = (crr - ld) / 10;
		nd = crr % 10;
		if (ld <= nd && k != (n - 1))
		{
			tst = 0;
		}
		ld = nd;
		k++;
	}
	return (tst);
}

void	print_num(int j, int n)
{
	int	k;
	int	ld;
	int	nd;
	int	crr;
	char	txt[n + 1];

	k = n - 1;
	crr = j;
	ld = crr % 10;
	while (k >= 0)
	{
		crr = (crr - ld) / 10;
		nd = crr % 10;
		txt[k] = ld + '0';
		ld = nd;
		k--;
	}
	write(1, &txt, n + 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	dtc;

	j = 0;
	dtc = 0;
	while (j < argc)
	{
		if (dtc == 1)
		{
			ft_print_combn(atoi(argv[j]));
			dtc = 0;
		}
		if (strcmp(argv[j], "-n") == 0)
		{
			dtc = 1;
		}
		j++;
	}
	return (0);
}
