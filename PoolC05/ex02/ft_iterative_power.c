/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:50:18 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/19 15:50:20 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s ^ %s = %d\n",
			argv[1], argv[2], ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/

int	ft_iterative_power(int nb, int power)
{
	int	prd;

	prd = nb;
	while (power > 1)
	{
		prd *= nb;
		power--;
	}
	return (prd);
}
