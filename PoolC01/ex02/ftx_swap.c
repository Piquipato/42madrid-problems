/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:18:01 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 23:32:49 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpb;
	*b = tmpa;
}

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 5;
	printf("Integer at %d with value %d\n", &a, a);
	printf("Integer at %d with value %d\n", &b, b);
	printf("Swapping variable addresses...\n");
	ft_swap(&a, &b);
	printf("Integer at %d with value %d\n", &a, a);
	printf("Integer at %d with value %d\n", &b, b);
}
