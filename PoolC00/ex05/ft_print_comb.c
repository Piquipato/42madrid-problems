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
#include <math.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	int	j;
	int	nwL;

	j = 0;
	nwL = '\n';
	while (j < pow(10, n))
	{
		int	lD, nD, k, crr, tst;
		
		tst = 1;
		k = 0;
		crr = j;
		lD = crr%10;
		//printf("Initial Number: %d\n",crr);
		while (k < n)
		{
			crr = (crr - lD)/10;
			nD = crr%10;
			//printf("- Order: %d\n  - Last Digit: %d\n  - Next Digit: %d\n", k, lD, nD);
			if (lD <= nD && k != n-1)
			{
				tst = 0;
			}
			lD = nD;
			k++;
			//printf("- Test: %d\n", tst);
		}
		if (tst)
		{
			int l, nwS, cD;

			nwS = ' ';
			k = 0;
			crr = j;
			int pwB = pow(10,n-k);
			int pwS = pow(10,n-k-1);
			cD = (crr%pwB - crr%pwS)/pwS;
			while(k < n)
			{
				l = cD + '0';
				write(1, &l, 1);
				crr = crr - cD*pwS;
				k++;
				int pwB = pow(10,n-k);
				int pwS = pow(10,n-k-1);
				if (k != n-1) {
					cD = (crr%pwB - crr%pwS)/pwS;
				} else {
					cD = crr%pwB - crr;
				}
				
			}
			write(1, &nwS, 1);
		}
		j++;
	}
	write(1, &nwL, 1);
}

int	main() 
{
	ft_print_combn(2);
	return (0);
}