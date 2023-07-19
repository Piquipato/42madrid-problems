/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:42:06 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/19 16:42:08 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("is_prime(%s) = %d",
			argv[1], ft_is_prime(atoi(argv[1])));
}
*/

int	ft_is_prime(int nb)
{
	int	k;
	int	is_prime;

	is_prime = 0;
	k = nb;
	while (k != 0)
	{
		if (nb % k == 0)
			is_prime++;
		k--;
	}
	if (is_prime == 2)
		return (1);
	else
		return (0);
}
