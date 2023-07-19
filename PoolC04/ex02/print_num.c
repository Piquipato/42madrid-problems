/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:52:51 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 20:52:55 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void	print_num(int nb, int k)
{
	int	letra;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		print_num(147483648, k);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		print_num(nb, k);
	}
	else if (nb / power(10, k) < 1 && k > 0)
	{
		write(1, "0", 1);
		k--;
		print_num(nb, k);
	}
	else if (nb > 9)
	{
		k--; 
		print_num(nb / 10, k); 
		print_num(nb % 10, 0);
	}
	else
	{
		letra = nb + 48;
		write(1, &letra, 1);
	}
}

/*
NORMINETTE APPROVED VERSION
void	print_num(int nb, int k)
{
	int	digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		print_num(nb, k);
	}
	else if (nb / power(10, k - 1) < 1 && k > 0)
	{
		write(1, "0", 1);
		k--;
		print_num(nb, k);
	}
	else if (nb > 9)
	{
		k--;
		print_num(nb / 10, k);
		print_num(nb % 10, 0);
	}
	else
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}
}
*/

int	main(int argc, char *argv[])
{
	int	j;
	int	dtcn;
	int	dtck;
	int	n;
	int	k;

	j = 0;
	dtcn = 0;
	dtck = 0;
	while (j < argc)
	{
		if (dtcn && dtck)
		{
			print_num(n, k);
			dtcn = 0;
			dtck = 0;
		}
		if (strcmp(argv[j], "-n") == 0 && (j + 1) < argc)
		{
			dtcn = 1;
			n = atoi(argv[j + 1]);
		}
		if (strcmp(argv[j], "-k") == 0 && (j + 1) < argc)
		{
			dtck = 1;
			k = atoi(argv[j + 1]);
		}
		j++;
	}
	return (0);
}
