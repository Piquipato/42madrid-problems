/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:34:44 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 23:34:47 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	quot;
	int	rest;

	rest = a % b;
	quot = (a - rest) / b;
	*div = quot;
	*mod = rest;
}

int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 7;
	b = 3;
	printf("Address %d for division\n", &div);
	printf("Address %d for modulus\n", &mod);
	printf("Calculating for %d / %d...\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Result for division %d (at address %d)\n", div, &div);
	printf("Result for modulus %d (at address %d)\n", mod, &mod);
}
