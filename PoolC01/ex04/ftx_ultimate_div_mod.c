/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_ultimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:48:06 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 23:48:09 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	numer;
	int	denom;
	int	quot;
	int	rest;

	numer = *a;
	denom = *b;
	rest = numer % denom;
	quot = (numer - rest) / denom;
	*a = quot;
	*b = rest;
}

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	printf("Address %d for division\n", &a);
	printf("Address %d for modulus\n", &b);
	printf("Calculating for %d / %d...\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Result for division %d (at address %d)\n", a, &a);
	printf("Result for modulus %d (at address %d)\n", b, &b);
}
