/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:10:03 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 20:10:08 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	print_num(int j, int n)
{
	int	k;
	int	ld;
	int	nd;
	int	crr;
	char	txt[16];

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

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			print_num(a, 2);
			write(1, " ", 1);
			print_num(b, 2);
			if (((b == 99) && (a == 99)) == 0)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		b = 0;
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
