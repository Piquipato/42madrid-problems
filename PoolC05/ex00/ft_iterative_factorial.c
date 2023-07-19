/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:24:15 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/19 15:24:17 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("The factorial of %d is %d\n",
			atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
}
*/

int	ft_iterative_factorial(int nb)
{
	int	k;
	int	prd;

	k = 1;
	prd = 1;
	while (k <= nb)
	{
		prd = prd * k;
		k++;
	}
	return (prd);
}
